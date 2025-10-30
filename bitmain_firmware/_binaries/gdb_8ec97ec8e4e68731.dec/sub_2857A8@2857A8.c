signed int __fastcall sub_2857A8(char **a1, signed int a2, const char *a3)
{
  signed int v3; // r9
  unsigned __int8 **v4; // r5
  unsigned __int8 *v5; // r6
  unsigned __int8 *v6; // t1
  int v7; // r4
  const unsigned __int16 **v8; // r8
  __int32_t v9; // r6
  const unsigned __int16 *v10; // r11
  __int32_t v11; // r10
  size_t v12; // r0
  signed int v13; // r10
  size_t v14; // r0
  wint_t v15; // r6
  int v16; // r3
  size_t v17; // r0
  size_t v18; // r5
  char *v19; // r0
  int v20; // r3
  char *v21; // r7
  char **v22; // r8
  signed int v23; // r6
  int v24; // r4
  const char *v25; // r9
  const char *v26; // t1
  int v27; // r6
  int v28; // r11
  int v29; // r3
  int v30; // lr
  unsigned __int8 *v31; // r3
  int v32; // r0
  bool v33; // cc
  int v34; // r0
  size_t v35; // r0
  char *v36; // r0
  unsigned __int8 **v38; // [sp+Ch] [bp-38h]
  wchar_t pwc; // [sp+20h] [bp-24h] BYREF
  wchar_t v43; // [sp+24h] [bp-20h] BYREF
  mbstate_t p; // [sp+28h] [bp-1Ch] BYREF
  mbstate_t v45; // [sp+30h] [bp-14h] BYREF
  mbstate_t v46; // [sp+38h] [bp-Ch] BYREF

  if ( a2 <= 1 )
  {
    v18 = (size_t)&loc_186A0;
    v17 = (size_t)&loc_186A0;
    v3 = (signed int)&loc_186A0;
  }
  else
  {
    v3 = (signed int)&loc_186A0;
    v4 = (unsigned __int8 **)(a1 + 1);
    v38 = (unsigned __int8 **)&a1[a2];
    do
    {
      if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
      {
        p.__count = 0;
        p.__wch = 0;
        v45.__count = 0;
        v45.__wch = 0;
      }
      v6 = *v4++;
      v5 = v6;
      v7 = dword_48ACE8;
      if ( dword_48ACE8 )
      {
        v7 = 0;
        v8 = _ctype_b_loc();
        while ( 1 )
        {
          v9 = v5[v7];
          v10 = *v8;
          if ( ((*v8)[(__int16)v9] & 0x100) != 0 )
            v9 = (*_ctype_tolower_loc())[(__int16)v9];
          if ( !v9 )
            break;
          v11 = (*v4)[v7];
          if ( (v10[v11] & 0x100) != 0 )
            v11 = (*_ctype_tolower_loc())[v11];
          if ( !v11 )
            break;
          if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
          {
            if ( v9 != v11 )
              break;
          }
          else
          {
            v12 = strlen((const char *)&(*(v4 - 1))[v7]);
            v13 = mbrtowc(&pwc, (const char *)&(*(v4 - 1))[v7], v12, &p);
            v14 = strlen((const char *)&(*v4)[v7]);
            mbrtowc(&v43, (const char *)&(*v4)[v7], v14, &v45);
            v15 = towlower(pwc);
            pwc = v15;
            v43 = towlower(v43);
            if ( v15 != v43 )
              break;
            if ( v13 > 1 )
              v7 += v13 - 1;
          }
          v5 = *(v4 - 1);
          ++v7;
        }
      }
      else
      {
        v27 = *v5;
        if ( v27 )
        {
          v28 = **v4;
          if ( **v4 )
          {
            do
            {
              if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
              {
                if ( v28 != v27 )
                  break;
              }
              else
              {
                v30 = (int)*(v4 - 1);
                v31 = *v4;
                v46 = p;
                if ( !sub_29B254(v30, v7, &p, v31, v7, &v45) )
                  break;
                v32 = sub_29B1F4(&(*(v4 - 1))[v7], &v46);
                v33 = v32 <= 1;
                v34 = v32 - 1;
                if ( !v33 )
                  v7 += v34;
              }
              v29 = (int)*(v4 - 1);
              ++v7;
              v27 = *(unsigned __int8 *)(v29 + v7);
              if ( !*(_BYTE *)(v29 + v7) )
                break;
              v28 = (*v4)[v7];
            }
            while ( (*v4)[v7] );
          }
        }
      }
      if ( v3 >= v7 )
        v3 = v7;
    }
    while ( v38 != v4 );
    v16 = (int)a3;
    if ( a3 )
      v16 = 1;
    if ( v3 )
      v16 = 0;
    if ( v16 )
    {
      v18 = *(unsigned __int8 *)a3;
      if ( *a3 )
      {
        v35 = strlen(a3);
        v36 = (char *)sub_93028(v35 + 1);
        *a1 = v36;
        strcpy(v36, a3);
        return a2;
      }
      v17 = 1;
      v3 = *(unsigned __int8 *)a3;
    }
    else
    {
      v17 = v3 + 1;
      v18 = v3;
    }
  }
  v19 = (char *)sub_93028(v17);
  v20 = dword_48ACE8;
  *a1 = v19;
  if ( v20 )
  {
    v21 = (char *)dword_48ACC0;
    if ( dword_48ACC0 )
    {
      if ( off_48ACD4 )
      {
        v21 = (char *)dword_4900F0;
        if ( dword_4900F0 )
        {
          v21 = (char *)dword_47074C;
          if ( dword_47074C )
          {
            v21 = (char *)((int (__fastcall *)(const char *, int))off_48ACD4)(a3, dword_4900F8);
            a3 = v21;
          }
        }
      }
      else
      {
        v21 = 0;
      }
    }
    v22 = a1;
    qsort(a1 + 1, a2, 4u, (__compar_fn_t)sub_29160C);
    v23 = strlen(a3);
    if ( v23 > v3 )
    {
      strncpy(*a1, a3, v18);
    }
    else
    {
      if ( !a2 )
        goto LABEL_47;
      v24 = 1;
      while ( 1 )
      {
        v26 = v22[1];
        ++v22;
        v25 = v26;
        if ( !strncmp(v26, a3, v23) )
          break;
        if ( a2 < ++v24 )
          goto LABEL_47;
      }
      strncpy(*a1, v25, v18);
      if ( a2 < v24 )
LABEL_47:
        strncpy(*a1, a1[1], v18);
    }
    if ( v21 )
      free(v21);
  }
  else
  {
    strncpy(v19, a1[1], v18);
  }
  (*a1)[v18] = 0;
  return a2;
}
