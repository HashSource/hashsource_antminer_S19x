void __fastcall sub_26A70C(int a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *(void **)(a1 + 4);
  if ( v2 )
    free(v2);
  v3 = *(void **)(a1 + 28);
  if ( v3 )
    free(v3);
}
