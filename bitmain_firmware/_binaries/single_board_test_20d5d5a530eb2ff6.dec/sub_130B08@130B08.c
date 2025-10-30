_DWORD *sub_130B08()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4

  v0 = sub_E0740((void *)0x30);
  v1 = v0;
  if ( v0 )
  {
    v0[2] = 0;
    v0[1] = 0;
    *v0 = 0;
    v0[4] = 0;
    v0[3] = 0;
    v0[5] = 0;
    v0[7] = 0;
    v0[6] = 0;
  }
  else
  {
    sub_D0048(3, 106, 65, (int)"crypto/bn/bn_ctx.c", 139);
  }
  return v1;
}
