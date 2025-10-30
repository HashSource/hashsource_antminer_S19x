int __fastcall sub_333C0(int a1, int a2)
{
  int v3; // r1
  int v4; // r3
  int v5; // r0

  if ( !a1 )
    sub_946E0("add-symbol-file-from-memory requires an expression argument");
  v3 = sub_14CB9C();
  v4 = *(_DWORD *)(dword_487D2C + 32);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 36);
  else
    v5 = *(_DWORD *)(dword_487D2C + 8);
  if ( !v5 )
    sub_946E0("Must use symbol-file or exec-file before add-symbol-file-from-memory.", v3);
  return sub_33128(v5, v3, 0, 0, a2);
}
