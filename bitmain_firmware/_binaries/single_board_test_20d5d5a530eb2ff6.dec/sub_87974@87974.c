int __fastcall sub_87974(int a1, int a2, int a3)
{
  int v4; // r6
  int v5; // r4
  int v6; // r0

  if ( a2 && (v4 = sub_10C010(a2, a2, a3), v4 > 0) )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_10C01C(a2, v5++);
      if ( sub_BD3B4(v6) == 2 )
        return 1;
      if ( v5 == v4 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    sub_D0048(20, 349, 216, "ssl/ssl_lib.c", 4912);
    return 0;
  }
}
