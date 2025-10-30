int __fastcall sub_F6AA8(int a1, int a2)
{
  int result; // r0
  int v4; // r4
  _DWORD *v5; // r7
  int v6; // r0
  int v7; // r7
  int v8; // r8
  int v9; // r0
  int v10; // [sp+8h] [bp-18h] BYREF
  int v11; // [sp+Ch] [bp-14h] BYREF
  _DWORD *v12; // [sp+10h] [bp-10h] BYREF
  int v13; // [sp+14h] [bp-Ch] BYREF
  int v14; // [sp+18h] [bp-8h] BYREF
  int v15; // [sp+1Ch] [bp-4h] BYREF

  result = sub_AE64C(0, &v10, &v11, &v12, a2);
  if ( result )
  {
    v4 = d2i_RSAPrivateKey(0, &v10);
    if ( v4 )
    {
      v5 = v12;
      sub_B294C(&v13, &v15, &v14, v12);
      if ( sub_EAC84(v13) != (char *)912 || v15 == -1 )
        goto LABEL_4;
      if ( v15 != 16 )
      {
        sub_D0048(4, 164, 149, (int)"crypto/rsa/rsa_ameth.c", 66);
LABEL_8:
        sub_F8154(v4);
        return 0;
      }
      v6 = sub_AD8B0((int)&RSA_PSS_PARAMS_it, (_DWORD *)v5[1]);
      v7 = v6;
      if ( v6 )
      {
        v8 = *(_DWORD *)(v6 + 4);
        if ( !v8 )
        {
LABEL_13:
          *(_DWORD *)(v4 + 52) = v7;
LABEL_4:
          sub_D9F44((_DWORD *)a1, **(_DWORD **)(a1 + 12), v4);
          return 1;
        }
        if ( sub_EAC84(*(_DWORD *)v8) == (char *)911 )
        {
          v9 = sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v8 + 4));
          *(_DWORD *)(v7 + 16) = v9;
          if ( v9 )
            goto LABEL_13;
        }
        else
        {
          *(_DWORD *)(v7 + 16) = 0;
        }
        sub_F78A4(v7);
      }
      *(_DWORD *)(v4 + 52) = 0;
      goto LABEL_8;
    }
    sub_D0048(4, 150, 4, (int)"crypto/rsa/rsa_ameth.c", 192);
    return 0;
  }
  return result;
}
