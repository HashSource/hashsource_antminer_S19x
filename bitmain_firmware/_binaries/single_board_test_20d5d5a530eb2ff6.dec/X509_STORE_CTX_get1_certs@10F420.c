int *__fastcall X509_STORE_CTX_get1_certs(int *a1, int a2)
{
  int v2; // r7
  int v5; // r9
  int *v6; // r8
  int v7; // r4
  int v8; // r5
  int v9; // r0
  int v10; // r8
  int v12; // r1
  int v13; // r2
  _DWORD *v14; // r9
  int v15; // r1
  int v16; // r2
  int v17; // [sp+4h] [bp-4h] BYREF

  v2 = *a1;
  if ( !*a1 )
    return 0;
  sub_10EF78(*a1);
  v5 = sub_10EE64(*(_DWORD *)(v2 + 4), 1, a2, &v17);
  if ( v5 >= 0 )
    goto LABEL_3;
  v14 = sub_10F27C();
  sub_10EF80(v2);
  if ( !v14 )
    return 0;
  v10 = sub_10F350(a1, 1, a2, v14);
  if ( !v10 )
  {
    X509_OBJECT_free(v14, v15, v16);
    return (int *)v10;
  }
  X509_OBJECT_free(v14, v15, v16);
  sub_10EF78(v2);
  v5 = sub_10EE64(*(_DWORD *)(v2 + 4), 1, a2, &v17);
  if ( v5 < 0 )
  {
    v10 = 0;
    sub_10EF80(v2);
    return (int *)v10;
  }
LABEL_3:
  v6 = (int *)sub_10BFCC();
  if ( v17 > 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(sub_10C01C(*(_DWORD **)(v2 + 4), v5 + v7++) + 4);
      if ( !sub_10FD18(v8) )
      {
        sub_10EF80(v2);
        goto LABEL_10;
      }
      if ( !sub_10BD3C(v6, v8) )
        break;
      if ( v17 <= v7 )
        goto LABEL_12;
    }
    sub_10EF80(v2);
    X509_free(v8, v12, v13);
LABEL_10:
    v9 = (int)v6;
    v10 = 0;
    sub_10BFDC(v9, (void (__fastcall *)(int))X509_free);
    return (int *)v10;
  }
LABEL_12:
  sub_10EF80(v2);
  return v6;
}
