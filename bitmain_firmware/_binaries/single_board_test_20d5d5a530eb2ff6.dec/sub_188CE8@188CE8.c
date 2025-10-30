int __fastcall sub_188CE8(int a1)
{
  int v2; // r4
  int v3; // r0

  v2 = sub_EF414();
  if ( v2 )
  {
    *(_DWORD *)(v2 + 16) = sub_EAA20(0x15u);
    v3 = sub_B2068();
    *(_DWORD *)(v2 + 20) = v3;
    if ( v3 )
    {
      if ( sub_AE2BC(a1, (int)&PKCS12_SAFEBAGS_it, (int **)(v2 + 20)) )
        return v2;
      sub_D0048(35, 114, 100, (int)"crypto/pkcs12/p12_add.c", 61);
    }
    else
    {
      sub_D0048(35, 114, 65, (int)"crypto/pkcs12/p12_add.c", 56);
    }
    PKCS7_free(v2);
    return 0;
  }
  else
  {
    sub_D0048(35, 114, 65, (int)"crypto/pkcs12/p12_add.c", 51);
    return 0;
  }
}
