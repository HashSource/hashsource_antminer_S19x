void *__fastcall sub_1F598(int a1, char *a2, unsigned int a3)
{
  size_t v3; // r3
  void *result; // r0
  char *v8; // [sp+14h] [bp-18h]
  unsigned int v9; // [sp+18h] [bp-14h]
  size_t n; // [sp+20h] [bp-Ch]
  int na; // [sp+20h] [bp-Ch]

  v3 = a3;
  if ( 64 - *(_DWORD *)(a1 + 4) < a3 )
    v3 = 64 - *(_DWORD *)(a1 + 4);
  n = v3;
  result = memcpy((void *)(a1 + *(_DWORD *)(a1 + 4) + 8), a2, v3);
  if ( *(_DWORD *)(a1 + 4) + a3 > 0x3F )
  {
    v9 = (a3 - n) >> 6;
    v8 = &a2[n];
    sub_1F0A4((char *)a1, a1 + 8, 1);
    sub_1F0A4((char *)a1, (int)&a2[n], v9);
    na = ((_BYTE)a3 - (_BYTE)n) & 0x3F;
    result = memcpy((void *)(a1 + 8), &v8[64 * v9], na);
    *(_DWORD *)(a1 + 4) = na;
    *(_DWORD *)a1 += (v9 + 1) << 6;
  }
  else
  {
    *(_DWORD *)(a1 + 4) += a3;
  }
  return result;
}
