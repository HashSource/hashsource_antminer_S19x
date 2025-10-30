void __fastcall sub_3A3DC(const char **a1, const char *a2, const char *a3, int a4)
{
  int v5; // r3
  const char *v6; // r2
  signed int v7; // r6
  char *v8; // r0
  int v9; // r1
  const char *v10; // r0
  char *v11; // r5
  char *v12; // r0
  char *v13; // r3
  const char *v14; // r1
  const char *v15; // r2
  const char *v16; // r2
  char *v17; // r2
  int v18; // r2
  int v19; // r3
  bool v20; // zf
  const char *v21; // r2
  char *v22; // r0
  int v23; // r1
  const char *v24; // r0
  void *v25; // r0
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

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
    sub_3B6AC(3, s, 1, v28);
    nullsub_1();
    v5 = (int)a1[10];
    if ( v5 > 0 )
      goto LABEL_3;
LABEL_25:
    v7 = (signed int)a1[9];
    goto LABEL_6;
  }
  v5 = (int)a1[10];
  if ( v5 <= 0 )
    goto LABEL_25;
LABEL_3:
  v6 = a1[6];
  if ( v5 <= (int)v6 )
    return;
  v7 = (signed int)a1[9];
  if ( v5 < (int)&v6[v7] )
    v7 = v5 - (_DWORD)v6;
LABEL_6:
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
    sub_3B6AC(3, s, 1, v29);
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
    sub_3B6AC(3, s, 1, v30);
    nullsub_1();
  }
  v12 = 0;
  v13 = v11 + 16;
  *(_DWORD *)&a1[13][4 * (_DWORD)(a1[12] + 0x3FFFFFFF)] = v11;
  v14 = *a1;
  v15 = a1[6];
  *((_DWORD *)v11 + 1) = 0;
  *((_DWORD *)v11 + 2) = v11 + 16;
  if ( v7 > 2 )
    v13 = v11 + 32;
  v16 = &v15[v7];
  a1[7] = (const char *)v7;
  a1[8] = (const char *)v7;
  if ( v7 > 2 )
    v12 = &v11[16 * v7];
  *(_DWORD *)v11 = v14;
  a1[6] = v16;
  if ( v7 > 2 )
  {
    do
    {
      *((_DWORD *)v13 - 4) = v14;
      v17 = v13 - 32;
      *((_DWORD *)v13 - 2) = v13;
      v13 += 16;
      *((_DWORD *)v13 - 7) = v17;
    }
    while ( v13 != v12 );
  }
  v18 = *((unsigned __int8 *)a1 + 44);
  v19 = 16 * (v7 + 0xFFFFFFF);
  *(_DWORD *)&v11[v19] = v14;
  v20 = v18 == 0;
  v21 = &v11[v19];
  a1[3] = v11;
  *((_DWORD *)v21 + 2) = 0;
  *((_DWORD *)v21 + 1) = &v11[v19 - 16];
  if ( !v20 )
    a1[4] = v21;
  do
  {
    v22 = (char *)a1[15];
    v23 = (int)(a1[14] + 1);
    a1[14] = (const char *)v23;
    v24 = (const char *)realloc(v22, 4 * v23);
    a1[15] = v24;
    if ( !v24 )
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
      sub_3B6AC(3, s, 1, v26);
      nullsub_1();
    }
    v25 = calloc(1u, (size_t)a1[5]);
    *((_DWORD *)v11 + 3) = v25;
    if ( !v25 )
    {
      snprintf(s, 0x800u, "List %s failed to calloc item data in %s %s():%d", *a1, "klist.c", "k_alloc_items", 73);
      sub_3B6AC(3, s, 1, v27);
      nullsub_1();
      v25 = (void *)*((_DWORD *)v11 + 3);
    }
    *(_DWORD *)&a1[15][4 * (_DWORD)(a1[14] + 0x3FFFFFFF)] = v25;
    v11 = (char *)*((_DWORD *)v11 + 2);
  }
  while ( v11 );
}
