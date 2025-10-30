int __fastcall sub_1A408C(void (__fastcall *a1)(int, int), int a2, int a3)
{
  void *v6; // r0
  int v7; // r1
  int v8; // r5
  unsigned int v9; // r4

  v6 = sub_92E28();
  v7 = a3;
  v8 = (int)v6;
  v9 = __clz(*(_DWORD *)(dword_487668 + 68));
  a1(a2, v7);
  sub_243578(v9 >> 5);
  sub_92E40(v8);
  return 1;
}
