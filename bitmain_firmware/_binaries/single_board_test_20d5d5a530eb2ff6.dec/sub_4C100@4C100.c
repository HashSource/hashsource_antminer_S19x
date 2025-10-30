void *sub_4C100()
{
  void *v0; // r0
  void *v1; // r4

  v0 = malloc(0x4020u);
  v1 = v0;
  if ( v0 )
    memset(v0, 0, 0x4014u);
  return v1;
}
