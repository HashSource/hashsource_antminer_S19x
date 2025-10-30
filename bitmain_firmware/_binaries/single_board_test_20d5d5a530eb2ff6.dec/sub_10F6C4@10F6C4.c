int __fastcall sub_10F6C4(int a1, int a2)
{
  int *v4; // r0
  int *v5; // r4
  int v6; // r1
  int v7; // r2
  int v8; // r5
  int v9; // r1
  int v10; // r2
  int v12; // r7

  if ( !a2 )
    goto LABEL_10;
  v4 = sub_10F27C();
  v5 = v4;
  if ( !v4 )
    goto LABEL_10;
  *v4 = 2;
  v4[1] = a2;
  if ( !sub_10F23C(v4) )
  {
    *v5 = 0;
    X509_OBJECT_free(v5, v6, v7);
    goto LABEL_10;
  }
  sub_10EF78(a1);
  if ( sub_10F634(*(_DWORD **)(a1 + 4), v5) )
  {
    v8 = 1;
    sub_10EF80(a1);
LABEL_6:
    X509_OBJECT_free(v5, v9, v10);
    goto LABEL_7;
  }
  v12 = sub_10BD3C(*(int **)(a1 + 4), (int)v5);
  v8 = v12;
  if ( v12 )
    v8 = 1;
  sub_10EF80(a1);
  if ( !v12 )
    goto LABEL_6;
LABEL_7:
  if ( v8 )
    return 1;
LABEL_10:
  sub_D0048(11, 125, 65, (int)"crypto/x509/x509_lu.c", 380);
  return 0;
}
