int __fastcall sub_11619C(int a1)
{
  int v1; // r4
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = 0;
  if ( !a1 || !*(_DWORD *)(a1 + 4) )
    return 0;
  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    sub_115FC8(&v3, (int **)a1);
    if ( v3 )
    {
      sub_D0048(11, 119, 68, (int)"crypto/x509/x_pubkey.c", 162);
      sub_DA240(v3);
      return v1;
    }
    return 0;
  }
  return v1;
}
