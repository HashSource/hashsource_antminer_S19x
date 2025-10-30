int __fastcall sub_1E0F74(int a1, __int64 a2)
{
  __int64 v3; // r4
  int v4; // r12
  unsigned int v5; // r1
  bool v6; // zf
  int v7; // r1
  int v8; // r6
  int v9; // lr
  int v10; // r1
  int v11; // r12

  if ( a2 )
  {
    v3 = a2;
    v4 = 0;
    do
    {
      v5 = v3 >> 4;
      HIDWORD(v3) >>= 4;
      LODWORD(v3) = v5;
      v6 = __PAIR64__(HIDWORD(v3), v5) == 0;
      v7 = v4 + 1;
      v4 = v7;
      v8 = v7;
    }
    while ( !v6 );
    v9 = v7;
  }
  else
  {
    v8 = 1;
    v9 = 1;
    v7 = 1;
  }
  v10 = a1 + v7;
  *(_BYTE *)(a1 + v9) = 0;
  do
  {
    v11 = a2 >> 4;
    HIDWORD(a2) >>= 4;
    *(_BYTE *)--v10 = a0123456789abcd_0[a2 & 0xF];
    LODWORD(a2) = v11;
  }
  while ( a1 != v10 );
  return v8;
}
