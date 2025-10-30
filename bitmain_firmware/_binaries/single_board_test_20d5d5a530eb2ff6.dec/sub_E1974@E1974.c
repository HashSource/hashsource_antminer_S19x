unsigned int __fastcall sub_E1974(unsigned int a1)
{
  int v2; // r7
  unsigned int v3; // r5
  int v4; // r8
  unsigned int v5; // r0
  int v6; // r1
  int i; // r6
  unsigned int v8; // r5
  unsigned int v9; // r0

  sub_10C554(dword_6E1A80);
  v2 = dword_6E1A5C;
  if ( a1 < dword_6E1A5C || (v3 = dword_6E1A60, a1 >= dword_6E1A5C + dword_6E1A60) )
    sub_BC328("assertion failed: WITHIN_ARENA(ptr)", "crypto/mem_sec.c", 645);
  v4 = dword_6E1A68;
  v5 = sub_189090(a1 + dword_6E1A60 - dword_6E1A5C, dword_6E1A6C);
  v6 = v4 - 1;
  for ( i = dword_6E1A70; v5; --v6 )
  {
    if ( ((*(unsigned __int8 *)(dword_6E1A70 + (v5 >> 3)) >> (v5 & 7)) & 1) != 0 )
      break;
    if ( (v5 & 1) != 0 )
      sub_BC328("assertion failed: (bit & 1) == 0", "crypto/mem_sec.c", 304);
    v5 >>= 1;
  }
  if ( (v4 <= v6) | ((unsigned int)v6 >> 31) )
    sub_BC328("assertion failed: list >= 0 && list < sh.freelist_size", "crypto/mem_sec.c", 315);
  v8 = v3 >> v6;
  if ( ((v8 - 1) & (a1 - v2)) != 0 )
    sub_BC328(aAssertionFaile_47, "crypto/mem_sec.c", 316);
  v9 = (1 << v6) + sub_189090(a1 - v2, v8);
  if ( !v9 || v9 >= dword_6E1A78 )
    sub_BC328("assertion failed: bit > 0 && bit < sh.bittable_size", "crypto/mem_sec.c", 318);
  if ( (*(unsigned __int8 *)(i + (v9 >> 3)) & (1 << (v9 & 7))) == 0 )
    sub_BC328("assertion failed: sh_testbit(ptr, list, sh.bittable)", "crypto/mem_sec.c", 649);
  sub_10C564(dword_6E1A80);
  return v8;
}
