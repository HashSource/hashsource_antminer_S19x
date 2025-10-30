int __fastcall sub_10D890(int a1)
{
  int *v3; // r0
  _BYTE v4[16]; // [sp+0h] [bp-10h] BYREF

  if ( a1 )
  {
    sub_25689C(v4);
    if ( !sub_2568D4(v4, a1, "w") )
      sub_258B04("maintenance print dummy-frames");
    sub_10D19C((int)v4);
    return sub_256514(v4);
  }
  else
  {
    v3 = (int *)sub_242F8C(0);
    return sub_10D19C(*v3);
  }
}
