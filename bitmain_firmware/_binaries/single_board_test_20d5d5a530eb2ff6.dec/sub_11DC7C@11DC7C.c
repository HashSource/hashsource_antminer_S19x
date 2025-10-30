int *__fastcall sub_11DC7C(int a1, int a2, _DWORD *a3)
{
  int v3; // r11
  int *v4; // r10
  unsigned int v5; // r6
  const char *v6; // r4
  char *v7; // r0
  char **v8; // r2
  int v9; // r3
  int v10; // r4
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r4
  char **v13; // r3
  int v14; // r7
  int v15; // r0
  char ***v16; // r5
  int v17; // r2
  int v18; // r0
  char v23[4]; // [sp+24h] [bp-10h] BYREF
  char *v24; // [sp+28h] [bp-Ch]
  int v25; // [sp+2Ch] [bp-8h]

  v3 = sub_10C010((int)a3);
  v4 = (int *)sub_10BF44(0, v3);
  if ( v4 )
  {
    if ( v3 > 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        v14 = sub_10C01C(a3, v5++);
        v15 = sub_11DC68();
        v16 = (char ***)v15;
        if ( !v15 )
        {
          v17 = 121;
LABEL_11:
          sub_D0048(34, 139, 65, (int)"crypto/x509v3/v3_info.c", v17);
          goto LABEL_12;
        }
        sub_10BD3C(v4, v15);
        v6 = *(const char **)(v14 + 4);
        v7 = strchr(v6, 59);
        if ( !v7 )
        {
          sub_D0048(34, 139, 143, (int)"crypto/x509v3/v3_info.c", 128);
          goto LABEL_12;
        }
        v8 = v16[1];
        v9 = *(_DWORD *)(v14 + 8);
        v10 = v7 - v6;
        v24 = v7 + 1;
        v25 = v9;
        if ( !sub_17018C(v8, a1, a2, v23, 0) )
          goto LABEL_12;
        v11 = sub_E9EF4(*(unsigned __int8 **)(v14 + 4), v10);
        v12 = v11;
        if ( !v11 )
        {
          v17 = 138;
          goto LABEL_11;
        }
        v13 = sub_EB03C((char *)v11, 0);
        *v16 = v13;
        if ( !v13 )
          break;
        CRYPTO_free(v12);
        if ( v3 == v5 )
          return v4;
      }
      sub_D0048(34, 139, 119, (int)"crypto/x509v3/v3_info.c", 144);
      sub_D1240(2, "value=", v12);
      CRYPTO_free(v12);
LABEL_12:
      v18 = (int)v4;
      v4 = 0;
      sub_10BFDC(v18, (void (__fastcall *)(int))ACCESS_DESCRIPTION_free);
    }
  }
  else
  {
    sub_D0048(34, 139, 65, (int)"crypto/x509v3/v3_info.c", 114);
  }
  return v4;
}
