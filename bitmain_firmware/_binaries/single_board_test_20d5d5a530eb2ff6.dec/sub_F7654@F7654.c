int __fastcall sub_F7654(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r0
  int v9; // r0
  int v10; // r4
  int v11; // r6
  int v12; // r0
  int v14; // r0
  int v15; // r5
  int v16; // [sp+Ch] [bp-14h] BYREF
  int v17; // [sp+10h] [bp-10h] BYREF
  int v18; // [sp+14h] [bp-Ch] BYREF
  _DWORD *v19[2]; // [sp+18h] [bp-8h] BYREF

  if ( sub_EAC84(*(_DWORD *)a4) != (char *)912 )
  {
    sub_D0048(4, 148, 155, (int)"crypto/rsa/rsa_ameth.c", 788);
    return -1;
  }
  v8 = *(_DWORD *)a4;
  v16 = 0;
  v18 = 0;
  v19[0] = 0;
  if ( sub_EAC84(v8) != (char *)912 )
  {
    sub_D0048(4, 155, 155, (int)"crypto/rsa/rsa_ameth.c", 676);
    return -1;
  }
  v9 = sub_AD8B0((int)&RSA_PSS_PARAMS_it, *(_DWORD **)(a4 + 4));
  v10 = v9;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 4);
    if ( v11 )
    {
      if ( sub_EAC84(*(_DWORD *)v11) == (char *)911 )
      {
        v12 = sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v11 + 4));
        *(_DWORD *)(v10 + 16) = v12;
        if ( v12 )
          goto LABEL_7;
      }
      else
      {
        *(_DWORD *)(v10 + 16) = 0;
      }
      v14 = v10;
      v10 = 0;
      sub_F78A4(v14);
    }
  }
LABEL_7:
  if ( sub_F6D84(v10, (int *)v19, &v18, &v17) )
  {
    if ( a6 )
    {
      if ( sub_D954C(a1, &v16, v19[0], 0, a6) )
      {
LABEL_10:
        if ( sub_F89C8(v16, -1, 4097, 6, 0) > 0
          && sub_F89C8(v16, 24, 4098, v17, 0) > 0
          && sub_F89C8(v16, 1016, 4101, 0, v18) > 0 )
        {
          sub_F78A4(v10);
          return 2;
        }
      }
    }
    else if ( sub_DB77C(v16, -1, 248) > 0 )
    {
      v15 = sub_D8C70((int)v19[0]);
      if ( v15 == sub_D8C70((int)v19[1]) )
        goto LABEL_10;
      sub_D0048(4, 155, 158, (int)"crypto/rsa/rsa_ameth.c", 696);
    }
  }
  else
  {
    sub_D0048(4, 155, 149, (int)"crypto/rsa/rsa_ameth.c", 683);
  }
  sub_F78A4(v10);
  return -1;
}
