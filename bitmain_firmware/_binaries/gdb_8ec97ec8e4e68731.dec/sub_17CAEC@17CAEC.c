int __fastcall sub_17CAEC(int a1, int a2, char *name, int *a4)
{
  int result; // r0

  result = unlink(name);
  if ( result == -1 )
  {
    sub_17CA34(a4);
    return -1;
  }
  return result;
}
