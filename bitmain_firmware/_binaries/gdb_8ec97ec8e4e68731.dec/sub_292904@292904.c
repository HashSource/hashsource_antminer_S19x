void sub_292904()
{
  int v0; // r0
  int v1; // r2
  int v2; // r3

  if ( dword_48B6F4 )
    free((void *)dword_48B6F4);
  dword_48B6F4 = 0;
  dword_48B6F0 = 0;
  if ( !dword_48B6EC
    || (v0 = dword_48B6EC,
        v1 = *(_DWORD *)(dword_48B6EC + 8),
        v2 = *(_DWORD *)dword_48B6EC,
        dword_48B6F4 = *(_DWORD *)(dword_48B6EC + 4),
        dword_48B6F0 = v1,
        dword_48B6EC = v2,
        sub_297758(v0),
        !dword_48B6F4) )
  {
    dword_48AAA0 &= ~0x800u;
  }
}
