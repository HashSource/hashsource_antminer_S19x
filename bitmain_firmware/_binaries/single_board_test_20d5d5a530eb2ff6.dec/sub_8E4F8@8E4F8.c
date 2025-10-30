int __fastcall sub_8E4F8(int a1, int a2)
{
  int v4; // r4

  if ( sub_CDD6C(a2) )
  {
    v4 = sub_CEA9C(a2);
    if ( v4 )
    {
      v4 = 1;
      *(_DWORD *)(a1 + 292) = a2;
    }
    else
    {
      sub_D0048(20, 290, 331, "ssl/ssl_sess.c", 1214);
      sub_CDDF8(a2);
    }
    return v4;
  }
  else
  {
    sub_D0048(20, 290, 38, "ssl/ssl_sess.c", 1209);
    return 0;
  }
}
