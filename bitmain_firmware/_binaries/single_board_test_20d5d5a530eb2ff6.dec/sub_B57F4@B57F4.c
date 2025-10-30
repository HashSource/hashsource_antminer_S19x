int __fastcall sub_B57F4(int a1, const char **a2)
{
  int v3; // r7
  const char *v4; // r6
  int v5; // r0
  bool v6; // zf
  const char *v7; // r5
  int v8; // r3
  int v9; // r0
  size_t v11; // r8
  size_t v12; // r0
  char *v13; // r0
  int *v14; // r0
  unsigned __int16 v15[56]; // [sp+8h] [bp-70h] BYREF

  v3 = sub_B5E04(a1, v15, 0);
  if ( v3 != -1 )
  {
    if ( !a2 )
      return v3;
    v4 = (const char *)sub_B39EC(v15, 1);
    v5 = sub_B3A1C(v15, 1);
    v6 = v4 == 0;
    if ( v4 )
      v6 = v5 == 0;
    v7 = (const char *)v5;
    v8 = !v6;
    if ( v6 )
    {
      *a2 = (const char *)v8;
    }
    else
    {
      v11 = strlen(v4);
      v12 = strlen(v7);
      v13 = (char *)sub_E0740(v12 + v11 + 2, "crypto/bio/b_sock.c", 255);
      *a2 = v13;
      if ( v13 )
      {
        strcpy(v13, v4);
        *(_WORD *)&(*a2)[strlen(*a2)] = 58;
        strcat((char *)*a2, v7);
        goto LABEL_12;
      }
    }
    sub_D0048(32, 101, 65, "crypto/bio/b_sock.c", 260);
    v9 = v3;
    v3 = -1;
    sub_B5E8C(v9);
LABEL_12:
    CRYPTO_free(v4, "crypto/bio/b_sock.c", 268);
    CRYPTO_free(v7, "crypto/bio/b_sock.c", 269);
    return v3;
  }
  if ( sub_B7FBC() )
    return -2;
  v14 = _errno_location();
  sub_D0048(2, 8, *v14, "crypto/bio/b_sock.c", 246);
  sub_D0048(32, 101, 100, "crypto/bio/b_sock.c", 247);
  return -1;
}
