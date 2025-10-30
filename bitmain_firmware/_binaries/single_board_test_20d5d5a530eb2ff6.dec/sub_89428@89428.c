int __fastcall sub_89428(_DWORD *a1, int *a2)
{
  int v2; // r3
  int v3; // r4
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r2

  v2 = a1[308];
  v3 = *(unsigned __int8 *)(v2 + 520);
  if ( !*(_BYTE *)(v2 + 520) )
  {
    sub_D0048(20, 395, 167, "ssl/ssl_lib.c", 1013);
    return v3;
  }
  if ( a1[38] )
  {
    sub_D0048(20, 395, 172, "ssl/ssl_lib.c", 1017);
    return 0;
  }
  if ( !a1[334] && !sub_890D4(a1, 55, 0, a2) )
  {
    v10 = 1028;
LABEL_11:
    sub_D0048(20, 395, 204, "ssl/ssl_lib.c", v10);
    return -1;
  }
  v7 = sub_11351C(a1[36], (char *)a2);
  if ( !v7 )
  {
    v10 = 1035;
    goto LABEL_11;
  }
  v8 = a1[308];
  a1[43] = -1;
  a1[44] = -1;
  a1[37] = v8 + 512;
  v9 = sub_10BFCC(v7);
  a1[38] = v9;
  if ( v9 )
    return 1;
  sub_D0048(20, 395, 65, "ssl/ssl_lib.c", 1045);
  return -1;
}
