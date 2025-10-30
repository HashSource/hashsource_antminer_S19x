int __fastcall sub_115478(int a1, int a2)
{
  int *v3; // r0
  int v5; // [sp+Ch] [bp-4h]

  v3 = *(int **)(a1 + 24);
  if ( (v3 || (v5 = a2, v3 = (int *)sub_10BFD4(sub_114E4C), a2 = v5, (*(_DWORD *)(a1 + 24) = v3) != 0))
    && sub_10BD3C(v3, a2) )
  {
    *(_DWORD *)(a1 + 40) = 1;
    return 1;
  }
  else
  {
    sub_D0048(13, 169, 65, (int)"crypto/x509/x_crl.c", 346);
    return 0;
  }
}
