void __fastcall sub_47580(int a1, int a2)
{
  int v2; // r0
  void *v3; // r5

  v2 = *(_DWORD *)(a2 + 84);
  v3 = *(void **)v2;
  if ( *(_DWORD *)(v2 + 28) != -1 )
    sub_18E64(v2 + 8);
  if ( v3 )
    free(v3);
}
