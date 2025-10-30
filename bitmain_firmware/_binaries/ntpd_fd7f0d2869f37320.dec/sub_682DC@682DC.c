unsigned int sub_682DC()
{
  unsigned int v0; // r4
  void *v1; // r0
  unsigned int v2; // r3
  int v3; // r5

  v0 = 0;
  v1 = (void *)dnschild_contexts;
  v2 = dnschild_contexts_alloc;
  while ( v0 >= v2 )
  {
LABEL_5:
    v3 = v2 + 20;
    v1 = sub_64B04(v1, 4 * v3, 4 * v3 - 80, 1);
    dnschild_contexts_alloc = v3;
    v2 = v3;
    dnschild_contexts = (int)v1;
  }
  while ( *((_DWORD *)v1 + v0) )
  {
    if ( ++v0 >= v2 )
      goto LABEL_5;
  }
  *((_DWORD *)v1 + v0) = sub_64B04(0, 8u, 0, 1);
  return v0;
}
