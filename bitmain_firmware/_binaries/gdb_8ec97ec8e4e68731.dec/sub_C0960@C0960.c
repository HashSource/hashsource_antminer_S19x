int __fastcall sub_C0960(int a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *(void **)a1;
  if ( v2 )
    free(v2);
  v3 = *(void **)(a1 + 44);
  if ( v3 )
    free(v3);
  return a1;
}
