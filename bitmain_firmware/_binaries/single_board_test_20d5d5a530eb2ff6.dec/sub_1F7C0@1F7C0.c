int __fastcall sub_1F7C0(int a1, int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // t1

  if ( !a2 )
    return -1;
  v2 = a1 - 4;
  v3 = -1;
  v4 = a1 + 4 * (unsigned __int8)(a2 - 1);
  do
  {
    v6 = *(_DWORD *)(v2 + 4);
    v2 += 4;
    v5 = v6;
    if ( v3 >= v6 )
      v3 = v5;
  }
  while ( v2 != v4 );
  return v3;
}
