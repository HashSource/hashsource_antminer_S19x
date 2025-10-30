char *__fastcall sub_1F6E8(int a1, int a2)
{
  int v2; // r3
  char *result; // r0
  int v6; // [sp+8h] [bp-14h]
  int v7; // [sp+Ch] [bp-10h]
  int v8; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  if ( (*(_DWORD *)(a1 + 4) & 0x3Fu) <= 0x37 )
    v2 = 1;
  else
    v2 = 2;
  v8 = v2;
  v7 = 8 * (*(_DWORD *)a1 + *(_DWORD *)(a1 + 4));
  v6 = v2 << 6;
  memset((void *)(a1 + *(_DWORD *)(a1 + 4) + 8), 0, (v2 << 6) - *(_DWORD *)(a1 + 4));
  *(_BYTE *)(a1 + *(_DWORD *)(a1 + 4) + 8) = 0x80;
  *(_BYTE *)(a1 + v6 - 1 + 8) = v7;
  *(_BYTE *)(a1 + v6 - 2 + 8) = BYTE1(v7);
  *(_BYTE *)(a1 + v6 - 3 + 8) = BYTE2(v7);
  *(_BYTE *)(a1 + v6 - 4 + 8) = HIBYTE(v7);
  result = sub_1F0A4((char *)a1, a1 + 8, v8);
  for ( i = 0; i <= 7; ++i )
  {
    *(_BYTE *)(a2 + 4 * i + 3) = *(_DWORD *)(a1 + 4 * (i + 34));
    *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(*(_DWORD *)(a1 + 4 * (i + 34)));
    *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(*(_DWORD *)(a1 + 4 * (i + 34)));
    *(_BYTE *)(a2 + 4 * i) = HIBYTE(*(_DWORD *)(a1 + 4 * (i + 34)));
  }
  return result;
}
