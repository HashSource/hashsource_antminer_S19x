int __fastcall sub_347E58(__int64 a1)
{
  unsigned int v1; // r3
  bool v2; // cf
  bool v3; // zf
  unsigned int v4; // r12
  int v5; // r3
  signed int v6; // r2
  bool v7; // cc
  int v8; // r2
  int v9; // r3
  int v10; // r12
  char v11; // r2

  if ( a1 )
  {
    v1 = HIDWORD(a1) & 0x80000000;
    if ( a1 < 0 )
    {
      v2 = (_DWORD)a1 == 0;
      LODWORD(a1) = -(int)a1;
      HIDWORD(a1) -= 2 * HIDWORD(a1) + !v2;
    }
    v4 = HIDWORD(a1);
    v3 = HIDWORD(a1) == 0;
    if ( !HIDWORD(a1) )
    {
      v4 = a1;
      HIDWORD(a1) = a1;
      LODWORD(a1) = 0;
    }
    v5 = v1 | 0x5B000000;
    if ( v3 )
      v5 -= 0x10000000;
    v6 = __clz(v4);
    v7 = v6 < 8;
    v8 = v6 - 8;
    v9 = v5 - 0x800000 - (v8 << 23);
    if ( v7 )
    {
      v11 = v8 + 32;
      v3 = ((unsigned int)a1 | (2 * (HIDWORD(a1) << v11))) == 0;
      LODWORD(a1) = (HIDWORD(a1) >> (32 - v11)) + __CFSHL__(HIDWORD(a1) << v11, 1) + v9;
      if ( v3 )
        LODWORD(a1) = a1 & ~(HIDWORD(a1) << v11 >> 31);
    }
    else
    {
      v10 = (_DWORD)a1 << v8;
      LODWORD(a1) = ((unsigned int)a1 >> (32 - v8)) + ((_DWORD)a1 << v8 >= 0x80000000) + v9 + (HIDWORD(a1) << v8);
      if ( v10 == 0x80000000 )
        LODWORD(a1) = a1 & 0xFFFFFFFE;
    }
  }
  return a1;
}
