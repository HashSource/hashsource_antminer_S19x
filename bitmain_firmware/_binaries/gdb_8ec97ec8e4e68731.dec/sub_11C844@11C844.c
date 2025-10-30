int __fastcall sub_11C844(int *a1)
{
  int v1; // r6
  int v2; // r3
  unsigned int v3; // r12
  unsigned int v4; // r4
  void *v5; // r2
  int v6; // r5
  _DWORD *v7; // r1

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 + 16);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v1 + 8);
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *(void **)(v2 + 4 * v4);
        v6 = 4 * v4++;
        v7 = (_DWORD *)(v2 + v6);
        if ( v5 )
        {
          free(v5);
          v2 = *(_DWORD *)(v1 + 16);
          v3 = *(_DWORD *)(v1 + 8);
          v7 = (_DWORD *)(v2 + v6);
        }
        *v7 = 0;
      }
      while ( v3 > v4 );
    }
  }
  return 1;
}
