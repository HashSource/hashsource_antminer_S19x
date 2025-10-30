int sub_DC1C()
{
  int v0; // r4
  void *v1; // r0

  v0 = dword_33338;
  if ( dword_33338 )
  {
    v1 = (void *)dword_33338;
    dword_33338 = *(_DWORD *)dword_33338;
    --dword_33324;
    memset(v1, 0, 0x8A4u);
    *(_DWORD *)(v0 + 2208) = 1;
  }
  else
  {
    ++dword_33334;
  }
  return v0;
}
