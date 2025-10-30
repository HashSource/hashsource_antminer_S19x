int __fastcall sub_D6EEC(int a1, int a2, int a3, int a4)
{
  int v6; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  _BYTE v11[216]; // [sp+0h] [bp-D8h] BYREF

  if ( a4
    || (v8 = sub_D8920(a1), (sub_D8928(v8) & ((unsigned int)&loc_F0004 + 3)) == 4)
    || (v9 = sub_D8920(a1), (sub_D8928(v9) & ((unsigned int)&loc_F0004 + 3)) == 3) )
  {
    v6 = sub_D8934(a1);
    sub_DD8EC(a2, v6);
    return 1;
  }
  else
  {
    sub_DD8EC(a2, v11);
    v10 = sub_D8934(a1);
    sub_DDC00(v11, v10);
    sub_E07F8((int)v11, 0xD8u);
    return 1;
  }
}
