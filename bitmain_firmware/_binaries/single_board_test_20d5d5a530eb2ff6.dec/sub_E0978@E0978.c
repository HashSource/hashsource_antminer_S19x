int __fastcall sub_E0978(int a1, int a2, int a3)
{
  char v3; // r3
  unsigned int v5; // r1
  int v6; // r0
  unsigned int v7; // r0
  unsigned int v8; // r3
  char v9; // r0
  unsigned int v10; // r2
  int result; // r0

  v3 = a2;
  if ( a2 < 0 || a2 >= dword_6E1A68 )
    sub_BC328("assertion failed: list >= 0 && list < sh.freelist_size", "crypto/mem_sec.c", 326);
  v5 = (unsigned int)dword_6E1A60 >> a2;
  v6 = a1 - dword_6E1A5C;
  if ( ((v5 - 1) & v6) != 0 )
    sub_BC328(aAssertionFaile_47, "crypto/mem_sec.c", 327);
  v7 = (1 << v3) + sub_189090(v6, v5);
  if ( !v7 || v7 >= dword_6E1A78 )
    sub_BC328("assertion failed: bit > 0 && bit < sh.bittable_size", "crypto/mem_sec.c", 329);
  v8 = v7 >> 3;
  v9 = v7 & 7;
  v10 = *(unsigned __int8 *)(a3 + v8);
  if ( ((v10 >> v9) & 1) == 0 )
    sub_BC328("assertion failed: TESTBIT(table, bit)", "crypto/mem_sec.c", 330);
  result = 1 << v9;
  *(_BYTE *)(a3 + v8) = v10 & ~(_BYTE)result;
  return result;
}
