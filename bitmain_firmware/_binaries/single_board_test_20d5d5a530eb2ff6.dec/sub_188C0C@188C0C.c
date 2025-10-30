int __fastcall sub_188C0C(int *a1, int *a2)
{
  int v2; // r3
  int *v3; // r6
  int *v6; // r0
  int *v7; // r3
  int v8; // t1

  v2 = a2[28];
  v3 = a2 + 12;
  a2[10] = -1;
  memset((char *)a2 + v2 + 48, 0, 64 - v2);
  sub_187680(a2, v3, a2[28]);
  v6 = a1;
  v7 = a2 - 1;
  do
  {
    v8 = v7[1];
    ++v7;
    *v6++ = v8;
  }
  while ( v7 != a2 + 7 );
  sub_E07F8(a2, 0x74u);
  return 1;
}
