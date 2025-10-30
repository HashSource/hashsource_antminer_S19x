void __fastcall sub_11C8A8(_DWORD *a1)
{
  unsigned int v2; // r4
  int v3; // r6
  void *v4; // r0
  int v5; // r3
  void *v6; // r0

  if ( a1[2] )
  {
    v2 = 0;
    do
    {
      v3 = 4 * v2;
      v4 = *(void **)(a1[3] + 4 * v2++);
      if ( v4 )
        free(v4);
      v5 = a1[4];
      if ( v5 )
      {
        v6 = *(void **)(v5 + v3);
        if ( v6 )
          free(v6);
      }
    }
    while ( a1[2] > v2 );
  }
}
