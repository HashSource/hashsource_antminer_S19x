bool __fastcall sub_1B05A0(unsigned int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r1
  unsigned int v5; // r3

  v4 = a2 + a1;
  v5 = a4 + a3;
  if ( v4 >= v5 )
    v4 = v5;
  if ( a3 >= a1 )
    a1 = a3;
  return v4 > a1;
}
