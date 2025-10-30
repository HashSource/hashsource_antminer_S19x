void __fastcall sub_9AD64(int a1)
{
  void *v1; // r3

  v1 = *(void **)(a1 + 240);
  *(_DWORD *)(a1 + 240) = 0;
  if ( v1 )
    free(v1);
}
