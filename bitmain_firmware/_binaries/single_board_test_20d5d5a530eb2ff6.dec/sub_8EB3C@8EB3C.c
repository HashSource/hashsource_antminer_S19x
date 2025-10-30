int __fastcall sub_8EB3C(int a1, int a2, int a3)
{
  int v3; // r1
  bool v4; // zf
  int v5; // r3

  v3 = *(_DWORD *)(a1 + 28);
  v4 = v3 == 0;
  if ( v3 )
    v4 = a3 == 0;
  if ( v4 )
    return 1;
  v5 = *(_DWORD *)(a1 + 1480);
  if ( !v5 || *(_DWORD *)(*(_DWORD *)(v5 + 616) + 440) )
    return 1;
  sub_95494(a1, 109, 639, 310, "ssl/statem/extensions.c", 1742);
  return 0;
}
