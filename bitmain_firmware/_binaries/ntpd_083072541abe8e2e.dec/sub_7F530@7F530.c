char *__fastcall sub_7F530(int a1, const char **a2)
{
  int v2; // r2
  char *v4; // r4
  int v5; // r1
  int v6; // r3
  int v7; // t1
  const char *v8; // r8
  int *v9; // r11
  char *v10; // r0
  int v11; // r9
  void *v12; // r0
  int v13; // r5
  FILE *v14; // r7
  const char *v15; // r6
  char *v16; // r0
  char *v18; // r0
  _BYTE *v19; // r9
  char *v20; // r0
  int v21; // r4
  const char *v22; // r0
  char *v23; // r0
  const char *v24; // r10
  size_t v25; // r7
  size_t v26; // r7
  char *v27; // r0
  const char *v28; // r3
  size_t v29; // r11
  size_t v30; // r11
  void *v31; // r0
  void *v32; // r9
  int *v33; // r8
  int v34; // r5
  FILE *v35; // r7
  const char *v36; // r6
  char *v37; // r0
  const char *v39; // [sp+14h] [bp-1078h]
  _BYTE v40[16]; // [sp+18h] [bp-1074h] BYREF
  int v41; // [sp+28h] [bp-1064h]
  _BYTE dest[4092]; // [sp+84h] [bp-1008h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 94);
  if ( (v2 & 0x7FFF) == 0 )
    return 0;
  v4 = *(char **)(*(_DWORD *)(a1 + 68) + (v2 << 6) + 24);
  if ( v4 && *v4 )
    goto LABEL_9;
  v5 = *(_DWORD *)(a1 + 52);
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)(v5 + 4) )
  {
    v6 = v5 + 4;
    do
    {
      v5 = v6;
      v7 = *(_DWORD *)(v6 + 4);
      v6 += 4;
    }
    while ( v7 );
  }
  v4 = *(char **)v5;
  if ( **(_BYTE **)v5 != 36 )
  {
LABEL_9:
    v8 = 0;
    goto LABEL_10;
  }
  v19 = v4 + 1;
  v20 = strchr(v4 + 1, 47);
  v8 = v20;
  if ( !v20 )
  {
    v4 = getenv(v4 + 1);
    if ( v4 )
      goto LABEL_10;
LABEL_43:
    v4 = 0;
    fprintf(stderr, off_B8540[0], *(_DWORD *)(a1 + 28));
    fprintf(stderr, off_B8510[0], v19);
    return v4;
  }
  v21 = v20 - v19;
  if ( v20 - v19 > 127 )
    return 0;
  v22 = (const char *)memcpy(dest, v19, v20 - v19);
  dest[v21] = 0;
  v23 = getenv(v22);
  v24 = v23;
  if ( !v23 )
    goto LABEL_43;
  v25 = strlen(v23);
  v26 = v25 + strlen(v8) + 2;
  v27 = (char *)malloc(v26);
  v4 = v27;
  if ( !v27 )
    sub_C610(v26);
  v28 = v8;
  v8 = (_BYTE *)(&dword_0 + 1);
  sprintf(v27, "%s/%s", v24, v28);
LABEL_10:
  if ( !_xstat64(3, v4, v40) )
  {
    if ( (v41 & 0xF000) == 0x4000 )
    {
      v29 = strlen(v4);
      v39 = *(const char **)(a1 + 36);
      v30 = v29 + strlen(v39) + 2;
      v31 = malloc(v30);
      v32 = v31;
      if ( !v31 )
        sub_C610(v30);
      sub_6C054((int)v31, v30, "%s/%s", v4, v39);
      if ( v8 )
        free(v4);
      if ( _xstat64(3, v32, v40) )
      {
        v33 = _errno_location();
        if ( *v33 != 2 )
        {
          v4 = 0;
          fprintf(stderr, off_B8540[0], *(_DWORD *)(a1 + 28));
          v34 = *v33;
          v35 = stderr;
          v36 = off_B8500[0];
          v37 = strerror(*v33);
          fprintf(v35, v36, v34, v37, v32);
          free(v32);
          return v4;
        }
        v4 = (char *)v32;
        v41 = 0x8000;
        v8 = (_BYTE *)(&dword_0 + 1);
        goto LABEL_17;
      }
      if ( (v41 & 0xF000) == 0x8000 )
      {
        v4 = (char *)v32;
        v8 = (_BYTE *)(&dword_0 + 1);
        goto LABEL_17;
      }
      v4 = (char *)v32;
      fprintf(stderr, off_B8540[0], *(_DWORD *)(a1 + 28), v32);
      goto LABEL_25;
    }
    if ( (v41 & 0xF000) == 0x8000 )
      goto LABEL_17;
    fprintf(stderr, off_B8540[0], *(_DWORD *)(a1 + 28), v4);
    if ( v8 )
    {
LABEL_25:
      v18 = v4;
      v4 = 0;
      free(v18);
      return v4;
    }
    return 0;
  }
  v9 = _errno_location();
  if ( *v9 != 2
    || (v10 = strrchr(v4, 47)) != 0
    && ((v11 = v10 - v4, (unsigned int)(v10 - v4) >= 0x1000)
     || (v12 = memcpy(dest, v4, v10 - v4), dest[v11] = 0, _xstat64(3, v12, v40))
     || (v41 & 0xF000) != 0x4000) )
  {
    fprintf(stderr, off_B8540[0], *(_DWORD *)(a1 + 28));
    v13 = *v9;
    v14 = stderr;
    v15 = off_B8500[0];
    v16 = strerror(*v9);
    fprintf(v14, v15, v13, v16, v4);
    if ( v8 )
      free(v4);
    return 0;
  }
  v41 = 0x8000;
LABEL_17:
  unlink(v4);
  *a2 = v8;
  return v4;
}
