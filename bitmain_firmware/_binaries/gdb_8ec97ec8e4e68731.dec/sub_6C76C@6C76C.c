int __fastcall sub_6C76C(int a1, int *a2, int **a3)
{
  int result; // r0

  result = 289;
  if ( (a2[5] & 0x121) != 0 )
  {
    result = *a2;
    if ( *a2 )
    {
      result = strcmp((const char *)result, ".stapsdt.base");
      if ( !result )
        *a3 = a2;
    }
  }
  return result;
}
