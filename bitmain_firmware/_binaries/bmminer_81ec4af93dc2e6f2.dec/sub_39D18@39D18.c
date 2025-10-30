void __fastcall sub_39D18(const char **a1, const char *a2, const char *a3, int a4)
{
  int v5; // r3
  const char *v6; // r2
  signed int v7; // r6
  char *v8; // r0
  int v9; // r1
  const char *v10; // r0
  char *v11; // r5
  const char *v12; // r3
  const char *v13; // r1
  __int64 v14; // r2
  int v15; // r0
  int v16; // r3
  int v17; // r2
  const char *v18; // r3
  char *v19; // r0
  int v20; // r1
  const char *v21; // r0
  void *v22; // r0
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( *((_BYTE *)a1 + 4) )
  {
    snprintf(
      s,
      0x800u,
      "List %s store can't %s() - from %s %s() line %d in %s %s():%d",
      *a1,
      "k_alloc_items",
      a2,
      a3,
      a4,
      "klist.c",
      "k_alloc_items",
      19);
    sub_3AF5C(3, s, 1, v25);
    nullsub_1();
  }
  v5 = (int)a1[10];
  if ( v5 <= 0 )
  {
    v7 = (signed int)a1[9];
  }
  else
  {
    v6 = a1[6];
    if ( v5 <= (int)v6 )
      return;
    v7 = (signed int)a1[9];
    if ( v5 < (int)&v6[v7] )
      v7 = v5 - (_DWORD)v6;
  }
  v8 = (char *)a1[13];
  v9 = (int)(a1[12] + 1);
  a1[12] = (const char *)v9;
  v10 = (const char *)realloc(v8, 4 * v9);
  a1[13] = v10;
  if ( !v10 )
  {
    snprintf(
      s,
      0x800u,
      "List %s item_memory failed to realloc count=%d in %s %s():%d",
      *a1,
      a1[12],
      "klist.c",
      "k_alloc_items",
      33);
    sub_3AF5C(3, s, 1, v26);
    nullsub_1();
  }
  v11 = (char *)calloc(v7, 0x10u);
  if ( !v11 )
  {
    snprintf(
      s,
      0x800u,
      "List %s failed to calloc %d new items - total was %d, limit was %d in %s %s():%d",
      *a1,
      v7,
      a1[6],
      a1[10],
      "klist.c",
      "k_alloc_items",
      38);
    sub_3AF5C(3, s, 1, v27);
    nullsub_1();
  }
  *(_DWORD *)&a1[13][4 * (_DWORD)(a1[12] + 0x3FFFFFFF)] = v11;
  v12 = a1[6];
  v13 = *a1;
  a1[7] = (const char *)v7;
  a1[8] = (const char *)v7;
  a1[6] = &v12[v7];
  *(_DWORD *)v11 = v13;
  *((_DWORD *)v11 + 1) = 0;
  *((_DWORD *)v11 + 2) = v11 + 16;
  if ( v7 > 2 )
  {
    HIDWORD(v14) = v11 + 32;
    do
    {
      LODWORD(v14) = HIDWORD(v14) - 32;
      *(_DWORD *)(HIDWORD(v14) - 16) = v13;
      *(_QWORD *)(HIDWORD(v14) - 12) = v14;
      HIDWORD(v14) += 16;
    }
    while ( (char *)HIDWORD(v14) != &v11[16 * v7] );
  }
  v15 = *((unsigned __int8 *)a1 + 44);
  v16 = 16 * (v7 + 0xFFFFFFF);
  *(_DWORD *)&v11[v16] = v13;
  a1[3] = v11;
  v17 = v16 - 16;
  v18 = &v11[v16];
  *((_DWORD *)v18 + 1) = &v11[v17];
  *((_DWORD *)v18 + 2) = 0;
  if ( v15 )
    a1[4] = v18;
  do
  {
    v19 = (char *)a1[15];
    v20 = (int)(a1[14] + 1);
    a1[14] = (const char *)v20;
    v21 = (const char *)realloc(v19, 4 * v20);
    a1[15] = v21;
    if ( !v21 )
    {
      snprintf(
        s,
        0x800u,
        "List %s data_memory failed to realloc count=%d in %s %s():%d",
        *a1,
        a1[14],
        "klist.c",
        "k_alloc_items",
        69);
      sub_3AF5C(3, s, 1, v23);
      nullsub_1();
    }
    v22 = calloc(1u, (size_t)a1[5]);
    *((_DWORD *)v11 + 3) = v22;
    if ( !v22 )
    {
      snprintf(s, 0x800u, "List %s failed to calloc item data in %s %s():%d", *a1, "klist.c", "k_alloc_items", 73);
      sub_3AF5C(3, s, 1, v24);
      nullsub_1();
      v22 = (void *)*((_DWORD *)v11 + 3);
    }
    *(_DWORD *)&a1[15][4 * (_DWORD)(a1[14] + 0x3FFFFFFF)] = v22;
    v11 = (char *)*((_DWORD *)v11 + 2);
  }
  while ( v11 );
}
