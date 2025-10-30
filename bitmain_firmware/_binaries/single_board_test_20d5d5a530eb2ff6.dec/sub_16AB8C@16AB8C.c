int __fastcall sub_16AB8C(const char *a1, int a2, void *a3, int a4, int a5, _DWORD *a6)
{
  int v8; // r4
  int result; // r0
  void *v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[0] = a3;
  if ( !a1 )
  {
    v8 = d2i_X509_AUX(0, v10, a4);
    if ( v8 )
      goto LABEL_6;
    goto LABEL_12;
  }
  if ( !strcmp(a1, "TRUSTED CERTIFICATE") )
  {
    *a6 = 1;
    v8 = d2i_X509_AUX(0, v10, a4);
    if ( v8 )
      goto LABEL_6;
    goto LABEL_9;
  }
  if ( strcmp(a1, "X509 CERTIFICATE") && strcmp(a1, "CERTIFICATE") )
    return 0;
  *a6 = 1;
  v8 = d2i_X509_AUX(0, v10, a4);
  if ( !v8 )
  {
LABEL_12:
    v8 = d2i_X509(0, v10, a4);
    if ( v8 )
      goto LABEL_6;
LABEL_9:
    v8 = 0;
    goto LABEL_10;
  }
LABEL_6:
  *a6 = 1;
  result = sub_16BFDC(v8);
  if ( !result )
  {
LABEL_10:
    X509_free(v8);
    return 0;
  }
  return result;
}
