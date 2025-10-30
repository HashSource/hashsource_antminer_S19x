int __fastcall sub_1663C0(void *a1, int a2, void *src, signed int n)
{
  if ( n > a2 )
  {
    sub_D0048(4, 107, 110, (int)"crypto/rsa/rsa_none.c", 18);
    return 0;
  }
  else if ( n < a2 )
  {
    sub_D0048(4, 107, 122, (int)"crypto/rsa/rsa_none.c", 23);
    return 0;
  }
  else
  {
    memcpy(a1, src, n);
    return 1;
  }
}
