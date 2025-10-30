int __fastcall sub_1A7190(int a1)
{
  int v2; // r0
  int v3; // r5
  int *v5; // r0
  _BYTE v6[20]; // [sp+0h] [bp-14h] BYREF

  v2 = sub_B894C(a1);
  v3 = v2;
  if ( a1 )
  {
    sub_25689C(v6);
    if ( !sub_2568D4(v6, a1, "w") )
      sub_258B04("maintenance print architecture");
    sub_163F20(v3, (int)v6);
    return sub_256514(v6);
  }
  else
  {
    v5 = (int *)sub_242F8C(v2);
    return sub_163F20(v3, *v5);
  }
}
