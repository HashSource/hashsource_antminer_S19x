int __fastcall sub_278C38(int a1)
{
  void *v2; // r0

  v2 = *(void **)(a1 + 24);
  if ( v2 != (void *)(a1 + 32) )
    sub_339E64(v2);
  if ( *(_DWORD *)a1 != a1 + 8 )
    sub_339E64(*(void **)a1);
  return a1;
}
