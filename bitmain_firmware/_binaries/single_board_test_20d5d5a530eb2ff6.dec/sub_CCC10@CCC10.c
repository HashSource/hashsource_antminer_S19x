int __fastcall sub_CCC10(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r1
  int v7; // r4

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 60);
    v4 = **(_DWORD **)(a1 + 12);
    v5 = v4 == 1034;
    if ( v4 != 1034 )
      v5 = v4 == 1087;
    if ( v5 )
    {
      v6 = 32;
    }
    else if ( v4 == 1035 )
    {
      v6 = 56;
    }
    else
    {
      v6 = 57;
    }
    v7 = a1;
    ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(v3, v6, "crypto/ec/ecx_meth.c", 258);
    v2 = *(_DWORD *)(v7 + 24);
  }
  return CRYPTO_free(v2, "crypto/ec/ecx_meth.c", 259);
}
