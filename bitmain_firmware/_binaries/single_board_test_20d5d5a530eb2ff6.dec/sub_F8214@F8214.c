_DWORD *__fastcall sub_F8214(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  const char *v10; // r3
  int v11; // r0
  int v12; // r0
  _DWORD *result; // r0
  int (__fastcall *v14)(_DWORD *); // r3

  v2 = sub_E0740((void *)0x60);
  v3 = v2;
  if ( !v2 )
  {
    sub_D0048(4, 106, 65, (int)"crypto/rsa/rsa_lib.c", 55);
    return 0;
  }
  __dmb(0xBu);
  v2[15] = 1;
  __dmb(0xBu);
  v4 = sub_10C510(v2);
  v3[23] = v4;
  if ( !v4 )
  {
    sub_D0048(4, 106, 65, (int)"crypto/rsa/rsa_lib.c", 62);
    CRYPTO_free(v3);
    return 0;
  }
  v5 = sub_F9CE0();
  v6 = *(_DWORD *)(v5 + 36);
  v3[2] = v5;
  v3[16] = v6 & 0xFFFFFBFF;
  if ( a1 )
  {
    v7 = sub_CDD6C(a1);
    v9 = 72;
    v10 = "crypto/rsa/rsa_lib.c";
    if ( !v7 )
      goto LABEL_17;
    v11 = (int)a1;
    v3[3] = a1;
LABEL_6:
    v12 = sub_15B9F0(v11, v8, v9, v10);
    v3[2] = v12;
    if ( v12 )
      goto LABEL_7;
    v9 = 82;
LABEL_17:
    sub_D0048(4, 106, 38, (int)"crypto/rsa/rsa_lib.c", v9);
    goto LABEL_13;
  }
  v11 = sub_15B9E0();
  v3[3] = v11;
  if ( v11 )
    goto LABEL_6;
  v12 = v3[2];
LABEL_7:
  v3[16] = *(_DWORD *)(v12 + 36) & 0xFFFFFBFF;
  if ( !sub_DBE44(9u, (int)v3, v3 + 14) )
  {
LABEL_13:
    sub_F8154((int)v3);
    return 0;
  }
  result = v3;
  v14 = *(int (__fastcall **)(_DWORD *))(v3[2] + 28);
  if ( !v14 )
    return result;
  if ( !v14(v3) )
  {
    sub_D0048(4, 106, 70, (int)"crypto/rsa/rsa_lib.c", 94);
    goto LABEL_13;
  }
  return v3;
}
