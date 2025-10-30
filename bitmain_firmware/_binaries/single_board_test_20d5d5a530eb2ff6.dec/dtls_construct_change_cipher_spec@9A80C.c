int __fastcall dtls_construct_change_cipher_spec(_DWORD *a1, int a2)
{
  int v2; // r4
  int v4; // r4
  int v7; // r2
  int v8; // r1

  if ( *a1 != 256 )
    return 1;
  v4 = a1[32];
  v7 = *(unsigned __int16 *)(v4 + 264);
  v8 = *(unsigned __int16 *)(v4 + 266) + 1;
  *(_WORD *)(v4 + 266) = v8;
  v2 = sub_A8450(a2, v8, v7, 0, 2);
  if ( v2 )
    return 1;
  sub_95494(a1, 80, 371, 68, (int)"ssl/statem/statem_dtls.c", 918);
  return v2;
}
