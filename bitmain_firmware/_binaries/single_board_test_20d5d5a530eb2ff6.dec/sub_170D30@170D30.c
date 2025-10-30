int __fastcall sub_170D30(unsigned int a1, _BYTE **a2)
{
  _BYTE *v2; // r3
  char v3; // r2
  unsigned int v4; // r4

  v2 = *a2;
  v3 = a1;
  v4 = a1 >> 8;
  v2[1] = v3;
  *v2 = v4;
  *a2 += 2;
  return 1;
}
