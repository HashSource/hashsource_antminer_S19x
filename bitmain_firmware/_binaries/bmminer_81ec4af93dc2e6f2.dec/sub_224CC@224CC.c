int __fastcall sub_224CC(int a1)
{
  int v3; // r4
  int v4; // r4
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = 0;
  if ( dword_AFE58 != 2 )
  {
    sub_1C830(a1, (unsigned __int8)dword_B413C, &v5);
    return v5;
  }
  if ( !sub_26EB8() )
    return v5;
  v3 = dword_B1070[a1];
  v4 = sub_26540() * v3;
  return sub_26580() * v4 / 1000 + v5;
}
