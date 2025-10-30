int __fastcall sub_A6A08(_DWORD *a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r5
  int v8; // r0
  size_t v9; // r5
  int v10; // r0
  const void *v11; // r8
  int v12; // r4
  _DWORD *v14; // r0

  if ( sub_10AC8C(a1[396], a1[392]) && (v2 = sub_10A718(a1[396], a1[395], a1[392]), (v3 = v2) != 0) )
  {
    v4 = sub_10A7D8(a1[396], a1[399], v2, a1[398], a1[392]);
    v5 = v4;
    if ( v4 )
    {
      v6 = sub_B85BC(v4);
      v7 = v6 + 14;
      v8 = v6 + 7;
      if ( v8 >= 0 )
        v7 = v8;
      v9 = v7 >> 3;
      v10 = CRYPTO_malloc(v9, "ssl/tls_srp.c", 264);
      v11 = (const void *)v10;
      if ( v10 )
      {
        sub_B8648(v5, v10);
        v12 = sub_82DD8(a1, v11, v9, 1);
      }
      else
      {
        v14 = a1;
        v12 = -1;
        sub_95494(v14, 80, 589, 65, (int)"ssl/tls_srp.c", 266);
      }
    }
    else
    {
      v12 = -1;
    }
  }
  else
  {
    v3 = 0;
    v12 = -1;
    v5 = 0;
  }
  sub_B87C8(v5);
  sub_B87C8(v3);
  return v12;
}
