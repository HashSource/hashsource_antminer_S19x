_DWORD *sub_113394()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4

  v0 = sub_E0740((void *)0x40);
  v1 = v0;
  if ( v0 )
  {
    v0[5] = 0;
    v0[6] = -1;
    v0[7] = -1;
  }
  else
  {
    sub_D0048(11, 159, 65, (int)"crypto/x509/x509_vpm.c", 88);
  }
  return v1;
}
