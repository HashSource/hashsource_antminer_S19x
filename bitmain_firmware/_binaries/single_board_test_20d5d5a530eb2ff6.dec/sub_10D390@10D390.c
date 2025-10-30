int __fastcall sub_10D390(int a1, int a2, int a3)
{
  void *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  __int16 v9; // r2
  int v10; // r4
  int i; // r5
  int v12; // r1
  int v13; // r2
  int v15; // r0
  _BOOL4 v16; // r0
  int v17; // [sp+0h] [bp-8h]

  v6 = sub_B7820();
  v7 = sub_B655C((int)v6);
  v8 = v7;
  if ( !v7 || sub_B6ECC((int)v7, 108, 3, a2) <= 0 )
  {
    v17 = 84;
    v9 = 2;
    goto LABEL_6;
  }
  if ( a3 == 1 )
  {
    for ( i = 0; ; ++i )
    {
      v15 = sub_EF25C(v8, 0, 0, &byte_1A4198);
      v10 = v15;
      if ( !v15 )
        break;
      if ( !sub_10F74C(*(_DWORD *)(a1 + 16), v15) )
      {
        i = 0;
        goto LABEL_7;
      }
      X509_free(v10, v12, v13);
    }
    v16 = (sub_D065C() & 0xFFF) == 108;
    if ( !i )
      v16 = 0;
    if ( v16 )
    {
      sub_D00F0();
    }
    else
    {
      i = 0;
      sub_D0048(11, 111, 9, (int)"crypto/x509/by_file.c", 97);
    }
  }
  else
  {
    if ( a3 != 2 )
    {
      v17 = 120;
      v9 = 100;
LABEL_6:
      v10 = 0;
      i = 0;
      sub_D0048(11, 111, v9, (int)"crypto/x509/by_file.c", v17);
      goto LABEL_7;
    }
    v10 = sub_114408(v8, 0);
    if ( v10 )
    {
      i = sub_10F74C(*(_DWORD *)(a1 + 16), v10);
    }
    else
    {
      i = 0;
      sub_D0048(11, 111, 13, (int)"crypto/x509/by_file.c", 112);
    }
  }
LABEL_7:
  X509_free(v10, v12, v13);
  BIO_vfree_0((int)v8);
  return i;
}
