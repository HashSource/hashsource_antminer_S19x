int __fastcall sub_2591FC(int a1)
{
  int v2; // r12

  v2 = dword_48A9B4;
  *(_QWORD *)(a1 + 4) = __PAIR64__(dword_487A50, dword_48A9B8);
  *(_DWORD *)a1 = v2;
  dword_487A50 = 1;
  sub_259080();
  return a1;
}
