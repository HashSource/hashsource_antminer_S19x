int __fastcall sub_F6774(int a1, int a2)
{
  int v3; // r4
  int v5; // r5
  _DWORD *v6; // r4
  int v7; // r0
  int v8; // r4
  int v9; // r8
  int v10; // r0
  _BYTE v11[4]; // [sp+8h] [bp-18h] BYREF
  int v12; // [sp+Ch] [bp-14h] BYREF
  _DWORD *v13; // [sp+10h] [bp-10h] BYREF
  int v14; // [sp+14h] [bp-Ch] BYREF
  int v15; // [sp+18h] [bp-8h] BYREF
  int v16; // [sp+1Ch] [bp-4h] BYREF

  v3 = sub_116488(0, v11, &v12, &v13, a2);
  if ( !v3 )
    return v3;
  v5 = d2i_RSAPublicKey(0, v11, v12);
  if ( !v5 )
  {
    v3 = 0;
    sub_D0048(4, 139, 4, (int)"crypto/rsa/rsa_ameth.c", 105);
    return v3;
  }
  v6 = v13;
  sub_B294C(&v14, &v16, &v15, v13);
  if ( sub_EAC84(v14) != (char *)912 || v16 == -1 )
  {
LABEL_5:
    v3 = sub_D9F44((_DWORD *)a1, **(_DWORD **)(a1 + 12), v5);
    if ( v3 )
      return 1;
    sub_F8154(v5);
    return v3;
  }
  if ( v16 == 16 )
  {
    v7 = sub_AD8B0((int)&RSA_PSS_PARAMS_it, (_DWORD *)v6[1]);
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      if ( !v9 )
      {
LABEL_16:
        *(_DWORD *)(v5 + 52) = v8;
        goto LABEL_5;
      }
      if ( sub_EAC84(*(_DWORD *)v9) == (char *)911 )
      {
        v10 = sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v9 + 4));
        *(_DWORD *)(v8 + 16) = v10;
        if ( v10 )
          goto LABEL_16;
      }
      else
      {
        *(_DWORD *)(v8 + 16) = 0;
      }
      sub_F78A4(v8);
    }
    *(_DWORD *)(v5 + 52) = 0;
    goto LABEL_11;
  }
  sub_D0048(4, 164, 149, (int)"crypto/rsa/rsa_ameth.c", 66);
LABEL_11:
  sub_F8154(v5);
  return 0;
}
