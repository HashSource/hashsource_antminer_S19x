int __fastcall d2i_X509_AUX(int *a1, void **a2, int a3)
{
  _BOOL4 v6; // r6
  int v7; // r0
  int v8; // r4
  void *v9; // r3
  int result; // r0
  void *v11[2]; // [sp+4h] [bp-8h] BYREF

  v6 = 1;
  v11[0] = *a2;
  if ( a1 )
    v6 = *a1 == 0;
  v7 = d2i_X509(a1, v11, a3);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = v11[0];
  if ( a3 - ((char *)v11[0] - (char *)*a2) > 0 )
  {
    if ( sub_116930(v7 + 196, v11) )
    {
      v9 = v11[0];
      goto LABEL_7;
    }
    if ( v6 )
    {
      X509_free(v8);
      if ( a1 )
      {
        *a1 = 0;
        return 0;
      }
    }
    return 0;
  }
LABEL_7:
  result = v8;
  *a2 = v9;
  return result;
}
