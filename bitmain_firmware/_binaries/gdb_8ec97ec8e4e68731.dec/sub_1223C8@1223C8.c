int __fastcall sub_1223C8(int a1, int a2, int a3, int a4, int *a5, char a6)
{
  *a5 = ((1 << a6) - 1) & a1;
  a5[1] = a2 & ((__PAIR64__((1 << (a6 - 32)) | (1u >> (32 - a6)), 1 << a6) - 1) >> 32);
  return 0;
}
