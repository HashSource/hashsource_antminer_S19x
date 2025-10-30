void __fastcall sub_1B6414(int a1)
{
  int v2; // r0
  void *v3; // r0

  sub_C197C(*(_DWORD *)(a1 + 44));
  sub_C197C(*(_DWORD *)(a1 + 48));
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 )
    sub_323B84(v2);
  v3 = *(void **)(a1 + 16408);
  if ( v3 )
    sub_339E64(v3);
  obstack_free((struct obstack *)a1, 0);
}
