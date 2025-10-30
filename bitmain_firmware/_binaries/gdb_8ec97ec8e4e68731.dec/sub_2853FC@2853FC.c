int __fastcall sub_2853FC(const char *a1, __int16 *a2, int a3)
{
  size_t v6; // r0
  int v7; // r2
  int v8; // r5
  const char *v9; // r4
  const char *v10; // r8
  unsigned int v11; // r3
  size_t v12; // r0
  size_t v13; // r6
  int v14; // r0
  const char *v15; // r0
  char v16; // r11
  const char *count; // r0
  size_t v18; // r6
  size_t v19; // r0
  int v20; // r8
  char *v21; // r7
  int v22; // r3
  bool v23; // zf
  const unsigned __int16 *v25; // r2
  __int32_t v26; // r0
  _IO_FILE *v27; // r1
  _IO_FILE **v28; // r5
  int v29; // r6
  const char *v30; // r0
  wchar_t pwc; // [sp+4h] [bp-10h] BYREF
  mbstate_t p; // [sp+8h] [bp-Ch] BYREF

  v6 = strlen(a1);
  v7 = (unsigned __int8)a1[a3];
  v8 = a3;
  if ( a3 )
    v8 = 1;
  v9 = &a1[a3];
  v10 = &a1[v6 + 1];
  if ( !v7 )
    v8 = 0;
  p.__wch = 0;
  p.__count = 0;
  if ( v8 )
  {
    LOWORD(v28) = (unsigned __int16)&dword_48AAB0;
    if ( v7 == 46 )
      v29 = 95;
    else
      v29 = 46;
    HIWORD(v28) = (unsigned int)&dword_48AAB0 >> 16;
    IO_putc(v29, *v28);
    IO_putc(v29, *v28);
    IO_putc(v29, *v28);
    v8 = 3;
  }
  else
  {
    v9 = a1;
  }
  while ( 1 )
  {
    v11 = *(unsigned __int8 *)v9;
    if ( !*v9 )
      break;
    while ( v11 > 0x1F )
    {
      if ( v11 == 127 )
      {
        IO_putc(94, (_IO_FILE *)dword_48AAB0);
        v27 = (_IO_FILE *)dword_48AAB0;
        v26 = 63;
        goto LABEL_36;
      }
      v12 = mbrtowc(&pwc, v9, v10 - v9, &p);
      v13 = v12;
      if ( v12 >= 0xFFFFFFFE )
      {
        v14 = 1;
        p.__count = 0;
        v13 = 1;
        p.__wch = 0;
      }
      else
      {
        if ( !v12 )
          goto LABEL_16;
        v14 = wcwidth(pwc);
        if ( v14 < 0 )
          v14 = 1;
      }
      v8 += v14;
      v15 = v9;
      v9 += v13;
      fwrite(v15, 1u, v13, (FILE *)dword_48AAB0);
      v11 = *(unsigned __int8 *)v9;
      if ( !*v9 )
        goto LABEL_16;
    }
    IO_putc(94, (_IO_FILE *)dword_48AAB0);
    v25 = *_ctype_b_loc();
    v26 = *(unsigned __int8 *)v9 | 0x40;
    if ( (v25[(__int16)v26] & 0x200) != 0 )
      v26 = (*_ctype_toupper_loc())[(__int16)v26];
    v27 = (_IO_FILE *)dword_48AAB0;
LABEL_36:
    IO_putc(v26, v27);
    v8 += 2;
    ++v9;
    p.__count = 0;
    p.__wch = 0;
  }
LABEL_16:
  if ( !dword_48ACC0 )
    return v8;
  if ( !dword_48ACF4 && !dword_470744 )
    return v8;
  if ( a1 == (const char *)a2 )
  {
    v30 = (const char *)sub_29B910(a1);
    p.__count = (int)v30;
    if ( !dword_48ACF4 )
    {
      if ( !sub_284858((int)v30) )
      {
        sub_297758(p.__count);
        return v8;
      }
      v20 = 47;
      sub_297758(p.__count);
      goto LABEL_58;
    }
    v20 = sub_285358(v30);
    goto LABEL_31;
  }
  v16 = *(a1 - 1);
  *((_BYTE *)a1 - 1) = 0;
  if ( a2 && *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)a2 == 47 )
    {
      if ( *((_BYTE *)a2 + 1) )
      {
        if ( *((_BYTE *)a2 + 1) == 47 && !*((_BYTE *)a2 + 2) )
          a2 = &word_398974;
      }
      else
      {
        a2 = (__int16 *)"//";
      }
    }
  }
  else
  {
    a2 = &word_398974;
  }
  count = (const char *)sub_29B910(a2);
  p.__count = (int)count;
  if ( off_48ACDC )
  {
    off_48ACDC(&p);
    count = (const char *)p.__count;
  }
  v18 = strlen(count);
  v19 = strlen(a1);
  v20 = 47;
  v21 = (char *)sub_93028(v19 + v18 + 2);
  strcpy(v21, (const char *)p.__count);
  v22 = *(unsigned __int8 *)(p.__count + v18 - 1);
  v23 = v22 == 47;
  if ( v22 == 47 )
    --v18;
  else
    LOBYTE(v22) = 47;
  if ( !v23 )
    v21[v18] = v22;
  v21[v18] = 47;
  strcpy(&v21[v18 + 1], a1);
  if ( dword_48ACF4 )
  {
    v20 = sub_285358(v21);
    sub_297758(v21);
    *((_BYTE *)a1 - 1) = v16;
LABEL_31:
    sub_297758(p.__count);
    if ( !v20 )
      return v8;
    goto LABEL_58;
  }
  if ( !sub_284858((int)v21) )
  {
    sub_297758(v21);
    *((_BYTE *)a1 - 1) = v16;
    sub_297758(p.__count);
    return v8;
  }
  sub_297758(v21);
  *((_BYTE *)a1 - 1) = v16;
  sub_297758(p.__count);
LABEL_58:
  IO_putc(v20, (_IO_FILE *)dword_48AAB0);
  return v8 + 1;
}
