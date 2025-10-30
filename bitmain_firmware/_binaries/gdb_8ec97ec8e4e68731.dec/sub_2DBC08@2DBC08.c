void __fastcall sub_2DBC08(int a1, int a2)
{
  void *v3; // r0
  void *v5; // r0

  v3 = *(void **)a1;
  if ( v3 && v3 != *(void **)(*(_DWORD *)(a2 + 140) + 104) )
    free(v3);
  v5 = *(void **)(a1 + 12);
  if ( v5 )
  {
    if ( v5 != *(void **)(*(_DWORD *)(*(_DWORD *)(a2 + 148) + 160) + 120) )
      free(v5);
  }
}
