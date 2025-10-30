bool sub_8D45C()
{
  _BOOL4 result; // r0
  _DWORD *v1; // r0
  _DWORD *v2; // r4
  int v3; // r5
  int v4; // r5

  result = sub_87798(0x200000, 0, 0);
  if ( result )
  {
    v1 = (_DWORD *)sub_E0740(516, "ssl/ssl_sess.c", 72);
    v2 = v1;
    if ( v1 )
    {
      v1[105] = 1;
      __dmb(0xBu);
      v1[106] = 1;
      __dmb(0xBu);
      v1[107] = 304;
      v1[108] = time(0);
      v3 = sub_10C510();
      v2[128] = v3;
      if ( v3 )
      {
        v4 = sub_DBE44(2, v2, v2 + 112);
        result = (_BOOL4)v2;
        if ( !v4 )
        {
          sub_10C574(v2[128]);
          CRYPTO_free(v2, "ssl/ssl_sess.c", 91);
          return 0;
        }
      }
      else
      {
        sub_D0048(20, 189, 65, "ssl/ssl_sess.c", 84);
        CRYPTO_free(v2, "ssl/ssl_sess.c", 85);
        return 0;
      }
    }
    else
    {
      sub_D0048(20, 189, 65, "ssl/ssl_sess.c", 74);
      return 0;
    }
  }
  return result;
}
