int __fastcall sub_12F9FC(int a1, int a2, int a3)
{
  int result; // r0
  char v5; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r1

  if ( !a3 )
    return -1;
  v5 = 64 - sub_B8208(a3);
  v6 = a3 << v5;
  v7 = -(a3 << v5);
  if ( !(a3 << v5) )
    return -1;
  v8 = -(a3 << v5);
  do
    v8 -= v6;
  while ( v8 );
  result = -1;
  do
  {
    v7 -= v6;
    --result;
  }
  while ( v7 );
  return result;
}
