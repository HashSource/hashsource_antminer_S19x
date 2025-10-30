unsigned int sub_67318()
{
  unsigned int v0; // r4
  unsigned int v1; // r5
  void *v2; // r0

  v0 = 0;
  v1 = dnschild_contexts_alloc;
  v2 = (void *)dnschild_contexts;
  while ( v0 >= v1 )
  {
LABEL_5:
    v1 += 20;
    v2 = sub_63BA4(v2, 4 * v1, 4 * v1 - 80, 1);
    dnschild_contexts_alloc = v1;
    dnschild_contexts = (int)v2;
  }
  while ( *((_DWORD *)v2 + v0) )
  {
    if ( ++v0 >= v1 )
      goto LABEL_5;
  }
  *((_DWORD *)v2 + v0) = sub_63BA4(0, 8u, 0, 1);
  return v0;
}
