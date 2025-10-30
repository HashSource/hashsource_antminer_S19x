// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1D47B4(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6
  int v6; // r0
  void *v8; // r7
  int v9; // r0

  v6 = v4;
  sub_92E40(v6);
  if ( a2 != 1 )
  {
    sub_339E78(a1);
    sub_92E60();
  }
  sub_339E78(a1);
  *(_DWORD *)(v2 + 8) = 1;
  v8 = sub_92E28();
  sub_2435B0("target record-btrace", v3);
  v9 = sub_92E40((int)v8);
  return sub_349250(v9);
}
