void sub_6E4A8()
{
  unsigned int v0; // r4
  int v1; // r3
  sem_t *v2; // r0

  if ( blocking_children_alloc )
  {
    v0 = 0;
    do
    {
      v1 = *(_DWORD *)(blocking_children + 4 * v0);
      if ( v1 )
      {
        v2 = *(sem_t **)(v1 + 48);
        if ( v2 )
          sem_post(v2);
      }
      ++v0;
    }
    while ( blocking_children_alloc > v0 );
  }
}
