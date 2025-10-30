int __fastcall sub_9DA74(_DWORD *a1)
{
  int v1; // r4
  int v4; // r0
  int v5; // r0

  if ( !a1[386] )
  {
    v4 = sub_A9244(a1, 1);
    v1 = v4;
    if ( !v4 )
      return v1;
    v5 = sub_D14F4(v4);
    v1 = v5;
    a1[386] = v5;
    if ( !v5 )
    {
      sub_95494(a1, 80, 618, 68, (int)"ssl/statem/statem_lib.c", 2405);
      return v1;
    }
    v1 = sub_D17B4(v5, *(_DWORD *)(a1[31] + 216));
    if ( !v1 )
    {
      sub_95494(a1, 80, 618, 68, (int)"ssl/statem/statem_lib.c", 2412);
      sub_D1504(a1[386]);
      a1[386] = 0;
      return v1;
    }
  }
  return 1;
}
