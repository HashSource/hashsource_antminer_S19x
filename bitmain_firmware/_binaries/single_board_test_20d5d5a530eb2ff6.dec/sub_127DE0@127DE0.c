_DWORD *sub_127DE0()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4

  v0 = sub_E0740((void *)0x18);
  v1 = v0;
  if ( v0 )
    v0[5] = 1;
  else
    sub_D0048(13, 123, 65, (int)"crypto/asn1/a_object.c", 344);
  return v1;
}
