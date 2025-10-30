int __fastcall sub_2826DC(int a1)
{
  int v3; // r8
  int v4; // r0
  int v5; // r6
  const unsigned __int16 **v6; // r0
  int v7; // r9
  wint_t v8; // r0
  int v9; // r6
  signed int v10; // r0
  int v11; // r0
  size_t v12; // r0
  wint_t v13; // r6
  wint_t v14; // [sp+0h] [bp-20h] BYREF
  mbstate_t ps; // [sp+4h] [bp-1Ch] BYREF
  char s[52]; // [sp+Ch] [bp-14h] BYREF

  if ( dword_4900D8 < dword_4900DC )
  {
    if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
    {
      v3 = 0;
      while ( 1 )
      {
        if ( !a1 )
          return 0;
        v5 = dword_4900D8;
        if ( dword_4900D8 >= dword_4900DC )
          return 0;
        v6 = _ctype_b_loc();
        v7 = *(unsigned __int8 *)(dword_48AAD4 + v5);
        if ( ((*v6)[v7] & 0x100) != 0 )
        {
          v3 = (*_ctype_tolower_loc())[v7];
          if ( !v3 )
            goto LABEL_16;
        }
        else if ( ((*v6)[v7] & 0x200) == 0 || (v3 = (*_ctype_toupper_loc())[v7]) == 0 )
        {
LABEL_16:
          sub_295408(1, v3);
          goto LABEL_10;
        }
        sub_2926F8();
        sub_2825F4(1, v3);
        if ( dword_4900D8 < v5 )
          ++dword_4900D8;
        v4 = sub_295A08(1, v3);
        sub_292748(v4);
        sub_2821A4();
LABEL_10:
        --a1;
      }
    }
    ps.__count = 0;
    ps.__wch = 0;
    if ( sub_29B320(dword_48AAD4, dword_4900D8, &ps) > 0 )
      --a1;
    while ( 1 )
    {
      if ( !a1 || dword_4900D8 >= dword_4900DC )
        return 0;
      v12 = mbrtowc((wchar_t *)&v14, (const char *)(dword_48AAD4 + dword_4900D8), dword_4900DC - dword_4900D8, &ps);
      if ( v12 >= 0xFFFFFFFE )
      {
        v13 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
        v14 = v13;
      }
      else if ( v12 )
      {
        v13 = v14;
      }
      else
      {
        v13 = 0;
        v14 = 0;
      }
      if ( iswupper(v13) )
      {
        v8 = towlower(v13);
        v14 = v8;
        if ( !v8 )
          goto LABEL_36;
      }
      else if ( !iswlower(v13) || (v8 = towupper(v13), (v14 = v8) == 0) )
      {
LABEL_36:
        sub_295408(1, 0);
        goto LABEL_26;
      }
      v9 = dword_4900D8;
      v10 = wcrtomb(s, v8, &ps);
      if ( v10 >= 0 )
        s[v10] = 0;
      sub_2926F8();
      sub_2825F4(1, 0);
      if ( v9 > dword_4900D8 )
        ++dword_4900D8;
      v11 = sub_294F3C(s);
      sub_292748(v11);
      sub_2821A4();
LABEL_26:
      --a1;
    }
  }
  return 0;
}
