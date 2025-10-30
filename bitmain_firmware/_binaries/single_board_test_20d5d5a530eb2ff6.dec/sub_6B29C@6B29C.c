void sub_6B29C(_DWORD *a1, int a2, int a3, int a4, int a5, ...)
{
  int *v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  char *v17; // r9
  char *v18; // r8
  char *v19; // r7
  char *v20; // r6
  size_t v21; // r0
  _DWORD *v22; // r3
  int v23; // r1
  char v24; // r2
  int v25; // t1
  char v26; // lr
  size_t v27; // r0
  unsigned __int8 v28[4]; // [sp+14h] [bp-454h] BYREF
  _DWORD v29[4]; // [sp+18h] [bp-450h] BYREF
  _DWORD v30[8]; // [sp+28h] [bp-440h] BYREF
  _DWORD v31[8]; // [sp+48h] [bp-420h] BYREF
  char s[1024]; // [sp+68h] [bp-400h] BYREF
  va_list va; // [sp+48Ch] [bp+24h] BYREF

  va_start(va, a5);
  memset(s, 0, sizeof(s));
  memset(v30, 0, sizeof(v30));
  memset(v31, 0, sizeof(v31));
  memset(v29, 0, sizeof(v29));
  if ( !dword_7169AC )
    dword_7169AC = (int)fopen("/mnt/worklog.txt", "ab");
  v7 = &a1[8 * a4 + 5];
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  v7 += 4;
  v30[0] = v8;
  v30[1] = v9;
  v30[2] = v10;
  v30[3] = v11;
  v12 = v7[1];
  v13 = v7[2];
  v14 = v7[3];
  v30[4] = *v7;
  v30[5] = v12;
  v30[6] = v13;
  v30[7] = v14;
  v15 = a1[3];
  v16 = a1[4];
  v31[0] = a1[2];
  v31[1] = v15;
  v31[2] = v16;
  v17 = sub_67AC8((unsigned __int8 *)v30, 32);
  v18 = sub_67AC8((unsigned __int8 *)v31, 12);
  v19 = sub_67AC8((unsigned __int8 *)va, 4);
  v20 = sub_67AC8(v28, 4);
  sprintf(s, "midstate %s data %s nonce %s version %s \r\n", v17, v18, v19, v20);
  v21 = strlen(s);
  fwrite(s, v21, 1u, (FILE *)dword_7169AC);
  fflush((FILE *)dword_7169AC);
  if ( !dword_65D344 )
    dword_65D344 = sub_6B0A4();
  printf("save nonce %s \n", s);
  if ( dword_65D344 > 0 )
  {
    memset(s, 0, sizeof(s));
    v22 = v29;
    v23 = dword_223680 + 47;
    do
    {
      v25 = *(unsigned __int8 *)++v23;
      v24 = v25;
      v22 = (_DWORD *)((char *)v22 + 1);
      v26 = v25 + 32;
      if ( (unsigned int)(v25 - 65) > 0x19 )
        *((_BYTE *)v22 - 1) = v24;
      else
        *((_BYTE *)v22 - 1) = v26;
    }
    while ( v22 != v30 );
    sprintf(s, "type %s midstate %s data %s nonce %s version %s\n", (const char *)v29, v17, v18, v19, v20);
    v27 = strlen(s);
    sub_6AC48(dword_65D344, s, v27);
  }
  puts("save send nonce end");
  if ( v17 )
    free(v17);
  if ( v18 )
    free(v18);
  if ( v19 )
    free(v19);
  if ( v20 )
    free(v20);
}
