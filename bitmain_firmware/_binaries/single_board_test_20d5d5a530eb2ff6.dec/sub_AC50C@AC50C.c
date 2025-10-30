int __fastcall sub_AC50C(int a1, int a2)
{
  int v2; // r7
  int v4; // r8
  bool v5; // zf
  int v6; // r0
  int v7; // r0
  int v8; // r5
  unsigned __int8 *v9; // r10
  int i; // r0
  int v11; // r4
  int v12; // r0
  void *v13; // r1
  _BYTE *v14; // r3
  size_t v15; // r2
  int v16; // r0
  char *v17; // r4
  size_t v18; // r11
  int v19; // r4
  int v20; // r0
  int v22; // r2
  int v23; // r2
  void *src; // [sp+34h] [bp-10h] BYREF
  size_t n; // [sp+38h] [bp-Ch] BYREF
  char *s; // [sp+3Ch] [bp-8h] BYREF
  int v28; // [sp+40h] [bp-4h] BYREF
  char v29[16]; // [sp+44h] [bp+0h] BYREF
  char v30[24]; // [sp+54h] [bp+10h] BYREF

  v2 = (int)v29;
  v4 = 0;
  v5 = a2 == 0;
  if ( a2 )
    v5 = a1 == 0;
  src = 0;
  n = 0;
  strcpy(v29, "SERVERINFO FOR ");
  if ( v5 )
    v2 = 1;
  s = 0;
  if ( !v5 )
    v2 = 0;
  v28 = 0;
  strcpy(v30, "SERVERINFOV2 FOR ");
  if ( v5 )
  {
    v2 = 0;
    v9 = 0;
    sub_D0048(20, 337, 67, "ssl/ssl_rsa.c", 957);
  }
  else
  {
    v6 = sub_B7820(*(_DWORD *)"SERVERINFOV2 FOR ");
    v7 = sub_B655C(v6);
    v4 = v7;
    if ( !v7 )
    {
      v2 = 0;
      sub_D0048(20, 337, 7, "ssl/ssl_rsa.c", 963);
      v9 = 0;
      goto LABEL_26;
    }
    if ( sub_B6ECC(v7, 108, 3, a2) <= 0 )
    {
      v9 = (unsigned __int8 *)v2;
      sub_D0048(20, 337, 2, "ssl/ssl_rsa.c", 967);
      goto LABEL_26;
    }
    v8 = v2;
    v9 = (unsigned __int8 *)v2;
    for ( i = sub_EE7A4(v4, &s, &v28, &src, &n); i; i = sub_EE7A4(v4, &s, &v28, &src, &n) )
    {
      v17 = s;
      v18 = strlen(s);
      if ( v18 <= 0xE )
      {
        v23 = 989;
LABEL_32:
        sub_D0048(20, 337, 392, "ssl/ssl_rsa.c", v23);
        v2 = 0;
        goto LABEL_26;
      }
      if ( !strncmp(s, v29, 0xFu) )
      {
        if ( (int)n <= 3 || *((unsigned __int8 *)src + 3) + (*((unsigned __int8 *)src + 2) << 8) != n - 4 )
        {
          v22 = 1015;
          goto LABEL_28;
        }
        v19 = n + 4 + v8;
        v20 = CRYPTO_realloc(v9, v19, "ssl/ssl_rsa.c", 1029);
        if ( !v20 )
        {
LABEL_33:
          v2 = 0;
          sub_D0048(20, 337, 65, "ssl/ssl_rsa.c", 1031);
          goto LABEL_26;
        }
        v14 = (_BYTE *)(v20 + v8);
        v13 = src;
        v15 = n;
        *(_BYTE *)(v20 + v8) = 0;
        v9 = (unsigned __int8 *)v20;
        v14[1] = 0;
        v14[3] = -48;
        v8 = v19;
        v14[2] = 1;
        v16 = 4;
      }
      else
      {
        if ( v18 <= 0x10 )
        {
          v23 = 997;
          goto LABEL_32;
        }
        if ( strncmp(v17, v30, 0x11u) )
        {
          v2 = 0;
          sub_D0048(20, 337, 391, "ssl/ssl_rsa.c", 1002);
          goto LABEL_26;
        }
        if ( (int)n <= 7 || *((unsigned __int8 *)src + 7) + (*((unsigned __int8 *)src + 6) << 8) != n - 8 )
        {
          v22 = 1023;
LABEL_28:
          sub_D0048(20, 337, 390, "ssl/ssl_rsa.c", v22);
          v2 = 0;
          goto LABEL_26;
        }
        v11 = n + v8;
        v12 = CRYPTO_realloc(v9, n + v8, "ssl/ssl_rsa.c", 1029);
        if ( !v12 )
          goto LABEL_33;
        v13 = src;
        v14 = (_BYTE *)(v12 + v8);
        v15 = n;
        v9 = (unsigned __int8 *)v12;
        v8 = v11;
        v16 = 0;
      }
      memcpy(&v14[v16], v13, v15);
      ++v2;
      CRYPTO_free(s, "ssl/ssl_rsa.c", 1039);
      s = 0;
      CRYPTO_free(v28, "ssl/ssl_rsa.c", 1041);
      v28 = 0;
      CRYPTO_free(src, "ssl/ssl_rsa.c", 1043);
      src = 0;
    }
    if ( v2 )
      v2 = sub_AC2A0(a1, 2, v9, v8);
    else
      sub_D0048(20, 337, 389, "ssl/ssl_rsa.c", 982);
  }
LABEL_26:
  CRYPTO_free(s, "ssl/ssl_rsa.c", 1051);
  CRYPTO_free(v28, "ssl/ssl_rsa.c", 1052);
  CRYPTO_free(src, "ssl/ssl_rsa.c", 1053);
  CRYPTO_free(v9, "ssl/ssl_rsa.c", 1054);
  BIO_vfree_0(v4);
  return v2;
}
