int __fastcall sub_1377C0(int a1, int **a2)
{
  int *v3; // r2
  int v4; // r3
  int *v5; // r4

  if ( a1 == 2 )
  {
    v3 = *a2;
    v4 = **a2;
    if ( v4 )
    {
      if ( v4 == 2 || v4 == 3 )
        sub_E0758(*(void **)(v3[1] + 16), *(_DWORD *)(v3[1] + 20), (size_t)"crypto/cms/cms_asn1.c");
    }
    else
    {
      v5 = (int *)v3[1];
      sub_DA240(v5[5]);
      X509_free(v5[4]);
      sub_DB4BC(v5[6]);
    }
  }
  return 1;
}
