int __fastcall sub_126EC8(size_t *a1, __int64 a2)
{
  char *p_s; // r5
  int v4; // r6
  unsigned int v5; // r4
  char *v6; // r1
  char s; // [sp+7h] [bp-5h] BYREF

  p_s = &s;
  v4 = 8;
  a1[1] = 2;
  do
  {
    v5 = a2 >> 8;
    v6 = p_s;
    HIDWORD(a2) >>= 8;
    *p_s-- = a2;
    LODWORD(a2) = v5;
    --v4;
  }
  while ( __PAIR64__(HIDWORD(a2), v5) );
  return sub_AE088(a1, v6, 8 - v4);
}
