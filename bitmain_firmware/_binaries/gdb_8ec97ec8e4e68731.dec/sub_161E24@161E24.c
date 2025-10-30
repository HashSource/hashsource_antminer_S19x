void __fastcall sub_161E24(int a1, int a2)
{
  int v2; // r3
  void *v3; // r0

  v2 = *(_DWORD *)(a2 + 104);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 8);
    if ( v3 )
      free(v3);
  }
}
