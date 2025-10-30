int sub_2B408()
{
  int v0; // r4
  int v1; // r0
  int result; // r0

  v0 = 0;
  do
  {
    v1 = v0++;
    result = sub_6DD90(v1) + 1;
  }
  while ( result && v0 != 4 );
  return result;
}
