void **__fastcall X509_STORE_CTX_get1_crls(int *a1, int a2)
{
  void **v4; // r7
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r8
  bool v9; // zf
  int v10; // r4
  _DWORD *v11; // r5
  int v12; // r9
  int v13; // r5
  int v15; // [sp+4h] [bp-4h] BYREF

  v4 = sub_10BFCC();
  v5 = sub_10F27C();
  v8 = *a1;
  v9 = v5 == 0;
  if ( v5 )
    v9 = v4 == 0;
  v10 = v9;
  v11 = v5;
  if ( !v8 )
    v10 |= 1u;
  if ( v10 || !sub_10F350(a1, 2, a2, v5) )
  {
    X509_OBJECT_free(v11, v6, v7);
    sub_10BDB4(v4);
    return 0;
  }
  X509_OBJECT_free(v11, v6, v7);
  sub_10EF78(v8);
  v12 = sub_10EE64(*(_DWORD *)(v8 + 4), 2, a2, &v15);
  if ( v12 < 0 )
  {
    sub_10EF80(v8);
    sub_10BDB4(v4);
    return 0;
  }
  if ( v15 > 0 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(sub_10C01C(*(_DWORD **)(v8 + 4), v10 + v12) + 4);
      ++v10;
      if ( !sub_113B90(v13) )
      {
        sub_10EF80(v8);
        goto LABEL_17;
      }
      if ( !sub_10BD3C((int *)v4, v13) )
        break;
      if ( v15 <= v10 )
        goto LABEL_20;
    }
    sub_10EF80(v8);
    X509_CRL_free(v13);
LABEL_17:
    sub_10BFDC((int)v4, (void (__fastcall *)(int))X509_CRL_free);
    return 0;
  }
LABEL_20:
  sub_10EF80(v8);
  return v4;
}
