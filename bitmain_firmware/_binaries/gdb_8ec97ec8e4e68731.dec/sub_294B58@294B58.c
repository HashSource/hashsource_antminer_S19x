int __fastcall sub_294B58(int a1, unsigned __int8 a2)
{
  size_t v4; // r5
  const char *v5; // r0
  const char *v6; // r6
  char *v7; // r7
  char *v8; // r0
  int v9; // r7
  int v10; // r5
  int v12; // r9
  size_t v13; // r11
  int v14; // r8
  int count; // r0
  wint_t wch; // r1
  size_t v17; // r0
  int v18; // r4
  char *v19; // r0
  const char *v20; // r6
  char *v21; // r1
  char *v22; // r3
  size_t v23; // r7
  char *v24; // r0
  wchar_t v25; // [sp+0h] [bp-24h] BYREF
  mbstate_t v26; // [sp+4h] [bp-20h]
  char src; // [sp+Ch] [bp-18h] BYREF
  char v28; // [sp+Dh] [bp-17h]

  if ( _ctype_get_mb_cur_max() != 1 )
  {
    v4 = dword_48BB60;
    if ( !dword_48BB60 )
    {
      v12 = dword_48BB00;
      v13 = dword_48BB0C;
      if ( dword_48BB00 <= 0 )
      {
        v12 = a1;
        dword_48BB00 = a1;
      }
      v14 = ++dword_48BB0C;
      count = p.__count;
      wch = p.__wch;
      *((_BYTE *)&dword_48BB00 + v13 + 16) = a2;
      v26.__count = count;
      v26.__wch = wch;
      v17 = mbrtowc(&v25, &byte_48BB10, v13 + 1, &p);
      if ( v17 == -2 )
      {
        p = v26;
        return 1;
      }
      if ( v17 == -1 )
      {
        dword_48BB0C = v13;
        src = byte_48BB10;
        v4 = 1;
        v28 = 0;
        memmove(&byte_48BB10, algn_48BB11, v13);
        p.__count = 0;
        p.__wch = 0;
      }
      else if ( v17 )
      {
        v4 = v13 + 1;
        memcpy(&src, &byte_48BB10, v13 + 1);
        *(&src + v14) = 0;
        dword_48BB0C = 0;
      }
      else
      {
        p.__count = 0;
        src = 0;
        dword_48BB0C = v13;
        p.__wch = 0;
      }
      a1 = v12;
      if ( (unsigned int)(v12 - 2) > 0x3FE )
        goto LABEL_4;
LABEL_25:
      v18 = v4 * a1;
      v19 = (char *)sub_93028(v18 + 1);
      v20 = v19;
      if ( v18 > 0 )
      {
        v22 = v19;
        v23 = v4 - (_DWORD)v19;
        do
        {
          v24 = strncpy(v22, &src, v4);
          v22 = &v24[v4];
        }
        while ( v18 > &v24[v4] - v20 );
        v21 = &v24[v23 + (_DWORD)v20];
      }
      else
      {
        v21 = v19;
      }
      dword_48BB00 = 0;
      *v21 = 0;
      if ( v20 && *v20 )
        sub_294748(v20);
      sub_297758(v20);
      return 0;
    }
  }
  v28 = 0;
  src = a2;
  v4 = 1;
  if ( (unsigned int)(a1 - 2) <= 0x3FE )
    goto LABEL_25;
LABEL_4:
  if ( a1 > 1024 )
  {
    v5 = (const char *)sub_93028((v4 << 10) + 1);
    v6 = v5;
    if ( (int)(v4 << 10) > 0 )
    {
      v7 = (char *)v5;
      do
      {
        v8 = v7;
        v7 += v4;
        strncpy(v8, &src, v4);
      }
      while ( (int)(v4 << 10) > v7 - v6 );
    }
    do
    {
      while ( 1 )
      {
        v9 = a1 >= 1024 ? 1024 : a1;
        v6[v9 * v4] = 0;
        if ( v6 )
        {
          if ( *v6 )
            break;
        }
        a1 -= v9;
        if ( !a1 )
          goto LABEL_16;
      }
      sub_294748(v6);
      a1 -= v9;
    }
    while ( a1 );
LABEL_16:
    v10 = a1;
    sub_297758(v6);
    dword_48BB00 = a1;
    return v10;
  }
  if ( _ctype_get_mb_cur_max() != 1 )
  {
    v10 = dword_48BB60;
    if ( !dword_48BB60 )
    {
      if ( src )
        sub_294748(&src);
      dword_48BB00 = 0;
      return v10;
    }
  }
  v10 = dword_48AAA0 & 0x800;
  if ( (dword_48AAA0 & 0x800) == 0 && sub_292D84() )
  {
    sub_292F08(a2);
    return v10;
  }
  LOWORD(v25) = a2;
  if ( a2 )
    sub_294748((const char *)&v25);
  return 0;
}
