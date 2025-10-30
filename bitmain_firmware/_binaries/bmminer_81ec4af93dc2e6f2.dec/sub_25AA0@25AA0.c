void __fastcall sub_25AA0(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  int v9; // r6
  int v10; // r4

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_DWORD *)a1 = 0;
  }
  v3 = *(void **)(a1 + 140);
  if ( v3 )
  {
    free(v3);
    *(_DWORD *)(a1 + 140) = 0;
    *(_DWORD *)(a1 + 136) = 0;
  }
  v4 = *(void **)(a1 + 104);
  if ( v4 )
  {
    free(v4);
    *(_DWORD *)(a1 + 104) = 0;
  }
  v5 = *(void **)(a1 + 112);
  if ( v5 )
  {
    free(v5);
    *(_DWORD *)(a1 + 112) = 0;
  }
  v6 = *(void **)(a1 + 60);
  if ( v6 )
  {
    free(v6);
    *(_DWORD *)(a1 + 60) = 0;
  }
  v7 = *(void **)(a1 + 68);
  if ( v7 )
  {
    free(v7);
    *(_DWORD *)(a1 + 68) = 0;
  }
  v8 = *(void **)(a1 + 76);
  if ( v8 )
  {
    free(v8);
    *(_DWORD *)(a1 + 76) = 0;
  }
  if ( *(int *)(a1 + 4) > 0 )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(a1 + 56) + 32 * v9++;
      free(*(void **)(v10 + 12));
      free(*(void **)(v10 + 8));
      *(_DWORD *)(v10 + 12) = 0;
      *(_DWORD *)(v10 + 8) = 0;
    }
    while ( v9 < *(_DWORD *)(a1 + 4) );
  }
  free(*(void **)(a1 + 56));
  *(_DWORD *)(a1 + 56) = 0;
}
