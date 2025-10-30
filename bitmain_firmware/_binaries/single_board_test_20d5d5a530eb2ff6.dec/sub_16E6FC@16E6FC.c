int __fastcall sub_16E6FC(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  _DWORD *v8; // r5
  void *v9; // r0
  int v10; // r3
  _BYTE *v11; // r3
  int v12; // r0
  int v13; // r0

  v6 = sub_11655C();
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_DWORD **)(v6 + 12);
    *v8 = 1;
    v9 = CRYPTO_malloc((void *)1);
    v10 = *(_DWORD *)(v7 + 12);
    v8[2] = v9;
    v11 = *(_BYTE **)(v10 + 8);
    if ( v11 )
    {
      *v11 = 0;
      v12 = sub_10E660(a1);
      if ( sub_16EEB0(v7, v12) )
      {
        v13 = sub_10E89C(a1);
        if ( v13 )
        {
          if ( sub_16EEC0(v7, v13) && (!a2 || sub_1142BC(v7, a2, a3)) )
            return v7;
        }
      }
    }
  }
  else
  {
    sub_D0048(11, 126, 65, (int)"crypto/x509/x509_req.c", 31);
  }
  sub_116570(v7);
  return 0;
}
