void __fastcall sub_10ACAC(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[3];
  if ( v2 )
    free(v2);
  free(a1);
}
