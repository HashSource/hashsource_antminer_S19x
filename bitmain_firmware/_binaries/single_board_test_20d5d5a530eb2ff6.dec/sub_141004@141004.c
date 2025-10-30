int __fastcall sub_141004(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0

  if ( *(_DWORD *)(a1 + 8) )
  {
    v4 = DSA_new();
    if ( v4 && (sub_D9F44(a2, 116, (int)v4), sub_D9D74(a2, *(int **)(a1 + 8))) )
      return sub_17B538(a2[6]);
    else
      return 0;
  }
  else
  {
    sub_D0048(10, 121, 107, (int)"crypto/dsa/dsa_pmeth.c", 229);
    return 0;
  }
}
