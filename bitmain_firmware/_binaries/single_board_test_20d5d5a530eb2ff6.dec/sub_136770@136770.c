_DWORD *sub_136770()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4

  v0 = sub_E0740((void *)0x34);
  v1 = v0;
  if ( v0 )
  {
    sub_B8210(v0);
    sub_B8210(v1 + 5);
    v1[12] = 1;
  }
  else
  {
    sub_D0048(3, 150, 65, (int)"crypto/bn/bn_recp.c", 25);
  }
  return v1;
}
