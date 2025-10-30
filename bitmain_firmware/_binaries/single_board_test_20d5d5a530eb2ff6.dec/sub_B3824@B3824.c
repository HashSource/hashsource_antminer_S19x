int __fastcall sub_B3824(unsigned __int16 *a1, int a2, int *a3, int *a4)
{
  unsigned int flags; // r11
  const struct sockaddr *v8; // r0
  const struct sockaddr *v9; // r4
  socklen_t v10; // r0
  int v11; // r0
  int v12; // r4
  const char *v13; // r0
  int v14; // r2
  int v16; // r0
  int v17; // r4
  unsigned int v18; // r0
  int *v19; // r0
  _DWORD serv[8]; // [sp+14h] [bp-428h] BYREF
  char v21[1032]; // [sp+34h] [bp-408h] BYREF

  memset(v21, 0, 1025);
  if ( a2 )
    flags = 3;
  else
    flags = 0;
  memset(serv, 0, sizeof(serv));
  nullsub_23();
  v9 = v8;
  v10 = sub_B3808(a1);
  v11 = getnameinfo(v9, v10, v21, 0x401u, (char *)serv, 0x20u, flags);
  if ( v11 )
  {
    v12 = v11;
    if ( v11 == -11 )
    {
      v19 = _errno_location();
      sub_D0048(2, 13, *v19, "crypto/bio/b_addr.c", 214);
      sub_D0048(32, 134, 2, "crypto/bio/b_addr.c", 215);
    }
    else
    {
      sub_D0048(32, 134, 2, "crypto/bio/b_addr.c", 219);
      v13 = gai_strerror(v12);
      sub_D1240(1, v13, v14);
    }
    return 0;
  }
  if ( LOBYTE(serv[0]) )
  {
    if ( !a3 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v18 = sub_B37D0(a1);
  sub_B5560(serv, 32, "%d", (unsigned __int16)__rev16(v18));
  if ( a3 )
LABEL_10:
    *a3 = sub_E9E3C(v21, "crypto/bio/b_addr.c", 237);
LABEL_11:
  if ( !a4 )
  {
    if ( !a3 || *a3 )
      return 1;
    CRYPTO_free(0, "crypto/bio/b_addr.c", 254);
    *a3 = 0;
LABEL_24:
    sub_D0048(32, 134, 65, "crypto/bio/b_addr.c", 261);
    return 0;
  }
  v16 = sub_E9E3C(serv, "crypto/bio/b_addr.c", 239);
  v17 = v16;
  *a4 = v16;
  if ( !a3 )
  {
    if ( v16 )
      return 1;
    goto LABEL_23;
  }
  if ( !*a3 )
  {
    CRYPTO_free(0, "crypto/bio/b_addr.c", 254);
    *a3 = 0;
    goto LABEL_26;
  }
  if ( !v16 )
  {
    CRYPTO_free(*a3, "crypto/bio/b_addr.c", 254);
    *a3 = v17;
LABEL_26:
    v17 = *a4;
LABEL_23:
    CRYPTO_free(v17, "crypto/bio/b_addr.c", 258);
    *a4 = 0;
    goto LABEL_24;
  }
  return 1;
}
