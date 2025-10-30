int __fastcall sub_1F79C(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r0
  int v5; // r1
  int v6; // t1

  if ( !a2 )
    return 127;
  v2 = a1 - 1;
  v3 = 127;
  v4 = a1 + (unsigned __int8)(a2 - 1);
  do
  {
    v6 = *(char *)++v2;
    v5 = v6;
    if ( v3 >= v6 )
      v3 = v5;
  }
  while ( v2 != v4 );
  return v3;
}
