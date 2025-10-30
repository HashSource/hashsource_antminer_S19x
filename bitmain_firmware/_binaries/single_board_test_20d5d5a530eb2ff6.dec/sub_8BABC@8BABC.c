int __fastcall sub_8BABC(_DWORD *a1, int a2, int a3)
{
  int v6; // r4

  if ( !a2 )
    goto LABEL_4;
  v6 = sub_92728(a1[308], 18);
  if ( !v6 )
  {
    if ( !sub_890D4(a1, 65, 1, 0) )
      return v6;
LABEL_4:
    v6 = 1;
    a1[372] = a2;
    a1[373] = a3;
    return v6;
  }
  sub_D0048(20, 399, 206, "ssl/ssl_lib.c", 4927);
  return 0;
}
