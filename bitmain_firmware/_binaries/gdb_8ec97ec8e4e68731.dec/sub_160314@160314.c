int __fastcall sub_160314(int a1)
{
  void *v2; // r4
  int v3; // r5
  int v4; // r0
  int *v6; // r0
  __int64 v7; // r0

  if ( a1 )
  {
    v2 = sub_92E28();
    v3 = sub_15DE14(a1);
    sub_92E40((int)v2);
    v4 = sub_21DDAC(v3);
    if ( v4 )
      return sub_21A6D8(v4);
  }
  else
  {
    v7 = sub_94700(
           (int)"frame.c",
           2745,
           "%s: Assertion `%s' failed.",
           "language get_frame_language(frame_info*)",
           "frame!= NULL");
    if ( HIDWORD(v7) != 1 )
    {
      sub_339E78(v7);
      sub_92E60();
    }
    v6 = (int *)sub_339E78(v7);
    if ( v6[1] != 9 )
      sub_92F1C(*v6, v6[1], v6[2]);
    sub_339EF8(v6);
  }
  return 0;
}
