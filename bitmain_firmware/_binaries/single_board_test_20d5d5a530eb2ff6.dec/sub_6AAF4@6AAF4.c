int __fastcall sub_6AAF4(int a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r1
  unsigned int v5; // t1

  v2 = a2 - 4;
  result = a1 - 4;
  v4 = a2 + 28;
  do
  {
    v5 = *(_DWORD *)(v2 + 4);
    v2 += 4;
    *(_DWORD *)(result + 4) = bswap32(v5);
    result += 4;
  }
  while ( v2 != v4 );
  return result;
}
