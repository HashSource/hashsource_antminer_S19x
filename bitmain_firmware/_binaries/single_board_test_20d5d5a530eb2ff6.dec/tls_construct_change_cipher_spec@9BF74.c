int __fastcall tls_construct_change_cipher_spec(_DWORD *a1, int a2)
{
  int v3; // r4

  v3 = 1;
  if ( !sub_A8450(a2, a2, 1, 0, 1) )
  {
    v3 = 0;
    sub_95494(a1, 80, 427, 68, (int)"ssl/statem/statem_lib.c", 874);
  }
  return v3;
}
