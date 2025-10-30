int __fastcall sub_8FF64(_DWORD *a1, int a2)
{
  int v5; // r1
  int v6; // [sp+8h] [bp-8h] BYREF
  int v7; // [sp+Ch] [bp-4h] BYREF

  if ( !sub_8FCAC(a1) )
    return 2;
  sub_A2C80(a1, &v6, &v7);
  if ( sub_A8450(a2, v5, 11, 0, 2) && sub_A8398(a2, 2) && sub_A8544(a2, v6, v7, 1) && sub_A7EDC(a2) )
    return 1;
  sub_95494(a1, 80, 467, 68, "ssl/statem/extensions_clnt.c", 178);
  return 0;
}
