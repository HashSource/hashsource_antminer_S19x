int __fastcall sub_AFB54(int a1)
{
  int result; // r0
  void *v3; // r5

  result = sub_1CD14C(a1, dword_4781EC);
  if ( !result )
  {
    v3 = sub_93094(1u, 0x50u);
    sub_1CD144(a1, dword_4781EC, v3);
    return (int)v3;
  }
  return result;
}
