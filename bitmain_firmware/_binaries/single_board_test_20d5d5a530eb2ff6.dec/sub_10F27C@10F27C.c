_DWORD *sub_10F27C()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4

  v0 = sub_E0740((void *)8);
  v1 = v0;
  if ( v0 )
    *v0 = 0;
  else
    sub_D0048(11, 150, 65, (int)"crypto/x509/x509_lu.c", 423);
  return v1;
}
