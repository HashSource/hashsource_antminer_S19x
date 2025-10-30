_DWORD *sub_283594()
{
  _DWORD *result; // r0
  _DWORD *v1; // r3
  _DWORD *v2; // r2

  result = sub_283524();
  v1 = result;
  v2 = result;
  do
  {
    v2[65] = sub_295EA8;
    v2 += 2;
  }
  while ( v2 != result + 190 );
  result[19] = sub_295EA8;
  result[255] = sub_296014;
  result[17] = sub_296014;
  do
  {
    v1[257] = sub_295EA8;
    v1 += 2;
  }
  while ( result + 256 != v1 );
  return result;
}
