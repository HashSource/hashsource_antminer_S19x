int __fastcall sub_94D78(_DWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r3
  int v7; // r1
  int v8; // r3
  int v9; // r1
  int v10; // r0
  int v11; // r9
  int v12; // r0
  int v13; // [sp+Ch] [bp-8h] BYREF

  v4 = *(_DWORD *)(a1[31] + 856);
  if ( a1[275] == 1 )
  {
    if ( v4 )
      return 2;
    if ( !sub_A8450(a2, a2, 51, 0, 2)
      || !sub_A8398(a2, 2)
      || !sub_A8450(a2, v9, *(unsigned __int16 *)(a1[31] + 854), 0, 2)
      || !sub_A7EDC(a2) )
    {
      v8 = 1700;
      goto LABEL_10;
    }
    return 1;
  }
  else
  {
    v5 = a1[35];
    if ( !v4 )
    {
      if ( v5 && sub_A5814(a1, *(_DWORD *)(a1[31] + 856), *(_DWORD *)(a1[31] + 856)) )
        return 2;
      v8 = 1711;
      goto LABEL_10;
    }
    if ( v5 && (a1[361] & 2) == 0 )
      return 2;
    if ( !sub_A8450(a2, a2, 51, 0, 2)
      || !sub_A8398(a2, 2)
      || !sub_A8450(a2, v7, *(unsigned __int16 *)(a1[31] + 854), 0, 2) )
    {
      v8 = 1728;
LABEL_10:
      sub_95494(a1, 80, 456, 68, "ssl/statem/extensions_srvr.c", v8);
      return 0;
    }
    v10 = sub_82F68(v4);
    v11 = v10;
    if ( !v10 )
    {
      sub_95494(a1, 80, 456, 65, "ssl/statem/extensions_srvr.c", 1735);
      return 0;
    }
    v12 = sub_DA760(v10, &v13);
    if ( v12 )
    {
      if ( sub_A8544(a2, v13, v12, 2) && sub_A7EDC(a2) )
      {
        CRYPTO_free(v13, "ssl/statem/extensions_srvr.c", 1756);
        *(_DWORD *)(a1[31] + 532) = v11;
        return sub_83144(a1, v11, v4, 1) != 0;
      }
      else
      {
        sub_95494(a1, 80, 456, 68, "ssl/statem/extensions_srvr.c", 1751);
        sub_DA240(v11);
        CRYPTO_free(v13, "ssl/statem/extensions_srvr.c", 1753);
        return 0;
      }
    }
    else
    {
      sub_95494(a1, 80, 456, 16, "ssl/statem/extensions_srvr.c", 1743);
      sub_DA240(v11);
      return 0;
    }
  }
}
