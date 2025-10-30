int __fastcall sub_126CCC(size_t *a1, __int64 a2)
{
  char *v3; // r5
  int v4; // r6
  unsigned int v5; // r4
  char *v6; // r1
  int v8; // r6
  __int64 v9; // r4
  char *v10; // r2
  unsigned int v11; // r3
  char *v12; // r1
  char s[5]; // [sp+7h] [bp-5h] BYREF

  a1[1] = 2;
  if ( a2 < 0 )
  {
    LODWORD(v9) = -(int)a2;
    v8 = 8;
    HIDWORD(v9) = HIDWORD(a2) - (2 * HIDWORD(a2) + ((_DWORD)a2 != 0));
    v10 = s;
    do
    {
      v11 = v9 >> 8;
      v12 = v10;
      HIDWORD(v9) >>= 8;
      *v10-- = v9;
      LODWORD(v9) = v11;
      --v8;
    }
    while ( __PAIR64__(HIDWORD(v9), v11) );
    a1[1] = 258;
    return sub_AE088(a1, v12, 8 - v8);
  }
  else
  {
    v3 = s;
    v4 = 8;
    do
    {
      v5 = a2 >> 8;
      v6 = v3;
      HIDWORD(a2) >>= 8;
      *v3-- = a2;
      LODWORD(a2) = v5;
      --v4;
    }
    while ( __PAIR64__(HIDWORD(a2), v5) );
    return sub_AE088(a1, v6, 8 - v4);
  }
}
