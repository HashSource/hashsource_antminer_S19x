int __fastcall sub_B6FC8(int a1, int a2, int a3)
{
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = 0;
  if ( sub_B6ECC(a1, a2, a3, (int)&v4) <= 0 )
    return 0;
  else
    return v4;
}
