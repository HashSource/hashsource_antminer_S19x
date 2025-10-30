int __fastcall sub_B573C(const char *a1, int a2)
{
  int v3; // r4
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // [sp+Ch] [bp-10h] BYREF
  int v12; // [sp+10h] [bp-Ch] BYREF
  struct addrinfo *v13; // [sp+14h] [bp-8h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( !sub_B3AE0(a1, &v11, &v12, 1) || sub_B55B4() != 1 )
    return -1;
  if ( sub_B3E14((const char *)v11, (const char *)v12, 1, 0, 1, &v13)
    || (v5 = sub_B3A54((int)v13),
        v6 = sub_B3A5C((int)v13),
        v7 = sub_B3A64((int)v13),
        v3 = sub_B59E4(v5, v6, v7, 0),
        v3 == -1) )
  {
    v3 = -1;
  }
  else
  {
    v8 = sub_B3A98((int)v13);
    v9 = a2;
    if ( a2 )
      v9 = 1;
    if ( !sub_B5C30(v3, v8, v9) )
    {
      v10 = v3;
      v3 = -1;
      sub_B5E8C(v10);
    }
  }
  sub_B3AA0(v13);
  CRYPTO_free(v11, "crypto/bio/b_sock.c", 229);
  CRYPTO_free(v12, "crypto/bio/b_sock.c", 230);
  return v3;
}
