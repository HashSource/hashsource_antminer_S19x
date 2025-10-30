int __fastcall sub_CD534(int a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2

  v3 = *(_DWORD *)(a1 + 8);
  if ( !v3 || (v5 = *(_DWORD *)(a1 + 12)) == 0 )
  {
    sub_D0048(16, 278, 140, "crypto/ec/ecx_meth.c", 665);
    return 0;
  }
  v6 = *(_DWORD *)(v3 + 24);
  v7 = *(_DWORD *)(v5 + 24);
  if ( v6 && *(_DWORD *)(v6 + 60) )
  {
    if ( v7 )
    {
      if ( !a2 || sub_14F8E0(a2) )
      {
        *a3 = 32;
        return 1;
      }
    }
    else
    {
      sub_D0048(16, 278, 133, "crypto/ec/ecx_meth.c", 675);
    }
    return 0;
  }
  sub_D0048(16, 278, 123, "crypto/ec/ecx_meth.c", 671);
  return 0;
}
