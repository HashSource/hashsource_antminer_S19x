void __fastcall sub_26B60(int a1)
{
  int v1; // r4
  int v2; // r3
  void *v3; // r0
  int v4; // r2

  v1 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      free(*(void **)(v1 + 4));
      if ( *(_BYTE *)(v1 + 12) )
      {
        free(*(void **)(v1 + 8));
        v2 = *(_DWORD *)(v1 + 20);
        v3 = (void *)v1;
        if ( v1 == v2 )
        {
LABEL_7:
          free((void *)v1);
          return;
        }
      }
      else
      {
        v2 = *(_DWORD *)(v1 + 20);
        v3 = (void *)v1;
        if ( v1 == v2 )
          goto LABEL_7;
      }
      v4 = *(_DWORD *)(v1 + 16);
      v1 = v2;
      *(_DWORD *)(v2 + 16) = v4;
      *(_DWORD *)(v4 + 20) = v2;
      free(v3);
    }
  }
}
