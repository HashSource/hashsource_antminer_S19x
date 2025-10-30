int __fastcall sub_90448(_DWORD *a1, int a2)
{
  int v2; // r2
  _DWORD *v3; // r3

  v2 = a1[357];
  v3 = (_DWORD *)a1[31];
  v3[212] = 0;
  if ( !v2 || v3[96] && v3[129] )
    return 2;
  if ( sub_A8450(a2, a2, 16, 0, 2) && sub_A8398(a2, 2) && sub_A8544(a2, a1[357], a1[358], 2) && sub_A7EDC(a2) )
  {
    *(_DWORD *)(a1[31] + 848) = 1;
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 466, 68, "ssl/statem/extensions_clnt.c", 416);
    return 0;
  }
}
