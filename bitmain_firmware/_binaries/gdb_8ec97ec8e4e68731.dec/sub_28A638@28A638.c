int __fastcall sub_28A638(const char *a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r9
  size_t v7; // r4
  bool v8; // zf
  int v9; // r2
  ssize_t v10; // r11
  unsigned __int8 *v11; // r11
  unsigned __int8 *v12; // r7
  unsigned __int8 *v13; // r2
  int v14; // r4
  unsigned __int8 *v15; // r3
  int v16; // r3
  bool v17; // zf
  unsigned __int8 *v18; // r2
  bool v19; // zf
  int v20; // t1
  bool v22; // zf
  size_t v23; // r0
  char *v24; // r0
  int *v25; // r4
  unsigned __int8 *v26; // [sp+4h] [bp-70h]
  char v27[48]; // [sp+8h] [bp-6Ch] BYREF
  size_t v28; // [sp+38h] [bp-3Ch]
  int v29; // [sp+3Ch] [bp-38h]

  dword_48ADE8 = a2;
  dword_48ADB4 = (int)a1;
  v4 = sub_29B910(a1);
  if ( _xstat64(3, v4, v27) < 0 || (v5 = open64(v4, 0), v6 = v5, v5 < 0) )
  {
    v25 = _errno_location();
    goto LABEL_49;
  }
  v7 = v28;
  v8 = v29 == 0;
  if ( !v29 )
    v8 = 1;
  v9 = !v8;
  if ( v9 | (v28 == -1) )
  {
    close(v5);
    v25 = _errno_location();
    *v25 = 27;
    goto LABEL_49;
  }
  v26 = (unsigned __int8 *)sub_93028(v28 + 1);
  v10 = read(v6, v26, v7);
  close(v6);
  if ( v10 < 0 )
  {
    sub_297758(v26);
    v25 = _errno_location();
LABEL_49:
    sub_297758(v4);
    if ( dword_48B6B8 )
      sub_291120(dword_48B6B8);
    return *v25;
  }
  if ( dword_48B6B8 )
    sub_291120(dword_48B6B8);
  v26[v10] = 0;
  v11 = &v26[v10];
  sub_297758(v4);
  if ( dword_48B6B8 )
    sub_291120(dword_48B6B8);
  if ( !v26 )
  {
    v25 = _errno_location();
    return *v25;
  }
  if ( !a2 && (const char *)dword_48ADEC != a1 )
  {
    if ( dword_48ADEC )
      free((void *)dword_48ADEC);
    v23 = strlen(a1);
    v24 = (char *)sub_93028(v23 + 1);
    dword_48ADEC = (int)strcpy(v24, a1);
  }
  dword_48ADAC = 1;
  dword_48ADB0 = 1;
  if ( v26 < v11 )
  {
    v12 = v26;
    do
    {
      if ( v11 == v12 )
      {
        v13 = v11;
        v14 = 0;
      }
      else if ( *v12 == 10 )
      {
        v13 = v12;
        v14 = 0;
      }
      else
      {
        v15 = v12 + 1;
        v14 = 0;
        while ( 1 )
        {
          v8 = v11 == v15;
          v13 = v15;
          ++v14;
          ++v15;
          if ( v8 )
            break;
          if ( *v13 == 10 )
            goto LABEL_26;
        }
        v13 = v11;
      }
LABEL_26:
      *v13 = 0;
      v16 = *v12;
      if ( *v12 )
      {
        v17 = v16 == 9;
        if ( v16 != 9 )
          v17 = v16 == 32;
        if ( v17 )
        {
          v18 = v12 + 1;
          while ( 1 )
          {
            v12 = v18;
            v20 = *v18++;
            v16 = v20;
            --v14;
            if ( !v20 )
              break;
            v19 = v16 == 9;
            if ( v16 != 9 )
              v19 = v16 == 32;
            if ( !v19 )
              goto LABEL_39;
          }
        }
        else
        {
LABEL_39:
          v22 = v16 == 0;
          if ( v16 )
            v22 = v16 == 35;
          if ( !v22 )
            sub_289D94(v12);
        }
      }
      v12 += v14 + 1;
      ++dword_48ADB0;
    }
    while ( v12 < v11 );
  }
  sub_297758(v26);
  dword_48ADAC = 0;
  return 0;
}
