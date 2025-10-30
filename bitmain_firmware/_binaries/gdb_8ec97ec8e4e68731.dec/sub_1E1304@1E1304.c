int __fastcall sub_1E1304(int *a1, int *a2, __int64 a3)
{
  int v3; // r7
  int v6; // r4
  __int64 v7; // r0
  unsigned int v8; // r3
  int result; // r0
  int v10; // r2
  int v11; // r3
  bool v12; // zf

  v3 = HIDWORD(a3);
  if ( a3 )
  {
    v7 = a3;
    v6 = 0;
    do
    {
      v8 = v7 >> 4;
      HIDWORD(v7) >>= 4;
      ++v6;
      LODWORD(v7) = v8;
    }
    while ( __PAIR64__(HIDWORD(v7), v8) );
  }
  else
  {
    v6 = 1;
  }
  if ( *a2 < v6 )
    sub_946E0("Packet too long for target.");
  HIDWORD(a3) = v3;
  result = sub_1E0F74(*a1, a3);
  v10 = *a1;
  v11 = *a2 - v6;
  v12 = *a2 == v6;
  *a1 += v6;
  *a2 = v11;
  if ( !v12 )
    *(_BYTE *)(v10 + v6) = 0;
  return result;
}
