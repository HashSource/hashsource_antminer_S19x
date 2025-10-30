int __fastcall sub_16EEA0(int result, int a2)
{
  int v2; // r3
  size_t *v3; // r0

  v2 = result;
  if ( result )
  {
    v3 = *(size_t **)(result + 12);
    *(_DWORD *)(v2 + 8) = 1;
    return sub_126EFC(v3, a2);
  }
  return result;
}
