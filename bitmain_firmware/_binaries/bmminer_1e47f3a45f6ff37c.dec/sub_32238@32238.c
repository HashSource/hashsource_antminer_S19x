int __fastcall sub_32238(int a1, int a2)
{
  int v4; // r12
  int result; // r0
  int v6; // r2
  int v7; // r3
  int v8; // t1

  v4 = sub_26A44();
  if ( v4 <= 0 )
    return 0;
  result = 0;
  v6 = a2 + (a1 << 10) - 4;
  v7 = 0;
  do
  {
    ++v7;
    v8 = *(_DWORD *)(v6 + 4);
    v6 += 4;
    result += v8;
  }
  while ( v7 != v4 );
  return result;
}
