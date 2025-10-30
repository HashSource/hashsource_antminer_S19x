int __fastcall sub_251C68(int a1, int a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf
  _BYTE v10[40]; // [sp+4h] [bp-28h] BYREF

  v6 = a6 == 0;
  if ( !a6 )
    v6 = 1;
  if ( !v6 )
    sub_946E0("Conversion of large integer to a decimal floating type is not supported.");
  sub_3297B0(v10, a5);
  return sub_251B6C((int)v10, a2, a3);
}
