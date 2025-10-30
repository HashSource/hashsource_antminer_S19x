void __fastcall sub_950E8(const char *a1, int a2, int a3)
{
  void *v5; // r8
  void *v6; // r7
  void *v7; // r7
  int v8; // [sp+14h] [bp-4h] BYREF

  v8 = 0;
  v5 = sub_9253C(2460088, (int)&v8);
  v6 = sub_92E28();
  sub_94D50(a1, a3 & 2);
  sub_92E40((int)v6);
  if ( a1 )
  {
    v7 = sub_92E28();
    sub_213958(a1, a3);
    sub_92E40((int)v7);
  }
  sub_92620(v5);
}
