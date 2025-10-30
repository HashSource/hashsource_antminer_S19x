int __fastcall sub_112D28(_DWORD *a1)
{
  void (*v1)(void); // r3
  int v3; // r0
  int result; // r0

  v1 = (void (*)(void))a1[17];
  if ( v1 )
  {
    v1();
    a1[17] = 0;
  }
  v3 = a1[4];
  if ( v3 )
  {
    if ( !a1[30] )
      X509_VERIFY_PARAM_free(v3);
    a1[4] = 0;
  }
  sub_1170E8(a1[21]);
  a1[21] = 0;
  sub_10BFDC(a1[20], (void (__fastcall *)(int))X509_free);
  a1[20] = 0;
  result = sub_DC2BC(5u, (int)a1, a1 + 31);
  a1[31] = 0;
  return result;
}
