int __fastcall sub_112DA0(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int (__fastcall *v10)(int); // r3
  int v11; // r3
  int v12; // r3
  int v13; // r1
  int *(__fastcall *v14)(int *, int); // r3
  void **(__fastcall *v15)(int *, int); // r3
  int v16; // r0
  int v17; // r6
  int v18; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r5

  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  a1[3] = 0;
  a1[19] = 0;
  a1[5] = 0;
  a1[18] = 0;
  a1[20] = 0;
  a1[24] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[25] = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[29] = 0;
  a1[21] = 0;
  a1[30] = 0;
  a1[32] = 0;
  a1[33] = 0;
  a1[31] = 0;
  if ( a2 )
  {
    v6 = a2[7];
    a1[17] = a2[15];
    if ( v6 )
      a1[9] = v6;
    else
      a1[9] = sub_1106F0;
    v7 = a2[6];
    if ( v7 )
    {
      a1[8] = v7;
      v8 = a2[5];
      if ( v8 )
        goto LABEL_6;
    }
    else
    {
      a1[8] = X509_STORE_CTX_get1_issuer;
      v8 = a2[5];
      if ( v8 )
      {
LABEL_6:
        a1[7] = v8;
        v9 = a2[4];
        if ( v9 )
          goto LABEL_7;
        goto LABEL_30;
      }
    }
    a1[7] = nullsub_6;
    v9 = a2[4];
    if ( v9 )
    {
LABEL_7:
      a1[6] = v9;
      v10 = (int (__fastcall *)(int))a2[8];
      if ( v10 )
        goto LABEL_8;
LABEL_31:
      v10 = sub_111734;
LABEL_8:
      a1[10] = v10;
      v11 = a2[10];
      a1[11] = a2[9];
      if ( v11 )
      {
        a1[12] = v11;
        v12 = a2[11];
        if ( v12 )
        {
LABEL_10:
          v13 = a2[12];
          a1[13] = v12;
          if ( v13 )
            goto LABEL_11;
          a1[14] = sub_110978;
          goto LABEL_33;
        }
      }
      else
      {
        a1[12] = sub_1130B8;
        v12 = a2[11];
        if ( v12 )
          goto LABEL_10;
      }
      v13 = a2[12];
      a1[13] = sub_110914;
      if ( v13 )
      {
LABEL_11:
        v14 = (int *(__fastcall *)(int *, int))a2[13];
        a1[14] = v13;
        if ( v14 )
          goto LABEL_12;
LABEL_34:
        v14 = X509_STORE_CTX_get1_certs;
LABEL_12:
        a1[15] = v14;
        v15 = (void **(__fastcall *)(int *, int))a2[14];
        if ( v15 )
          goto LABEL_13;
        goto LABEL_24;
      }
      a1[14] = sub_110978;
LABEL_33:
      v14 = (int *(__fastcall *)(int *, int))a2[13];
      if ( v14 )
        goto LABEL_12;
      goto LABEL_34;
    }
LABEL_30:
    a1[6] = sub_111000;
    v10 = (int (__fastcall *)(int))a2[8];
    if ( v10 )
      goto LABEL_8;
    goto LABEL_31;
  }
  a1[17] = 0;
  a1[9] = sub_1106F0;
  a1[8] = X509_STORE_CTX_get1_issuer;
  a1[7] = nullsub_6;
  a1[6] = sub_111000;
  a1[11] = 0;
  a1[10] = sub_111734;
  a1[12] = sub_1130B8;
  a1[13] = sub_110914;
  a1[14] = sub_110978;
  a1[15] = X509_STORE_CTX_get1_certs;
LABEL_24:
  v15 = X509_STORE_CTX_get1_crls;
LABEL_13:
  a1[16] = v15;
  v16 = sub_113394();
  v17 = v16;
  a1[4] = v16;
  if ( !v16 )
  {
    v18 = 2360;
    goto LABEL_17;
  }
  if ( a2 )
  {
    if ( !sub_1137F0(v16) )
    {
LABEL_16:
      v18 = 2377;
LABEL_17:
      sub_D0048(11, 143, 65, (int)"crypto/x509/x509_vfy.c", v18);
      sub_112D28(a1);
      return 0;
    }
    v17 = a1[4];
  }
  else
  {
    *(_DWORD *)(v16 + 8) |= 0x11u;
  }
  sub_113AA0("default");
  if ( !sub_1137F0(v17) )
    goto LABEL_16;
  v20 = a1[4];
  if ( !*(_DWORD *)(v20 + 20) )
  {
    v21 = sub_120294(*(_DWORD *)(v20 + 16));
    if ( sub_120238(v21) )
    {
      v22 = a1[4];
      *(_DWORD *)(v22 + 20) = sub_1204CC();
    }
  }
  if ( !sub_DBE44(5u, (int)a1, a1 + 31) )
  {
    v18 = 2396;
    goto LABEL_17;
  }
  return 1;
}
