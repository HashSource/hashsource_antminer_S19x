int __fastcall ossl_statem_client_post_process_message(_DWORD *a1, int a2)
{
  int v2; // r3

  v2 = a1[16];
  if ( v2 == 7 || v2 == 39 )
    return sub_99ED0(a1, a2);
  sub_95494(a1, 80, 593, 68, (int)"ssl/statem/statem_clnt.c", 1090);
  return 0;
}
