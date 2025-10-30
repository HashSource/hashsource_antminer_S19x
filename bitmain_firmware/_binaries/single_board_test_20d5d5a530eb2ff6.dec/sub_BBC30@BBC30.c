int __fastcall sub_BBC30(__int64 a1, int a2)
{
  int v2; // r6
  int v3; // r1
  int v4; // r2
  __int64 v5; // r0
  int v6; // r2
  int v7; // r4
  bool v8; // cf
  _DWORD *v9; // r6
  int result; // r0
  _DWORD *v11; // r0
  int v12; // r1
  _DWORD *v13; // r6

  v2 = a1;
  sub_BBBC8(a1, a2);
  v7 = sub_10C010(dword_6DF3E0, v3, v4) - 1;
  if ( v7 >= 0 )
  {
    if ( v2 )
    {
      do
      {
        v11 = (_DWORD *)sub_10C01C(dword_6DF3E0, v7);
        v12 = v7;
        v13 = v11;
        --v7;
        sub_10BC04(dword_6DF3E0, v12);
        sub_C1788(*v13);
        CRYPTO_free(v13[1], "crypto/conf/conf_mod.c", 384);
        CRYPTO_free(v13, "crypto/conf/conf_mod.c", 385);
      }
      while ( v7 != -1 );
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v5 = sub_10C01C(dword_6DF3E0, v7);
          v9 = (_DWORD *)v5;
          if ( *(int *)(v5 + 16) <= 0 )
          {
            HIDWORD(v5) = v7;
            if ( *(_DWORD *)v5 )
              break;
          }
          v8 = v7-- != 0;
          if ( !v8 )
            goto LABEL_9;
        }
        sub_10BC04(dword_6DF3E0, v7);
        sub_C1788(*v9);
        CRYPTO_free(v9[1], "crypto/conf/conf_mod.c", 384);
        CRYPTO_free(v9, "crypto/conf/conf_mod.c", 385);
        v8 = v7-- != 0;
      }
      while ( v8 );
    }
  }
LABEL_9:
  result = sub_10C010(dword_6DF3E0, HIDWORD(v5), v6);
  if ( !result )
  {
    result = sub_10BDB4(dword_6DF3E0);
    dword_6DF3E0 = 0;
  }
  return result;
}
