int __fastcall sub_295530(int a1, int a2)
{
  int v2; // r8
  int v4; // r6
  int v6; // r4
  wint_t v7; // r5
  int v8; // r7
  __int32_t v9; // r10
  int v11; // r5
  size_t v12; // r0
  wchar_t v13; // r10
  wint_t v14; // r0
  wint_t v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // [sp+0h] [bp-2Ch]
  wchar_t pwc; // [sp+8h] [bp-24h] BYREF
  mbstate_t p; // [sp+Ch] [bp-20h] BYREF
  char s[24]; // [sp+14h] [bp-18h] BYREF

  v4 = dword_4900D8;
  sub_29551C(a1, 0);
  v6 = dword_4900D8;
  if ( a1 < 0 )
    v2 = v4;
  p.__wch = 0;
  if ( a1 >= 0 )
  {
    v2 = dword_4900D8;
    v6 = v4;
  }
  p.__count = 0;
  sub_292798(v6, v2);
  if ( v6 < v2 )
  {
    v18 = 0;
    do
    {
      v7 = sub_29B44C(dword_48AAD4, v6);
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
        v8 = v6 + 1;
      else
        v8 = sub_29B4D0(dword_48AAD4);
      if ( !sub_2911D0(v7) )
      {
        v18 = 0;
        goto LABEL_19;
      }
      LOBYTE(v9) = v7;
      if ( a2 == 3 )
      {
        if ( v18 )
        {
          if ( _ctype_get_mb_cur_max() == 1 || dword_48BB60 )
            goto LABEL_17;
          if ( (v7 & 0xFFFFFF80) == 0 )
          {
            if ( (v7 & 0xFFFFFF00) == 0 )
              goto LABEL_27;
            goto LABEL_18;
          }
          v11 = 2;
        }
        else
        {
          if ( _ctype_get_mb_cur_max() == 1 )
          {
            v18 = 1;
            if ( (v7 & 0xFFFFFF00) != 0 )
              goto LABEL_18;
            goto LABEL_35;
          }
          if ( dword_48BB60 || (v7 & 0xFFFFFF80) == 0 )
          {
            v18 = 1;
            goto LABEL_34;
          }
          v18 = 1;
          v11 = 1;
        }
      }
      else
      {
        if ( _ctype_get_mb_cur_max() == 1 || dword_48BB60 || (v7 & 0xFFFFFF80) == 0 )
        {
          if ( a2 != 1 )
          {
LABEL_17:
            if ( (v7 & 0xFFFFFF00) == 0 )
            {
LABEL_27:
              if ( ((*_ctype_b_loc())[v7] & 0x100) != 0 )
                v9 = (*_ctype_tolower_loc())[v7];
            }
LABEL_18:
            *(_BYTE *)(dword_48AAD4 + v6) = v9;
            goto LABEL_19;
          }
LABEL_34:
          if ( (v7 & 0xFFFFFF00) != 0 )
            goto LABEL_18;
LABEL_35:
          if ( ((*_ctype_b_loc())[v7] & 0x200) != 0 )
            v9 = (*_ctype_toupper_loc())[v7];
          goto LABEL_18;
        }
        v11 = a2;
      }
      v12 = mbrtowc(&pwc, (const char *)(dword_48AAD4 + v6), v2 - v6, &p);
      if ( v12 >= 0xFFFFFFFE )
      {
        v13 = *(unsigned __int8 *)(dword_48AAD4 + v6);
        pwc = v13;
        v14 = v13;
        if ( v11 != 1 )
          goto LABEL_43;
      }
      else
      {
        if ( v12 )
        {
          v13 = pwc;
        }
        else
        {
          v13 = 0;
          pwc = 0;
        }
        v14 = v13;
        if ( v11 != 1 )
        {
LABEL_43:
          if ( iswupper(v14) )
          {
            v15 = towlower(v13);
            goto LABEL_45;
          }
          goto LABEL_19;
        }
      }
      if ( iswlower(v14) )
      {
        v15 = towupper(v13);
LABEL_45:
        if ( v15 != v13 )
        {
          v16 = wcrtomb(s, v15, &p);
          v17 = dword_48AAD4;
          if ( v16 > 0 )
            s[v16] = 0;
          strncpy((char *)(v17 + v6), s, v16);
        }
      }
LABEL_19:
      v6 = v8;
    }
    while ( v2 > v8 );
  }
  dword_4900D8 = v2;
  return 0;
}
