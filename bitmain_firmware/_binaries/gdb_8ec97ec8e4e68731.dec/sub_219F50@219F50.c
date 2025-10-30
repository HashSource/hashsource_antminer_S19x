int __fastcall sub_219F50(int a1)
{
  int result; // r0
  void *v3; // r5

  result = sub_1CD14C(a1, (_DWORD *)dword_489700);
  if ( !result )
  {
    v3 = sub_93094(1u, 8u);
    sub_219E3C((int)v3, dword_46DBAC);
    sub_1CD144(a1, (_DWORD *)dword_489700, (int)v3);
    return (int)v3;
  }
  return result;
}
