int __fastcall sub_70330(int a1)
{
  size_t v2; // r5
  unsigned int v3; // r7
  size_t v4; // r7
  _BYTE *v5; // r0
  _BYTE *v6; // r6
  _BYTE *v7; // r3
  char *v8; // r8
  char *v9; // r0
  char *v10; // r3
  int v11; // r6
  int v12; // r2
  char v13; // t1
  int v14; // r5
  size_t v15; // r7
  int v16; // r12
  int v17; // t1
  int v18; // lr
  int v19; // t1
  unsigned int v20; // r1
  size_t v21; // r2
  _DWORD *v22; // r3
  int v23; // lr
  int v24; // r12
  int v25; // r0
  int v26; // lr
  int v27; // r12
  int v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r0
  int *v32; // r12
  int v33; // lr
  int v34; // r3
  int v35; // r3
  unsigned int v36; // r1
  int v37; // r8
  int v38; // r6
  _BOOL4 v39; // r3
  int v40; // r7
  int v41; // r4
  int result; // r0
  int v43; // [sp+Ch] [bp-38h]
  void *ptr; // [sp+10h] [bp-34h]
  size_t v45; // [sp+14h] [bp-30h]
  int v46; // [sp+1Ch] [bp-28h] BYREF
  int v47[9]; // [sp+20h] [bp-24h] BYREF

  memset(v47, 0, 0x20u);
  v2 = *(_DWORD *)(a1 + 12);
  v43 = dword_1B143C;
  v3 = v2 & 0xFFFFFFC0;
  if ( dword_1B143C == dword_1B1440 )
    v43 = dword_1B1444;
  if ( (*(_DWORD *)(a1 + 12) & 0x3Fu) <= 0x37 )
    v4 = v3 + 64;
  else
    v4 = v3 + 128;
  v5 = calloc(v4, 1u);
  v6 = v5;
  ptr = v5;
  if ( !v5 )
    return -4;
  memcpy(v5, *(const void **)(a1 + 8), v2);
  v7 = &v6[v4];
  v6[v2] = 0x80;
  *((_DWORD *)v7 - 2) = 0;
  *((_DWORD *)v7 - 1) = bswap32(8 * v2);
  if ( v4 )
  {
    v8 = v6 - 1;
    v9 = &v6[v4 - 1];
    v10 = v6 - 1;
    v11 = v43 - 1;
    v12 = v43 - 1;
    do
    {
      v13 = *++v10;
      *(_BYTE *)++v12 = v13;
    }
    while ( v9 != v10 );
    v45 = v4;
    v14 = 0;
    v15 = v43 - 1 + v4;
    do
    {
      v17 = *(unsigned __int8 *)++v11;
      v16 = v17;
      v19 = (unsigned __int8)*++v8;
      v18 = v19;
      if ( v16 != v19 )
        printf(
          "%s: coinbase_padding_in_ddr[%d] = 0x%x, but *(coinbase_padding + %d) = 0x%x",
          "dhash_send_job",
          v14,
          v16,
          v14,
          v18);
      ++v14;
    }
    while ( v15 != v11 );
    v4 = v45;
  }
  if ( *(_DWORD *)(a1 + 20) )
  {
    v20 = 0;
    v21 = v43 + v4;
    do
    {
      v21 += 32;
      v22 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 32 * v20++);
      v23 = v22[1];
      v24 = v22[2];
      v25 = v22[3];
      *(_DWORD *)(v21 - 32) = *v22;
      *(_DWORD *)(v21 - 28) = v23;
      *(_DWORD *)(v21 - 24) = v24;
      *(_DWORD *)(v21 - 20) = v25;
      v26 = v22[5];
      v27 = v22[6];
      v28 = v22[7];
      *(_DWORD *)(v21 - 16) = v22[4];
      *(_DWORD *)(v21 - 12) = v26;
      *(_DWORD *)(v21 - 8) = v27;
      *(_DWORD *)(v21 - 4) = v28;
    }
    while ( *(_DWORD *)(a1 + 20) > v20 );
  }
  sub_6F508();
  if ( v43 == dword_1B143C )
    v29 = dword_1B1448 + 0x200000;
  else
    v29 = dword_1B1448 + 2162688;
  sub_66908(41, v29);
  sub_6688C(41, &v46);
  sub_66908(44, *(_DWORD *)(a1 + 32));
  sub_6688C(44, &v46);
  if ( *(_DWORD *)a1 || (v30 = *(_DWORD *)(a1 + 4), v30 != 4) && v30 != 8 && v30 != 2 )
    v30 = 1;
  sub_6FF78(*(_DWORD *)(a1 + 36), v30);
  memset(v47, 0, 0x20u);
  v31 = *(_DWORD *)(a1 + 40);
  v32 = &v46;
  v33 = v31 + 32;
  do
  {
    v34 = *(unsigned __int8 *)(v31 + 2);
    v31 += 4;
    v32[1] = (v34 << 16)
           | (*(unsigned __int8 *)(v31 - 1) << 24)
           | *(unsigned __int8 *)(v31 - 4)
           | (*(unsigned __int8 *)(v31 - 3) << 8);
    ++v32;
  }
  while ( v31 != v33 );
  sub_70128((int)v47);
  sub_66908(46, *(_DWORD *)(a1 + 24));
  sub_6688C(46, &v46);
  sub_66908(47, *(_DWORD *)(a1 + 28));
  sub_6688C(47, &v46);
  sub_66908(
    36,
    (unsigned __int16)(*(_WORD *)(a1 + 52) << 8) | (*(_DWORD *)(a1 + 48) << 16) | (unsigned __int8)(v4 >> 6));
  sub_6688C(36, &v46);
  v35 = *(_DWORD *)(a1 + 60);
  v47[0] = *(_DWORD *)(a1 + 56);
  v47[1] = v35;
  sub_70240(v47);
  sub_70284(*(_DWORD *)(a1 + 20));
  sub_66908(42, (unsigned __int16)(v4 + 32 * *(_WORD *)(a1 + 20)));
  sub_6688C(42, &v46);
  usleep(0x3E8u);
  sub_66908(20, *(_DWORD *)(a1 + 64) & 0x1FFFF | 0x80000000);
  sub_6688C(20, &v46);
  v36 = *(_DWORD *)(a1 + 4);
  v37 = *(_DWORD *)a1;
  v38 = *(_DWORD *)(a1 + 68);
  v39 = v36 > 1;
  if ( *(_DWORD *)a1 )
    v39 = 0;
  if ( v39 )
  {
    v40 = 0;
    v37 = 0;
    v41 = (v36 << 8) & 0xF00;
  }
  else if ( v37 )
  {
    v41 = 256;
    v40 = 0x2000;
    v37 = 0x4000;
  }
  else
  {
    v40 = 0;
    v41 = 256;
  }
  if ( v38 )
  {
    v38 = 128;
    sub_702F4();
  }
  v46 = 0;
  sub_6688C(35, &v46);
  sub_66908(35, v46 & 0xFFFF709F | 0x8060 | v37 | v40 | v41 | v38);
  free(ptr);
  result = 0;
  dword_1B1440 = v43;
  return result;
}
