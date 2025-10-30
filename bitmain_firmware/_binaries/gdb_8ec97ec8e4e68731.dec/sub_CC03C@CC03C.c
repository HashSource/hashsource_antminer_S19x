int __fastcall sub_CC03C(int a1, int a2)
{
  int v3; // r6
  void (*v4)(void); // r5

  v3 = a2;
  v4 = *(void (**)(void))(**(_DWORD **)(a1 + 76) + 32);
  if ( v4 != nullsub_8 )
  {
    v4();
    a2 = v3;
  }
  return sub_C9554(a1, a2);
}
