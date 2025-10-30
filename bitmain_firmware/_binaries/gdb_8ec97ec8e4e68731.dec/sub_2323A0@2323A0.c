int __fastcall sub_2323A0(unsigned int a1, int a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned int v5; // r12
  __int64 v6; // r4
  __int64 v7; // r6
  bool v8; // cf
  unsigned __int64 v9; // r8
  int v11; // [sp+4h] [bp-438h]
  unsigned int v12; // [sp+20h] [bp-41Ch]
  __int64 v16; // [sp+30h] [bp-40Ch] BYREF
  _BYTE s2[1028]; // [sp+38h] [bp-404h] BYREF

  if ( !a5 )
    return 1;
  v5 = 0;
  v6 = 0;
  v12 = 0;
  while ( 1 )
  {
    v9 = a5 - v6;
    if ( (unsigned __int64)(a5 - v6) > 0x3FF )
      v9 = 1024;
    if ( sub_22F850(a1 | 0x200000000LL, 0, (int)s2, 0, v11, a3 + v12, (__PAIR64__(v5, a3) + v12) >> 32, v9, &v16) != 1 )
      break;
    v7 = v16;
    if ( memcmp((const void *)(a2 + v12), s2, v16) )
      break;
    v6 += v7;
    sub_258BD4(0);
    v8 = HIDWORD(v6) >= HIDWORD(a5);
    v12 = v6;
    if ( HIDWORD(v6) == HIDWORD(a5) )
      v8 = (unsigned int)v6 >= (unsigned int)a5;
    v5 = HIDWORD(v6);
    if ( v8 )
      return 1;
  }
  return 0;
}
