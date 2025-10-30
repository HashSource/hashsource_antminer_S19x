void *__fastcall sub_5C974(int a1, size_t *a2)
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
  sub_5C25C(a1 + 212, "driver-btm-c5_socketa.c", "rebuild_job_buf", 222);
  size = strlen(*(const char **)(a1 + 688)) + *(_DWORD *)(a1 + 1588) + 32 * *(_DWORD *)(a1 + 1724) + 1864 + 1;
  size += strlen(*(const char **)(a1 + 628)) + 17;
  dest = calloc(1u, size);
  if ( dest )
  {
    memcpy(dest, (const void *)a1, 0x748u);
    v13 += 1864;
    memcpy((char *)dest + v13, *(const void **)(a1 + 1584), *(_DWORD *)(a1 + 1588));
    v13 += *(_DWORD *)(a1 + 1588);
    for ( i = 0; *(_DWORD *)(a1 + 1724) > i; ++i )
    {
      memcpy((char *)dest + v13, *(const void **)(*(_DWORD *)(a1 + 692) + 4 * i), 0x20u);
      v13 += 32;
    }
    v3 = strlen(*(const char **)(a1 + 688));
    memcpy((char *)dest + v13, *(const void **)(a1 + 688), v3 + 1);
    v13 += strlen(*(const char **)(a1 + 688)) + 1;
    v4 = strlen(*(const char **)(a1 + 628));
    memcpy((char *)dest + v13, *(const void **)(a1 + 628), v4 + 1);
    v13 += strlen(*(const char **)(a1 + 628)) + 1;
    sub_5C2C0(a1 + 212, "driver-btm-c5_socketa.c", "rebuild_job_buf", 258);
    sscanf(byte_87E50, "%.2lf", &v9);
    memcpy((char *)dest + v13, &v9, 8u);
    v13 += 8;
    memcpy((char *)dest + v13, &dbl_86C78, 8u);
    v13 += 8;
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v8, 0x800u, "job buf total len:%d, offset:%d\n", size, v13);
      sub_1E4EC(7, v8, 0);
    }
    *a2 = size;
    return dest;
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v8, 0x800u, "malloc temp job data buf failed: %d\n", size);
      sub_1E4EC(3, v8, 0);
    }
    return 0;
  }
}
