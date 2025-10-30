int __fastcall sub_92020(int a1, unsigned __int8 **a2)
{
  unsigned int v2; // r3
  int v4; // r0
  unsigned int v5; // r3
  unsigned int v6; // r4
  int v7; // r6
  int v9; // r0

  v2 = (unsigned int)a2[1];
  if ( v2 > 1 )
  {
    v4 = (int)*a2;
    v5 = v2 - 2;
    v6 = (*a2)[1] | (**a2 << 8);
    if ( v6 <= v5 )
    {
      v7 = v4 + 2;
      if ( v6 == v5 )
      {
        *a2 = (unsigned __int8 *)(v4 + 2 + v6);
        a2[1] = 0;
        CRYPTO_free(*(_DWORD *)(a1 + 1460), "ssl/statem/../packet_local.h", 453);
        *(_DWORD *)(a1 + 1460) = 0;
        *(_DWORD *)(a1 + 1464) = 0;
        if ( !v6 )
          return 1;
        v9 = sub_E9E68(v7, v6, "ssl/statem/../packet_local.h", 462);
        *(_DWORD *)(a1 + 1460) = v9;
        if ( v9 )
        {
          *(_DWORD *)(a1 + 1464) = v6;
          return 1;
        }
      }
    }
  }
  sub_95494(a1, 50, 534, 159, "ssl/statem/extensions_clnt.c", 1921);
  return 0;
}
