int __fastcall sub_16030C(_DWORD *a1)
{
  qmemcpy(a1 + 3, "RRRRRRRR%%%%%%%%", 16);
  *a1 = 0;
  a1[7] = 1;
  return 1;
}
