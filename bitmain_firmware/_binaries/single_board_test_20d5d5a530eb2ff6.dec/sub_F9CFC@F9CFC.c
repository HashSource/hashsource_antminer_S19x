int __fastcall sub_F9CFC(_BYTE *a1, int a2, const void *a3, signed int a4)
{
  size_t v5; // r4
  _BYTE *v6; // r6

  if ( a2 - 10 <= a4 )
  {
    sub_D0048(4, 108, 110, (int)"crypto/rsa/rsa_pk1.c", 26);
    return 0;
  }
  else
  {
    v5 = a2 - 3 - a4;
    *a1 = 0;
    v6 = a1 + 2;
    a1[1] = 1;
    memset(a1 + 2, 255, v5);
    v6[v5] = 0;
    memcpy(&v6[v5 + 1], a3, a4);
    return 1;
  }
}
