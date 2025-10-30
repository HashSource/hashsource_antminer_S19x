int __fastcall sub_251C14(int a1, int a2, int a3, int a4, int a5, int a6)
{
  bool v7; // zf
  _BYTE v10[40]; // [sp+4h] [bp-28h] BYREF

  v7 = a5 >> 31 == a6;
  if ( a5 >> 31 == a6 )
    v7 = 1;
  if ( !v7 )
    sub_946E0("Conversion of large integer to a decimal floating type is not supported.");
  sub_329718(v10, a5);
  return sub_251B6C((int)v10, a2, a3);
}
