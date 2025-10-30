int __fastcall sub_1DFE3C(int a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    free(v2);
  v3 = *(void **)(a1 + 12);
  if ( v3 )
    free(v3);
  return a1;
}
