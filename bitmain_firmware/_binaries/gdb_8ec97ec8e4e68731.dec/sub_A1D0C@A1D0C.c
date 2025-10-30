int __fastcall sub_A1D0C(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // [sp+10h] [bp-Ch] BYREF
  int v7; // [sp+14h] [bp-8h] BYREF

  result = sub_A19AC("_tag", a1, 0, &v7, &v6, 0, 0, 0);
  if ( result )
  {
    if ( a2 )
      a2 += v6;
    if ( a3 )
      a3 += v6;
    return sub_26DD30(v7, a2, a3);
  }
  return result;
}
