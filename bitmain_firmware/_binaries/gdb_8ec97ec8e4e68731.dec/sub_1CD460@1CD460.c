void __fastcall sub_1CD460(int a1)
{
  void *v2; // r0
  unsigned int *v3; // r0

  v2 = *(void **)(a1 + 56);
  if ( v2 )
    free(v2);
  v3 = *(unsigned int **)(a1 + 60);
  *(_DWORD *)(a1 + 56) = 0;
  sub_982A8(v3);
  *(_DWORD *)(a1 + 60) = 0;
}
