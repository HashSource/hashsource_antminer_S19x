int __fastcall sub_5ABF8(int a1)
{
  void *v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2
  _QWORD s[4]; // [sp+14h] [bp-48h] BYREF
  size_t v9; // [sp+34h] [bp-28h]
  int v10; // [sp+38h] [bp-24h]
  void *dest; // [sp+3Ch] [bp-20h]
  int v12; // [sp+40h] [bp-1Ch]
  unsigned int m; // [sp+44h] [bp-18h]
  unsigned int k; // [sp+48h] [bp-14h]
  size_t j; // [sp+4Ch] [bp-10h]
  size_t i; // [sp+50h] [bp-Ch]
  size_t size; // [sp+54h] [bp-8h]

  memset(s, 0, sizeof(s));
  v12 = sub_5A980();
  size = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x3Fu) <= 0x37 )
    size = (*(_DWORD *)(a1 + 12) & 0xFFFFFFC0) + 64;
  else
    size = (*(_DWORD *)(a1 + 12) & 0xFFFFFFC0) + 128;
  dest = malloc(size);
  if ( !dest )
    return -4;
  memset(dest, 0, size);
  memcpy(dest, *(const void **)(a1 + 8), *(_DWORD *)(a1 + 12));
  *((_BYTE *)dest + *(_DWORD *)(a1 + 12)) = 0x80;
  v2 = dest;
  *(_DWORD *)((char *)dest + ((size - 4) & 0xFFFFFFFC)) = ((unsigned int)(8 * *(_DWORD *)(a1 + 12)) >> 24)
                                                        | ((unsigned int)(8 * *(_DWORD *)(a1 + 12)) >> 8) & 0xFF00
                                                        | (*(_DWORD *)(a1 + 12) << 11) & 0xFF0000
                                                        | (*(_DWORD *)(a1 + 12) << 27);
  *(_DWORD *)((char *)dest + ((size - 8) & 0xFFFFFFFC)) = 0;
  for ( i = 0; i < size; ++i )
    *(_BYTE *)(v12 + i) = *((_BYTE *)dest + i);
  for ( j = 0; j < size; ++j )
  {
    if ( *(unsigned __int8 *)(v12 + j) != *((unsigned __int8 *)dest + j) )
      v2 = (void *)printf(
                     "%s: coinbase_padding_in_ddr[%d] = 0x%x, but *(coinbase_padding + %d) = 0x%x",
                     "dhash_send_job",
                     j,
                     *(unsigned __int8 *)(v12 + j),
                     j,
                     *((unsigned __int8 *)dest + j));
  }
  for ( k = 0; k < *(_DWORD *)(a1 + 20); ++k )
    v2 = memcpy((void *)(v12 + 32 * k + size), (const void *)(*(_DWORD *)(a1 + 16) + 32 * k), 0x20u);
  sub_5AB70((int)v2);
  v3 = sub_5A9D4(v12);
  sub_5B910(v3);
  sub_5BD1C(*(_DWORD *)(a1 + 32));
  sub_5AA30(*(_DWORD *)a1, *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 40));
  memset(s, 0, sizeof(s));
  for ( m = 0; m <= 7; ++m )
    *((_DWORD *)s + m) = (*(unsigned __int8 *)(*(_DWORD *)(a1 + 44) + 4 * m + 3) << 24)
                       | (*(unsigned __int8 *)(*(_DWORD *)(a1 + 44) + 4 * m + 2) << 16)
                       | (*(unsigned __int8 *)(*(_DWORD *)(a1 + 44) + 4 * m + 1) << 8)
                       | *(unsigned __int8 *)(*(_DWORD *)(a1 + 44) + 4 * m);
  sub_5C260(s);
  sub_5C1C4(*(_DWORD *)(a1 + 24));
  sub_5C228(*(_DWORD *)(a1 + 28));
  v10 = (*(_DWORD *)(a1 + 52) << 16) | ((unsigned __int8)*(_DWORD *)(a1 + 56) << 8) | (unsigned __int8)(size >> 6);
  sub_5C2C8(v10);
  s[0] = 0;
  s[0] = *(_QWORD *)(a1 + 64);
  sub_5C3EC(s);
  sub_5C454(*(_DWORD *)(a1 + 20));
  v9 = size + 32 * *(_DWORD *)(a1 + 20);
  sub_5BD80((unsigned __int16)v9);
  usleep(0x3E8u);
  sub_5B9F4(*(_DWORD *)(a1 + 72), v4, v5);
  sub_5AA88(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 76));
  if ( dest )
    free(dest);
  dword_531504 = v12;
  return 0;
}
