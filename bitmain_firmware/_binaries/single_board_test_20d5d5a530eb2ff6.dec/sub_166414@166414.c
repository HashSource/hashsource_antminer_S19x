int __fastcall sub_166414(char *a1, signed int a2, const void *a3, signed int a4)
{
  int v4; // r6

  if ( a4 > a2 )
  {
    sub_D0048(4, 111, 109, (int)"crypto/rsa/rsa_none.c", 36);
    return -1;
  }
  else
  {
    v4 = a2 - a4;
    memset(a1, 0, a2 - a4);
    memcpy(&a1[v4], a3, a4);
    return a2;
  }
}
