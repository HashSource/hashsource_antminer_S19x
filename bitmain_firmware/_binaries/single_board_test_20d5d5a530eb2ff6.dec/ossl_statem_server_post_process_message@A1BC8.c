int __fastcall ossl_statem_server_post_process_message(_DWORD *a1, int a2)
{
  int v2; // r3

  v2 = a1[16];
  if ( v2 == 20 )
    return sub_A0704((int)a1, a2);
  if ( v2 == 28 )
    return sub_A1B6C(a1);
  sub_95494(a1, 80, 601, 68, (int)"ssl/statem/statem_srvr.c", 1239);
  return 0;
}
