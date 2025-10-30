void *sub_1911C0()
{
  int v0; // r4
  void *result; // r0

  v0 = dword_487668;
  result = *(void **)(dword_487668 + 32);
  if ( !result )
  {
    result = sub_93094(1u, 0x10u);
    *(_DWORD *)(v0 + 32) = result;
  }
  return result;
}
