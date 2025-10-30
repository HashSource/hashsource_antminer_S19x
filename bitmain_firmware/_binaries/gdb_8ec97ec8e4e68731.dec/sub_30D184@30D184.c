void __fastcall sub_30D184(int *a1)
{
  void *v2; // r0
  void *v3; // r0
  _DWORD *v4; // r0
  int v5; // r5
  void *v6; // r0
  int v7; // r5

  sub_30D12C(a1 + 1, a1 + 8);
  v2 = (void *)a1[1];
  if ( v2 )
  {
    free(v2);
    a1[1] = 0;
    a1[9] = 0;
  }
  v3 = (void *)a1[21];
  if ( v3 )
  {
    free(v3);
    a1[21] = 0;
    a1[22] = 0;
  }
  v4 = (_DWORD *)a1[16];
  if ( v4 )
  {
    if ( a1[17] > 0 )
    {
      v5 = 0;
      do
      {
        v6 = (void *)v4[v5++];
        free(v6);
        v4 = (_DWORD *)a1[16];
      }
      while ( a1[17] > v5 );
    }
    free(v4);
    a1[16] = 0;
  }
  v7 = a1[19];
  if ( v7 )
  {
    if ( *(_DWORD *)v7 )
    {
      free(*(void **)v7);
      *(_DWORD *)(v7 + 4) = 0;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)v7 = 0;
      v7 = a1[19];
    }
    free((void *)v7);
    a1[19] = 0;
  }
}
