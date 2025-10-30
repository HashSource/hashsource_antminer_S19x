void __fastcall sub_24D520(int a1)
{
  void *v2; // r0

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    free(v2);
  *(_DWORD *)(a1 + 8) = 0;
}
