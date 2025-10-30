int __fastcall sub_16ED2C(int a1, int a2, int a3, char *a4, int a5, int a6)
{
  unsigned int v7; // r8
  int v10; // r0
  char *v11; // r0
  _DWORD *v12; // r7
  char *v13; // r4
  int v14; // r1
  char *v16; // r0
  int v17; // r2
  char *v18; // r0
  int v19; // r1
  int *v20; // r0
  int v21; // r2

  v7 = a2 & 0xFFFFFFFC | 2;
  v10 = sub_16EC6C(a1);
  if ( v10 != -1 )
  {
    v11 = sub_16EC3C(v10);
    v12 = v11;
    if ( (*((_DWORD *)v11 + 1) & 2) != 0 )
      CRYPTO_free(*((void **)v11 + 3));
    v13 = sub_E9E3C(a4);
    v12[3] = v13;
    if ( v13 )
    {
      v14 = v12[1];
      *v12 = a1;
      v12[4] = a5;
      v12[2] = a3;
      v12[1] = v14 & 1 | v7;
      v12[5] = a6;
      return 1;
    }
    v17 = 151;
    goto LABEL_14;
  }
  v16 = (char *)CRYPTO_malloc((void *)0x18);
  v17 = 139;
  v13 = v16;
  if ( !v16 )
  {
LABEL_14:
    sub_D0048(11, 133, 65, (int)"crypto/x509/x509_trs.c", v17);
    return (int)v13;
  }
  *((_DWORD *)v16 + 1) = 1;
  v18 = sub_E9E3C(a4);
  *((_DWORD *)v13 + 3) = v18;
  if ( v18 )
  {
    v19 = *((_DWORD *)v13 + 1);
    *(_DWORD *)v13 = a1;
    v20 = (int *)dword_6E2F8C;
    *((_DWORD *)v13 + 4) = a5;
    *((_DWORD *)v13 + 2) = a3;
    *((_DWORD *)v13 + 1) = v19 & 1 | v7;
    *((_DWORD *)v13 + 5) = a6;
    if ( v20 || (v20 = (int *)sub_10BFD4(sub_16EA94), v21 = 168, (dword_6E2F8C = (int)v20) != 0) )
    {
      if ( sub_10BD3C(v20, (int)v13) )
        return 1;
      v21 = 172;
    }
  }
  else
  {
    v21 = 151;
  }
  sub_D0048(11, 133, 65, (int)"crypto/x509/x509_trs.c", v21);
  CRYPTO_free(*((void **)v13 + 3));
  CRYPTO_free(v13);
  return 0;
}
