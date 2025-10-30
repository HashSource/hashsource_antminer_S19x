int __fastcall sub_7DD4C(unsigned int a1, _DWORD *a2, const char **a3, int a4)
{
  unsigned int v5; // r9
  unsigned int v6; // r11
  const char *v7; // r7
  int v8; // r3
  bool v9; // zf
  int v10; // r3
  const char **v11; // r5
  const char **v12; // r4
  const char *v13; // r0
  int v14; // r10
  const char *v15; // t1
  size_t v16; // r0
  int v17; // r8
  const char *i; // r2
  const char *v19; // t1
  int v21; // r4
  int v22; // r7
  int v23; // r8
  int v24; // r2
  char *v25; // r1
  int v26; // r4
  const char *v27; // t1
  int v31; // [sp+1Ch] [bp-28h]
  char s[16]; // [sp+2Ch] [bp-18h] BYREF

  if ( a1 > 0xF )
    fprintf((FILE *)option_usage_fp, (const char *)dword_1082E4, *(_DWORD *)(a1 + 28), a2[6], a2[13]);
  v5 = 0;
  v6 = 0;
  fprintf((FILE *)option_usage_fp, off_B95FC, a2[13]);
  v7 = *a3;
  v8 = *(unsigned __int8 *)*a3;
  v9 = v8 == 127;
  if ( v8 == 127 )
    v10 = a4;
  else
    v10 = 0;
  if ( v9 )
  {
    v7 = a3[1];
    ++a3;
    --v10;
  }
  else
  {
    v31 = v10;
  }
  if ( v9 )
    a4 = v10;
  v11 = a3;
  if ( v9 )
    v10 = 1;
  v12 = a3;
  if ( v9 )
    v31 = v10;
  v13 = v7;
  v14 = a4;
  while ( 1 )
  {
    --v14;
    v16 = strlen(v13) + 1;
    v5 += v16;
    if ( v6 < v16 )
      v6 = v16;
    if ( v14 <= 0 )
      break;
    v15 = v12[1];
    ++v12;
    v13 = v15;
  }
  if ( v6 > 0x23 )
  {
    v17 = a4;
    for ( i = v7; ; i = v19 )
    {
      --v17;
      fprintf((FILE *)option_usage_fp, "  %s\n", i);
      if ( v17 <= 0 )
        break;
      v19 = v11[1];
      ++v11;
    }
    goto LABEL_24;
  }
  if ( v5 <= 0x4B )
  {
    fputc(32, (FILE *)option_usage_fp);
    v26 = a4;
    do
    {
      fputc(32, (FILE *)option_usage_fp);
      --v26;
      v27 = *a3++;
      fputs(v27, (FILE *)option_usage_fp);
    }
    while ( v26 > 0 );
    fputc(10, (FILE *)option_usage_fp);
LABEL_24:
    if ( a1 <= 0xF )
      goto LABEL_25;
    goto LABEL_37;
  }
  v21 = a4;
  v22 = 0;
  sprintf(s, "%%-%ds", v6);
  v23 = sub_8CBE0(78);
  fwrite("  ", 1u, 2u, (FILE *)option_usage_fp);
  while ( --v21 > 0 )
  {
    ++v22;
    v24 = (int)*v11++;
    if ( v22 == v23 )
      v25 = "%s\n  ";
    else
      v25 = s;
    if ( v22 == v23 )
      v22 = 0;
    fprintf((FILE *)option_usage_fp, v25, v24);
  }
  fprintf((FILE *)option_usage_fp, "%s\n", *v11);
  if ( a1 > 0xF )
  {
LABEL_37:
    fprintf((FILE *)option_usage_fp, off_B94D8, v31, a4 - 1 + v31);
    (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
  }
LABEL_25:
  if ( (unsigned __int16)a2[4] >> 12 != 4 )
    return fprintf((FILE *)option_usage_fp, off_B94D8, v31, a4 - 1 + v31);
  fprintf((FILE *)option_usage_fp, off_B957C, a4);
  return fputs(off_B95F4, (FILE *)option_usage_fp);
}
