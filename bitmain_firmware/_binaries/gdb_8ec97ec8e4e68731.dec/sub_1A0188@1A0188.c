void __fastcall sub_1A0188(int a1)
{
  int v1; // r1
  _DWORD *v2; // r2
  int v4; // r4
  void *v5; // r3

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD **)(a1 + 8);
  if ( (2 * v1) >> 2 <= 0 )
  {
    if ( v2 )
      free(*(void **)(a1 + 8));
  }
  else
  {
    v4 = 0;
    do
    {
      v5 = (void *)v2[v4++];
      if ( v5 )
      {
        free(v5);
        v1 = *(_DWORD *)(a1 + 4);
        v2 = *(_DWORD **)(a1 + 8);
      }
    }
    while ( (2 * v1) >> 2 > v4 );
    if ( v2 )
      free(v2);
  }
}
