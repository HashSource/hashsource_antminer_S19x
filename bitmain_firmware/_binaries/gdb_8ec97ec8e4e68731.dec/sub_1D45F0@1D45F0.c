int __fastcall sub_1D45F0(_BYTE *a1, int a2)
{
  void *v3; // r5

  if ( a1 && *a1 )
    sub_946E0("Invalid argument.");
  dword_487D6C = 2;
  v3 = sub_92E28();
  sub_2435B0("target record-btrace", a2);
  return sub_92E40((int)v3);
}
