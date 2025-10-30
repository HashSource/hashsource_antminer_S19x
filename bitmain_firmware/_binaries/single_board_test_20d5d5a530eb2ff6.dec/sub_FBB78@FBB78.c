int __fastcall sub_FBB78(_BYTE *a1, int a2, void *src, size_t n)
{
  size_t v4; // r1
  _BYTE *v7; // r5
  void *v8; // r3

  v4 = a2 - n;
  if ( (int)(v4 - 2) < 0 )
  {
    sub_D0048(4, 127, 110, (int)"crypto/rsa/rsa_x931.c", 30);
    return -1;
  }
  else
  {
    if ( v4 == 2 )
    {
      v8 = a1 + 1;
      *a1 = 106;
    }
    else
    {
      v7 = a1 + 1;
      *a1 = 107;
      if ( v4 != 3 )
      {
        v7 += v4 - 3;
        memset(a1 + 1, 187, v4 - 3);
      }
      v8 = v7 + 1;
      *v7 = -70;
    }
    *((_BYTE *)memcpy(v8, src, n) + n) = -52;
    return 1;
  }
}
