int __fastcall sub_12A914(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int *v10; // r4
  int *v11; // r0
  int *v12; // r9
  int v13; // r3
  int *v14; // lr
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r4
  int result; // r0

  if ( !dword_6E1C60 )
  {
    dword_6E1C60 = (int)sub_10BFD4(sub_12A774);
    if ( !dword_6E1C60 )
      goto LABEL_20;
  }
  v9 = sub_12A850(a1);
  v10 = (int *)v9;
  if ( !v9 || (*(_DWORD *)(v9 + 16) & 1) == 0 )
  {
    v11 = (int *)sub_E0740((void *)0x14);
    v12 = v11;
    if ( v11 )
    {
      if ( sub_10BD3C((int *)dword_6E1C60, (int)v11) )
      {
        if ( v10 )
        {
          v13 = v10[4];
          v14 = v12;
          v15 = *v10;
          v16 = v10[1];
          v17 = v10[2];
          v18 = v10[3];
          *v12 = v15;
          v12[1] = v16;
          v12[4] = v13 | 1;
          v12[2] = v17;
          v12[3] = v18;
        }
        else
        {
          *v12 = a1;
          v14 = v12;
          v12[1] = -1;
          v12[2] = -1;
          v12[4] = 1;
        }
        goto LABEL_8;
      }
      CRYPTO_free(v12);
    }
    else
    {
      sub_D0048(13, 138, 65, (int)"crypto/asn1/a_strnid.c", 160);
    }
LABEL_20:
    sub_D0048(13, 129, 65, (int)"crypto/asn1/a_strnid.c", 190);
    return 0;
  }
  v14 = (int *)v9;
LABEL_8:
  if ( a2 >= 0 )
    v14[1] = a2;
  if ( a3 >= 0 )
    v14[2] = a3;
  if ( a4 )
    v14[3] = a4;
  result = 1;
  if ( a5 )
  {
    result = 1;
    v14[4] = a5 | 1;
  }
  return result;
}
