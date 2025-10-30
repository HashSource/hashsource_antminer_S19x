char *__fastcall sub_336420(char *a1, size_t a2)
{
  char *v2; // r0
  DIR *v3; // r10
  char *v4; // r4
  _BOOL4 v5; // r7
  int v6; // r8
  int *v7; // r9
  int v8; // r0
  _BOOL4 v9; // r5
  int v10; // r0
  _BOOL4 v11; // r3
  const char *v12; // r4
  int v13; // r11
  size_t v14; // r0
  size_t v15; // r5
  size_t v16; // r6
  size_t v17; // r3
  bool v18; // cf
  size_t v19; // r3
  char *v20; // r1
  char *v21; // r3
  _BOOL4 v22; // r2
  size_t v23; // r4
  void *v24; // r3
  int v25; // r4
  __int64 v27; // [sp+8h] [bp-BCh]
  size_t v28; // [sp+8h] [bp-BCh]
  __int64 v29; // [sp+10h] [bp-B4h]
  __int64 v30; // [sp+18h] [bp-ACh]
  char *ptr; // [sp+24h] [bp-A0h]
  void *v32; // [sp+28h] [bp-9Ch]
  size_t size; // [sp+2Ch] [bp-98h]
  __int64 v35; // [sp+38h] [bp-8Ch]
  __int64 v36; // [sp+40h] [bp-84h]
  __int64 v37; // [sp+48h] [bp-7Ch]
  char *src; // [sp+50h] [bp-74h]
  _QWORD v39[2]; // [sp+58h] [bp-6Ch] BYREF
  int v40; // [sp+68h] [bp-5Ch]
  __int64 v41; // [sp+B8h] [bp-Ch]

  v32 = a1;
  if ( !a2 )
  {
    if ( a1 )
    {
      *_errno_location() = 22;
      return 0;
    }
    size = 4096;
    v2 = (char *)malloc(0x1000u);
    goto LABEL_5;
  }
  size = a2;
  if ( !a1 )
  {
    v2 = (char *)malloc(a2);
LABEL_5:
    ptr = v2;
    if ( !v2 )
      return ptr;
    goto LABEL_10;
  }
  ptr = a1;
LABEL_10:
  v3 = 0;
  v4 = &ptr[size];
  ptr[size - 1] = 0;
  src = &ptr[size - 1];
  if ( _lxstat64(3, ".", v39) < 0 || (v27 = v39[0], v29 = v41, _lxstat64(3, &word_398974, v39) < 0) )
  {
    v7 = _errno_location();
    v25 = *v7;
    goto LABEL_67;
  }
  v35 = v39[0];
  v36 = v41;
  v5 = v29 != v41 || v27 != v39[0];
  if ( !v5 )
  {
LABEL_48:
    if ( src == &ptr[size - 1] )
      *--src = 47;
    v23 = v4 - src;
    memmove(ptr, src, v23);
    if ( !a2 )
      v32 = realloc(ptr, v23);
    v24 = v32;
    if ( !v32 )
      return ptr;
    return (char *)v24;
  }
  v6 = -100;
  v7 = _errno_location();
LABEL_17:
  v8 = openat64(v6, &word_3BB850, 0);
  v6 = v8;
  if ( v8 >= 0 )
  {
    if ( _fxstat64(3, v8, v39) )
    {
      v25 = *v7;
      if ( v3 )
        closedir(v3);
      goto LABEL_73;
    }
    if ( v3 && closedir(v3) || (v30 = v39[0], v37 = v41, (v3 = (DIR *)fdopendir(v6)) == 0) )
    {
      v25 = *v7;
LABEL_73:
      close(v6);
      goto LABEL_67;
    }
    v9 = v5;
    while ( 1 )
    {
      *v7 = 0;
      v10 = readdir64(v3);
      if ( v10 )
      {
        if ( *(_BYTE *)(v10 + 19) != 46 )
          goto LABEL_25;
      }
      else
      {
        v25 = *v7;
        if ( *v7 )
          v9 = 0;
        if ( !v9 )
          goto LABEL_64;
        rewinddir(v3);
        v10 = readdir64(v3);
        if ( !v10 )
        {
          v25 = *v7;
LABEL_64:
          if ( !v25 )
          {
            v25 = 2;
            *v7 = 2;
          }
          goto LABEL_66;
        }
        v9 = 0;
        if ( *(_BYTE *)(v10 + 19) != 46 )
          goto LABEL_31;
      }
      if ( *(_BYTE *)(v10 + 20) && *(_WORD *)(v10 + 20) != 46 )
      {
LABEL_25:
        if ( !v9 )
          goto LABEL_31;
        v11 = v30 != v27 || *(_QWORD *)v10 == v29;
        if ( v11 )
        {
          v9 = v11;
LABEL_31:
          v12 = (const char *)(v10 + 19);
          if ( !_fxstatat64(3, v6, v10 + 19, v39, 256) && (v40 & 0xF000) == 0x4000 && v39[0] == v27 && v41 == v29 )
          {
            v13 = src - ptr;
            v14 = strlen(v12);
            v15 = v14;
            if ( src - ptr <= v14 )
            {
              if ( a2 )
              {
                v25 = 34;
                *v7 = 34;
                goto LABEL_66;
              }
              v16 = size;
              if ( v14 < size )
                v17 = size;
              else
                v17 = v14;
              v18 = __CFADD__(v17, size);
              v19 = v17 + size;
              if ( v18 || (v28 = v19, (v20 = (char *)realloc(ptr, v19)) == 0) )
              {
                v25 = 12;
                *v7 = 12;
                goto LABEL_66;
              }
              size = v28;
              ptr = v20;
              src = (char *)memcpy(&v20[v13 - v16 + v28], &v20[v13], v16 - v13);
            }
            v21 = (char *)memcpy(&src[-v15], v12, v15);
            *(v21 - 1) = 47;
            src = v21 - 1;
            v22 = v35 != v30;
            if ( v36 != v37 )
              v22 = 1;
            v27 = v30;
            v29 = v37;
            if ( !v22 )
            {
              if ( !closedir(v3) )
              {
                v4 = &ptr[size];
                goto LABEL_48;
              }
              v25 = *v7;
              goto LABEL_67;
            }
            goto LABEL_17;
          }
        }
      }
    }
  }
  v25 = *v7;
  if ( v3 )
LABEL_66:
    closedir(v3);
LABEL_67:
  if ( !v32 )
    free(ptr);
  *v7 = v25;
  return 0;
}
