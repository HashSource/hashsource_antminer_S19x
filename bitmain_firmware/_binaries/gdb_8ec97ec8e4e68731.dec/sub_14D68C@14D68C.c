int __fastcall sub_14D68C(int a1, int a2, int a3)
{
  int v3; // r0
  int v5; // r0
  int v6; // [sp+4h] [bp-8h] BYREF

  if ( a1 == 2 )
  {
    v5 = sub_1C394C(a3, a2, 0);
    return sub_260DBC(v5);
  }
  else
  {
    v3 = sub_1C394C(a3, a2, &v6);
    return sub_260F84(v3, v6);
  }
}
