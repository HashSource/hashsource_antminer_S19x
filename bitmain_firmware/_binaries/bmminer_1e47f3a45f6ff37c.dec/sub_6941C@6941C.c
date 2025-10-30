int __fastcall sub_6941C(int a1)
{
  void *v2; // r0
  int v3; // r0
  int v4; // r2
  _QWORD v7[4]; // [sp+14h] [bp-48h] BYREF
  size_t v8; // [sp+34h] [bp-28h]
  int v9; // [sp+38h] [bp-24h]
  void *s; // [sp+3Ch] [bp-20h]
  int v11; // [sp+40h] [bp-1Ch]
  unsigned int m; // [sp+44h] [bp-18h]
  unsigned int k; // [sp+48h] [bp-14h]
  size_t j; // [sp+4Ch] [bp-10h]
  size_t i; // [sp+50h] [bp-Ch]
  size_t size; // [sp+54h] [bp-8h]

  memset(v7, 0, sizeof(v7));
  v11 = sub_691B0();
  size = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x3Fu) <= 0x37 )
    size = ((*(_DWORD *)(a1 + 12) >> 6) + 1) << 6;
  else
    size = ((*(_DWORD *)(a1 + 12) >> 6) + 2) << 6;
  s = malloc(size);
  if ( !s )
    return -4;
  memset(s, 0, size);
  v2 = memcpy(s, *(const void **)(a1 + 8), *(_DWORD *)(a1 + 12));
  *((_BYTE *)s + *(_DWORD *)(a1 + 12)) = 0x80;
  *((_DWORD *)s + ((size - 4) >> 2)) = ((unsigned int)(8 * *(_DWORD *)(a1 + 12)) >> 24)
                                     | (((8 * *(_DWORD *)(a1 + 12)) & 0xFF0000u) >> 8)
                                     | (((8 * *(_WORD *)(a1 + 12)) & 0xFF00) << 8)
                                     | (*(_DWORD *)(a1 + 12) << 27);
  *((_DWORD *)s + ((size - 8) >> 2)) = 0;
  for ( i = 0; i < size; ++i )
    *(_BYTE *)(v11 + i) = *((_BYTE *)s + i);
  for ( j = 0; j < size; ++j )
  {
    if ( *(unsigned __int8 *)(v11 + j) != *((unsigned __int8 *)s + j) )
      v2 = (void *)printf(
                     "%s: coinbase_padding_in_ddr[%d] = 0x%x, but *(coinbase_padding + %d) = 0x%x",
                     "dhash_send_job",
                     j,
                     *(unsigned __int8 *)(v11 + j),
                     j,
                     *((unsigned __int8 *)s + j));
  }
  for ( k = 0; *(_DWORD *)(a1 + 20) > k; ++k )
    v2 = memcpy((void *)(v11 + 32 * k + size), (const void *)(*(_DWORD *)(a1 + 16) + 32 * k), 0x20u);
  sub_6939C((int)v2);
  v3 = sub_69204(v11);
  sub_6A150(v3);
  sub_6A52C(*(_DWORD *)(a1 + 32));
  sub_69260(*(_DWORD *)a1, *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 40));
  memset(v7, 0, sizeof(v7));
  for ( m = 0; m <= 7; ++m )
    *((_DWORD *)v7 + m) = (*(unsigned __int8 *)(*(_DWORD *)(a1 + 44) + 4 * m + 3) << 24)
                        | (*(unsigned __int8 *)(*(_DWORD *)(a1 + 44) + 4 * m + 2) << 16)
                        | (*(unsigned __int8 *)(*(_DWORD *)(a1 + 44) + 4 * m + 1) << 8)
                        | *(unsigned __int8 *)(*(_DWORD *)(a1 + 44) + 4 * m);
  sub_6AA5C(v7);
  sub_6A9C8(*(_DWORD *)(a1 + 24));
  sub_6AA28(*(_DWORD *)(a1 + 28));
  v9 = (*(_DWORD *)(a1 + 52) << 16) | ((unsigned __int8)*(_DWORD *)(a1 + 56) << 8) | (unsigned __int8)(size >> 6);
  sub_6AAC0(v9);
  v7[0] = 0;
  v7[0] = *(_QWORD *)(a1 + 64);
  sub_6ABE0(v7);
  sub_6AC44(*(_DWORD *)(a1 + 20));
  v4 = 32 * *(_DWORD *)(a1 + 20);
  v8 = v4 + size;
  sub_6A58C((unsigned __int16)(v4 + size));
  usleep(0x3E8u);
  sub_6A228(*(_DWORD *)(a1 + 72));
  sub_692B8(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 76));
  if ( s )
    free(s);
  dword_536500 = v11;
  return 0;
}
