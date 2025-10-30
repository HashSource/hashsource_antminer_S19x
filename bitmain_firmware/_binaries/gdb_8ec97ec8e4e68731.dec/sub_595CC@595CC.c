int **__fastcall sub_595CC(int **a1)
{
  int *v2; // r4
  int *v3; // r6
  int v4; // r5
  int v5; // t1
  void *v6; // r0

  v2 = *a1;
  v3 = a1[1];
  if ( *a1 != v3 )
  {
    do
    {
      v5 = *v2++;
      v4 = v5;
      if ( v5 )
      {
        v6 = *(void **)(v4 + 24);
        if ( v6 )
          sub_339E64(v6);
        if ( *(_DWORD *)v4 != v4 + 8 )
          sub_339E64(*(void **)v4);
        sub_33AC04((void *)v4);
      }
    }
    while ( v3 != v2 );
    v3 = *a1;
  }
  if ( v3 )
    sub_339E64(v3);
  return a1;
}
