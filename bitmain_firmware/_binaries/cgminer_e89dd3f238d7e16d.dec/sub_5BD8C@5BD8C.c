void *__fastcall sub_5BD8C(int a1, size_t *a2)
{
  size_t v3; // r0
  size_t v4; // r0
  char v8[20]; // [sp+10h] [bp-824h] BYREF
  __int64 v9; // [sp+810h] [bp-24h] BYREF
  void *dest; // [sp+818h] [bp-1Ch]
  size_t size; // [sp+81Ch] [bp-18h]
  int i; // [sp+820h] [bp-14h]
  int v13; // [sp+824h] [bp-10h]

  v13 = 0;
  v9 = 0;
  sub_5B718(a1 + 212, "driver-btm-c5_socketa.c", "rebuild_job_buf", 222);
  size = strlen(*(const char **)(a1 + 672)) + *(_DWORD *)(a1 + 1572) + 32 * *(_DWORD *)(a1 + 1708) + 1848 + 1;
  size += strlen(*(const char **)(a1 + 612)) + 17;
  dest = calloc(1u, size);
  if ( dest )
  {
    memcpy(dest, (const void *)a1, 0x738u);
    v13 += 1848;
    memcpy((char *)dest + v13, *(const void **)(a1 + 1568), *(_DWORD *)(a1 + 1572));
    v13 += *(_DWORD *)(a1 + 1572);
    for ( i = 0; i < *(_DWORD *)(a1 + 1708); ++i )
    {
      memcpy((char *)dest + v13, *(const void **)(*(_DWORD *)(a1 + 676) + 4 * i), 0x20u);
      v13 += 32;
    }
    v3 = strlen(*(const char **)(a1 + 672));
    memcpy((char *)dest + v13, *(const void **)(a1 + 672), v3 + 1);
    v13 += strlen(*(const char **)(a1 + 672)) + 1;
    v4 = strlen(*(const char **)(a1 + 612));
    memcpy((char *)dest + v13, *(const void **)(a1 + 612), v4 + 1);
    v13 += strlen(*(const char **)(a1 + 612)) + 1;
    sub_5B780(a1 + 212, "driver-btm-c5_socketa.c", "rebuild_job_buf", 258);
    sscanf(byte_86CB8, "%.2lf", &v9);
    memcpy((char *)dest + v13, &v9, 8u);
    v13 += 8;
    memcpy((char *)dest + v13, &dbl_85AE0, 8u);
    v13 += 8;
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v8, 0x800u, "job buf total len:%d, offset:%d\n", size, v13);
      sub_1DB6C(7, v8, 0);
    }
    *a2 = size;
    return dest;
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v8, 0x800u, "malloc temp job data buf failed: %d\n", size);
      sub_1DB6C(3, v8, 0);
    }
    return 0;
  }
}
