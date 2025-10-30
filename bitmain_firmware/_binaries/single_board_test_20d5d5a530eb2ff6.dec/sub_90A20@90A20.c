int __fastcall sub_90A20(int a1, int a2)
{
  int v5; // r4

  if ( !*(_DWORD *)(a1 + 1464) )
    return 2;
  if ( sub_A8450(a2, a2, 44, 0, 2)
    && sub_A8398(a2, 2)
    && sub_A8544(a2, *(_DWORD *)(a1 + 1460), *(_DWORD *)(a1 + 1464), 2)
    && sub_A7EDC(a2) )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    sub_95494(a1, 80, 535, 68, "ssl/statem/extensions_clnt.c", 734);
  }
  CRYPTO_free(*(_DWORD *)(a1 + 1460), "ssl/statem/extensions_clnt.c", 740);
  *(_DWORD *)(a1 + 1460) = 0;
  *(_DWORD *)(a1 + 1464) = 0;
  return v5;
}
