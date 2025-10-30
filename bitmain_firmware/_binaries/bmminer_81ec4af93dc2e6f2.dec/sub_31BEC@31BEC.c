int __fastcall sub_31BEC(int a1, int a2)
{
  int v4; // r12
  int result; // r0
  int v6; // r3
  int v7; // r1
  int v8; // t1

  v4 = sub_26540();
  if ( v4 <= 0 )
    return 0;
  result = 0;
  v6 = 0;
  v7 = a2 + (a1 << 10) - 4;
  do
  {
    ++v6;
    v8 = *(_DWORD *)(v7 + 4);
    v7 += 4;
    result += v8;
  }
  while ( v4 != v6 );
  return result;
}
