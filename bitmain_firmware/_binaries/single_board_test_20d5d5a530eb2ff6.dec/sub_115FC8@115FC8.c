int __fastcall sub_115FC8(_DWORD *a1, int **a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  char *v6; // r0
  int (__fastcall *v7)(_DWORD *, int **); // r3

  v4 = EVP_PKEY_new();
  if ( v4 )
  {
    v5 = v4;
    v6 = sub_EAC84(**a2);
    if ( sub_D9CD4(v5, (int)v6) )
    {
      v7 = *(int (__fastcall **)(_DWORD *, int **))(v5[3] + 20);
      if ( v7 )
      {
        if ( v7(v5, a2) )
        {
          *a1 = v5;
          return 1;
        }
        sub_D0048(11, 148, 125, (int)"crypto/x509/x_pubkey.c", 125);
      }
      else
      {
        sub_D0048(11, 148, 124, (int)"crypto/x509/x_pubkey.c", 129);
      }
    }
    else
    {
      sub_D0048(11, 148, 111, (int)"crypto/x509/x_pubkey.c", 114);
    }
    sub_DA240((int)v5);
    return 0;
  }
  else
  {
    sub_D0048(11, 148, 65, (int)"crypto/x509/x_pubkey.c", 109);
    return -1;
  }
}
