int __fastcall sub_184834(int a1)
{
  void *v2; // r0
  void *v3; // r0
  int v4; // r0
  void *v5; // r0
  void *v6; // r0

  sub_F857C(a1);
  ((void (__fastcall *)(void *, int (__fastcall *)(int (__fastcall *)(int, int), int, int), int, int))loc_1E0C7C)(
    &unk_48791C,
    sub_182D8C,
    a1,
    a1 + 172);
  v2 = *(void **)(a1 + 40);
  if ( v2 )
    free(v2);
  v3 = *(void **)(a1 + 56);
  if ( v3 )
    free(v3);
  sub_2359D4(*(_DWORD *)(a1 + 164));
  v4 = *(_DWORD *)(a1 + 144);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  sub_93A50((int *)(a1 + 60));
  sub_94088(a1 + 96, *(_DWORD **)(a1 + 104));
  sub_94088(a1 + 72, *(_DWORD **)(a1 + 80));
  v5 = *(void **)(a1 + 60);
  if ( v5 )
    sub_339E64(v5);
  v6 = *(void **)(a1 + 52);
  if ( v6 )
    free(v6);
  return a1;
}
