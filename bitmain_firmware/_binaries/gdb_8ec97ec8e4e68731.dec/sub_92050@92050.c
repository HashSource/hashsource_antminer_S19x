void __fastcall sub_92050(int a1)
{
  void *v2; // r0

  if ( a1 )
  {
    v2 = *(void **)a1;
    if ( *(_DWORD *)a1 )
      free(v2);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
