_DWORD *sub_48078()
{
  _DWORD *v0; // r4
  void *v2; // r0

  v0 = sub_4774C((void *)0x24);
  if ( v0 )
  {
    if ( !dword_73108 )
      sub_45DF8(0);
    v0[1] = 1;
    *v0 = 0;
    if ( sub_457E8(v0 + 2) )
    {
      v2 = v0;
      v0 = 0;
      sub_47764(v2);
    }
  }
  return v0;
}
