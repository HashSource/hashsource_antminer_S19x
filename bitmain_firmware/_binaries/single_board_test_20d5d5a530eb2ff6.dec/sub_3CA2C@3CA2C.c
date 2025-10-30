int __fastcall sub_3CA2C(int result, int a2, int a3)
{
  int v3; // r4
  int v5; // r6
  int v6; // r0
  int v7; // r1

  if ( a2 < a3 )
  {
    v3 = a2;
    v5 = result;
    do
    {
      v6 = sub_3C978(v5, v3, a3);
      v7 = v3;
      v3 = v6 + 1;
      result = sub_3CA2C(v5, v7, v6 - 1);
    }
    while ( v3 < a3 );
  }
  return result;
}
