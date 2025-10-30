int __fastcall sub_1C4F0C(unsigned int *a1, const void *a2, int a3)
{
  int v5; // r9
  int v6; // r5
  int v7; // r1
  void *v8; // r7
  int v9; // r1

  v5 = a3 >> 31;
  v6 = ((unsigned int)(a3 + 16) >> 4) + 2;
  sub_1C4EA8(a1, v6);
  sub_1C3898((int *)a1, v7, a3, v5);
  v8 = (void *)(a1[1] + 16 * (a1[2] + 1));
  memcpy(v8, a2, a3);
  *((_BYTE *)v8 + a3) = 0;
  v9 = a1[2] - 2;
  a1[2] = v9 + v6;
  return sub_1C3898((int *)a1, v9, a3, v5);
}
