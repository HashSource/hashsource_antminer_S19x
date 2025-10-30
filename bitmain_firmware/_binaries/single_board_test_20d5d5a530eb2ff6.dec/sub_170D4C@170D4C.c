int __fastcall sub_170D4C(unsigned int a1, _BYTE **a2)
{
  _BYTE *v2; // r3
  unsigned int v3; // r2
  unsigned int v4; // r5
  unsigned int v5; // r4

  v2 = *a2;
  v3 = a1 >> 8;
  v4 = HIBYTE(a1);
  v5 = HIWORD(a1);
  v2[3] = a1;
  *v2 = v4;
  v2[1] = v5;
  v2[2] = v3;
  *a2 += 4;
  return 1;
}
