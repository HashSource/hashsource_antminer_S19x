int sub_D7CC()
{
  int v0; // r4
  int v1; // r12
  void *v2; // r0

  v0 = dword_33334;
  if ( dword_33334 )
  {
    v1 = *(_DWORD *)dword_33334;
    --dword_33320;
    v2 = (void *)dword_33334;
    dword_33334 = v1;
    memset(v2, 0, 0x8A4u);
    *(_DWORD *)(v0 + 2208) = 1;
  }
  else
  {
    ++dword_33330;
  }
  return v0;
}
