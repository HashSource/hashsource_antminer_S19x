_DWORD *sub_6E144()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *v2; // r3
  void *v4; // r0

  v0 = sub_6D500((void *)0x18);
  v1 = v0;
  if ( v0 )
  {
    *v0 = 1;
    v0[1] = 1;
    v0[2] = 8;
    v0[3] = 0;
    v2 = sub_6D500((void *)0x20);
    v1[4] = v2;
    if ( v2 )
    {
      v1[5] = 0;
    }
    else
    {
      v4 = v1;
      v1 = 0;
      sub_6D518(v4);
    }
  }
  return v1;
}
