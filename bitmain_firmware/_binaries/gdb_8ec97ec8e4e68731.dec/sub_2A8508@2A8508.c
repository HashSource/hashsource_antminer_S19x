int __fastcall sub_2A8508(int a1)
{
  _DWORD *v2; // r5
  void *v3; // r0

  v2 = *(_DWORD **)(a1 + 8);
  v3 = (void *)v2[1];
  if ( v3 )
    free(v3);
  free(v2);
  *(_DWORD *)(a1 + 8) = 0;
  return 0;
}
