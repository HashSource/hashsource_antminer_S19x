char *__fastcall sub_80A10(int a1, const char **a2)
{
  int v3; // r2
  char *v5; // r4
  int v6; // r1
  int v7; // r3
  int v8; // t1
  const char *v9; // r5
  int *v10; // r11
  char *v11; // r0
  int v12; // r8
  void *v13; // r0
  _BYTE *v15; // r9
  char *v16; // r0
  int v17; // r4
  const char *v18; // r0
  char *v19; // r0
  const char *v20; // r8
  size_t v21; // r4
  size_t v22; // r0
  char *v23; // r0
  const char *v24; // r3
  int v25; // r6
  FILE *v26; // r8
  const char *v27; // r7
  char *v28; // r0
  size_t v29; // r11
  char *v30; // r11
  int *v31; // r4
  int v32; // r4
  FILE *v33; // r6
  const char *v34; // r5
  char *v35; // r0
  size_t v36; // [sp+Ch] [bp-1078h]
  _BYTE v37[16]; // [sp+10h] [bp-1074h] BYREF
  int v38; // [sp+20h] [bp-1064h]
  _BYTE dest[4036]; // [sp+7Ch] [bp-1008h] BYREF

  v3 = *(unsigned __int16 *)(a1 + 94);
  if ( (v3 & 0x7FFF) == 0 )
    return 0;
  v5 = *(char **)(*(_DWORD *)(a1 + 68) + (v3 << 6) + 24);
  if ( v5 && *v5 )
    goto LABEL_9;
  v6 = *(_DWORD *)(a1 + 52);
  if ( !v6 )
    return 0;
  if ( *(_DWORD *)(v6 + 4) )
  {
    v7 = v6 + 4;
    do
    {
      v6 = v7;
      v8 = *(_DWORD *)(v7 + 4);
      v7 += 4;
    }
    while ( v8 );
  }
  v5 = *(char **)v6;
  if ( **(_BYTE **)v6 != 36 )
  {
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  v15 = v5 + 1;
  v16 = strchr(v5 + 1, 47);
  v9 = v16;
  if ( !v16 )
  {
    v5 = getenv(v5 + 1);
    if ( v5 )
      goto LABEL_10;
    goto LABEL_20;
  }
  v17 = v16 - v15;
  if ( v16 - v15 > 127 )
    return 0;
  v18 = (const char *)memcpy(dest, v15, v16 - v15);
  dest[v17] = 0;
  v19 = getenv(v18);
  v20 = v19;
  if ( !v19 )
  {
LABEL_20:
    fprintf(stderr, off_B9544, *(_DWORD *)(a1 + 28));
    fprintf(stderr, off_B9514, v15);
    return 0;
  }
  v21 = strlen(v19);
  v22 = strlen(v9);
  v23 = (char *)sub_7FBE0(v21 + v22 + 2);
  v5 = v23;
  if ( !v23 )
    return 0;
  v24 = v9;
  v9 = (_BYTE *)(&dword_0 + 1);
  sprintf(v23, "%s/%s", v20, v24);
LABEL_10:
  if ( _xstat64(3, v5, v37) )
  {
    v10 = _errno_location();
    if ( *v10 == 2 )
    {
      v11 = strrchr(v5, 47);
      if ( !v11 )
      {
        v38 = 0x8000;
LABEL_18:
        unlink(v5);
        *a2 = v9;
        return v5;
      }
      v12 = v11 - v5;
      if ( (unsigned int)(v11 - v5) < 0x1000 )
      {
        v13 = memcpy(dest, v5, v11 - v5);
        dest[v12] = 0;
        if ( !_xstat64(3, v13, v37) && (v38 & 0xF000) == 0x4000 )
        {
          v38 = 0x8000;
          goto LABEL_18;
        }
      }
    }
    fprintf(stderr, off_B9544, *(_DWORD *)(a1 + 28));
    v25 = *v10;
    v26 = stderr;
    v27 = off_B9504;
    v28 = strerror(*v10);
    fprintf(v26, v27, v25, v28, v5);
    if ( !v9 )
      return 0;
    goto LABEL_26;
  }
  if ( (v38 & 0xF000) != 0x4000 )
  {
    if ( (v38 & 0xF000) == 0x8000 )
      goto LABEL_18;
    fprintf(stderr, off_B9544, *(_DWORD *)(a1 + 28), v5);
    if ( !v9 )
      return 0;
LABEL_26:
    free(v5);
    return 0;
  }
  v29 = strlen(v5);
  v36 = v29 + strlen(*(const char **)(a1 + 36)) + 2;
  v30 = (char *)sub_7FBE0(v36);
  sub_6D00C((int)v30, v36, "%s/%s", v5, *(const char **)(a1 + 36));
  if ( v9 )
    free(v5);
  if ( !_xstat64(3, v30, v37) )
  {
    if ( (v38 & 0xF000) == 0x8000 )
    {
      v5 = v30;
      v9 = (_BYTE *)(&dword_0 + 1);
      goto LABEL_18;
    }
    v5 = v30;
    fprintf(stderr, off_B9544, *(_DWORD *)(a1 + 28), v30);
    goto LABEL_26;
  }
  v31 = _errno_location();
  if ( *v31 == 2 )
  {
    v5 = v30;
    v9 = (_BYTE *)(&dword_0 + 1);
    v38 = 0x8000;
    goto LABEL_18;
  }
  fprintf(stderr, off_B9544, *(_DWORD *)(a1 + 28));
  v32 = *v31;
  v33 = stderr;
  v34 = off_B9504;
  v35 = strerror(v32);
  fprintf(v33, v34, v32, v35, v30);
  free(v30);
  return 0;
}
