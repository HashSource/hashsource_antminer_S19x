int __fastcall dtls_construct_hello_verify_request(_DWORD *a1, int a2)
{
  int (__fastcall *v3)(_DWORD *, _DWORD, unsigned int *); // r3
  int v6; // r1
  int v7; // r2
  unsigned int v8; // [sp+Ch] [bp-8h] BYREF

  v3 = *(int (__fastcall **)(_DWORD *, _DWORD, unsigned int *))(a1[308] + 124);
  if ( !v3 || !v3(a1, a1[32], &v8) || v8 > 0xFF )
  {
    sub_95494(a1, -1, 385, 400, (int)"ssl/statem/statem_srvr.c", 1304);
    return 0;
  }
  v6 = a1[32];
  v7 = v8;
  *(_DWORD *)(v6 + 256) = v8;
  if ( !sub_A0000(a2, v6, v7) )
  {
    sub_95494(a1, -1, 385, 68, (int)"ssl/statem/statem_srvr.c", 1312);
    return 0;
  }
  return 1;
}
