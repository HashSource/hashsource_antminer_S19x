void __fastcall sub_1ACA8(int a1, int *a2)
{
  int v2; // r2
  unsigned int v3; // r4
  int v6; // r5
  int v7; // r6
  void *v8; // r3
  unsigned int v9; // r3

  v2 = *(_DWORD *)(a1 + 36);
  if ( *(_DWORD *)(v2 + 108) )
  {
    v3 = 0;
    do
    {
      v6 = *a2;
      v7 = 4 * v3;
      v8 = *(void **)(*a2 + 4 * v3++);
      if ( v8 )
      {
        free(v8);
        v2 = *(_DWORD *)(a1 + 36);
      }
      v9 = *(_DWORD *)(v2 + 108);
      *(_DWORD *)(v6 + v7) = 0;
    }
    while ( v9 > v3 );
  }
}
