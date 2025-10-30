int sub_191AD0()
{
  int v0; // r4
  _DWORD *v1; // r0

  v0 = dword_487668;
  v1 = *(_DWORD **)(dword_487668 + 32);
  if ( !v1 )
  {
    v1 = sub_93094(1u, 0x10u);
    *(_DWORD *)(v0 + 32) = v1;
  }
  return v1[1];
}
