int sub_DBB2C()
{
  int result; // r0
  int v1; // r2

  result = sub_DE05C(0, 0, 0);
  if ( result )
  {
    v1 = sub_10C510(result);
    result = v1 != 0;
    dword_6E194C = v1;
  }
  dword_6E1950 = result;
  return result;
}
