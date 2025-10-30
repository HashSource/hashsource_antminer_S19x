void __fastcall sub_9489C(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
    free(v2);
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
}
