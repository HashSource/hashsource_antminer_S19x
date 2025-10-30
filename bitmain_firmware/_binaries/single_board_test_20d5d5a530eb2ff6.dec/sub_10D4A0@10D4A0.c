int __fastcall sub_10D4A0(int a1, int a2, int a3)
{
  void *v6; // r0
  _DWORD *v7; // r0
  int v8; // r6
  __int16 v9; // r2
  int v10; // r4
  int i; // r5
  int v13; // r0
  _BOOL4 v14; // r0
  int v15; // [sp+0h] [bp-8h]

  v6 = sub_B7820();
  v7 = sub_B655C((int)v6);
  v8 = (int)v7;
  if ( !v7 || sub_B6ECC((int)v7, 108, 3, a2) <= 0 )
  {
    v15 = 141;
    v9 = 2;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    for ( i = 0; ; ++i )
    {
      v13 = sub_EC8BC(v8, 0, 0, &byte_1A4198);
      v10 = v13;
      if ( !v13 )
        break;
      if ( !sub_10F6C4(*(_DWORD *)(a1 + 16), v13) )
      {
        i = 0;
        goto LABEL_7;
      }
      X509_CRL_free(v10);
    }
    v14 = (sub_D065C() & 0xFFF) == 108;
    if ( !i )
      v14 = 0;
    if ( v14 )
    {
      sub_D00F0();
    }
    else
    {
      i = 0;
      sub_D0048(11, 112, 9, (int)"crypto/x509/by_file.c", 154);
    }
  }
  else
  {
    if ( a3 != 2 )
    {
      v15 = 177;
      v9 = 100;
LABEL_6:
      v10 = 0;
      i = 0;
      sub_D0048(11, 112, v9, (int)"crypto/x509/by_file.c", v15);
      goto LABEL_7;
    }
    v10 = sub_114488(v8, 0);
    if ( v10 )
    {
      i = sub_10F6C4(*(_DWORD *)(a1 + 16), v10);
    }
    else
    {
      i = 0;
      sub_D0048(11, 112, 13, (int)"crypto/x509/by_file.c", 169);
    }
  }
LABEL_7:
  X509_CRL_free(v10);
  BIO_vfree_0(v8);
  return i;
}
