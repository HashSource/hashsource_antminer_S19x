int __fastcall sub_155FBC(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v5[21]; // [sp+0h] [bp-50h] BYREF

  v5[20] = a4;
  sub_155E5C(v5, a1, a1);
  sub_155530(v5);
  return (int)(v5[0] << 31) >> 31;
}
