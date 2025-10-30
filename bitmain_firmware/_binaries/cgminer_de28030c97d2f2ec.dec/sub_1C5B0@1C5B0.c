const char **__fastcall sub_1C5B0(const char **result, const char *a2, const char *a3, int a4)
{
  const char **v4; // [sp+2Ch] [bp-818h]
  char v5[16]; // [sp+34h] [bp-810h] BYREF
  signed int i; // [sp+834h] [bp-10h]
  size_t nmemb; // [sp+838h] [bp-Ch]
  char *j; // [sp+83Ch] [bp-8h]

  v4 = result;
  if ( *((_BYTE *)result + 4) )
  {
    snprintf(
      v5,
      0x800u,
      "List %s store can't %s() - from %s %s() line %d in %s %s():%d",
      *result,
      "k_alloc_items",
      a2,
      a3,
      a4,
      "klist.c",
      "k_alloc_items",
      19);
    sub_1E4EC(3, v5, 1);
    sub_4BFB0(1);
  }
  if ( (int)result[10] <= 0 || (int)result[6] < (int)result[10] )
  {
    nmemb = (size_t)result[9];
    if ( (int)result[10] > 0 && (int)&result[6][nmemb] > (int)result[10] )
      nmemb = result[10] - result[6];
    result[13] = (const char *)realloc((void *)result[13], 4 * (_DWORD)++result[12]);
    if ( !v4[13] )
    {
      snprintf(
        v5,
        0x800u,
        "List %s item_memory failed to realloc count=%d in %s %s():%d",
        *v4,
        v4[12],
        "klist.c",
        "k_alloc_items",
        33);
      sub_1E4EC(3, v5, 1);
      sub_4BFB0(1);
    }
    result = (const char **)calloc(nmemb, 0x10u);
    j = (char *)result;
    if ( !result )
    {
      snprintf(
        v5,
        0x800u,
        "List %s failed to calloc %d new items - total was %d, limit was %d in %s %s():%d",
        *v4,
        nmemb,
        v4[6],
        v4[10],
        "klist.c",
        "k_alloc_items",
        38);
      sub_1E4EC(3, v5, 1);
      sub_4BFB0(1);
    }
    *(_DWORD *)&v4[13][4 * (_DWORD)(v4[12] + 0x3FFFFFFF)] = j;
    v4[6] += nmemb;
    v4[7] = (const char *)nmemb;
    v4[8] = (const char *)nmemb;
    *(_DWORD *)j = *v4;
    *((_DWORD *)j + 1) = 0;
    *((_DWORD *)j + 2) = j + 16;
    for ( i = 1; (int)(nmemb - 1) > i; ++i )
    {
      *(_DWORD *)&j[16 * i] = *v4;
      *(_DWORD *)&j[16 * i + 4] = &j[16 * i - 16];
      *(_DWORD *)&j[16 * i + 8] = &j[16 * i + 16];
    }
    *(_DWORD *)&j[16 * nmemb - 16] = *v4;
    *(_DWORD *)&j[16 * nmemb - 12] = &j[16 * nmemb - 32];
    *(_DWORD *)&j[16 * nmemb - 8] = 0;
    v4[3] = j;
    if ( *((_BYTE *)v4 + 44) )
      v4[4] = &j[16 * nmemb - 16];
    for ( j = (char *)v4[3]; j; j = (char *)*((_DWORD *)j + 2) )
    {
      v4[15] = (const char *)realloc((void *)v4[15], 4 * (_DWORD)++v4[14]);
      if ( !v4[15] )
      {
        snprintf(
          v5,
          0x800u,
          "List %s data_memory failed to realloc count=%d in %s %s():%d",
          *v4,
          v4[14],
          "klist.c",
          "k_alloc_items",
          69);
        sub_1E4EC(3, v5, 1);
        sub_4BFB0(1);
      }
      result = (const char **)calloc(1u, (size_t)v4[5]);
      *((_DWORD *)j + 3) = result;
      if ( !*((_DWORD *)j + 3) )
      {
        snprintf(v5, 0x800u, "List %s failed to calloc item data in %s %s():%d", *v4, "klist.c", "k_alloc_items", 73);
        sub_1E4EC(3, v5, 1);
        sub_4BFB0(1);
      }
      *(_DWORD *)&v4[15][4 * (_DWORD)(v4[14] + 0x3FFFFFFF)] = *((_DWORD *)j + 3);
    }
  }
  return result;
}
