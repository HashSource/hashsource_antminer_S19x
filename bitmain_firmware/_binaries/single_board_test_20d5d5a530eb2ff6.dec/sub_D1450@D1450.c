int __fastcall sub_D1450(int a1)
{
  int result; // r0
  int v2; // r4

  result = sub_B78F4(a1, 0);
  if ( result )
  {
    v2 = result;
    sub_D13A4((int (__fastcall *)(char *, size_t, int))sub_D1398, result);
    return BIO_vfree_0(v2);
  }
  return result;
}
