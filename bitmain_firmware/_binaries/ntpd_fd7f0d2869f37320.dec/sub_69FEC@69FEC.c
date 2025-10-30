int sub_69FEC()
{
  int v0; // r4
  void *v1; // r0
  int *v2; // r2
  int v3; // r3
  int v4; // r1
  int *v5; // t1
  size_t v6; // r2
  int v7; // r8
  size_t v8; // r1
  void *v9; // r0

  v0 = blocking_children_alloc;
  if ( !blocking_children_alloc )
  {
    v8 = 16;
    v7 = 4;
    v6 = 0;
    v1 = (void *)blocking_children;
LABEL_10:
    v9 = sub_64B04(v1, v8, v6, 1);
    v3 = v0;
    blocking_children_alloc = v7;
    blocking_children = (int)v9;
    return v3;
  }
  v1 = (void *)blocking_children;
  v2 = *(int **)blocking_children;
  if ( !*(_DWORD *)blocking_children )
    return 0;
  v3 = *v2;
  if ( !*v2 )
  {
    v4 = blocking_children;
    while ( ++v3 != blocking_children_alloc )
    {
      v5 = *(int **)(v4 + 4);
      v4 += 4;
      v2 = v5;
      if ( !v5 )
        return v3;
      if ( *v2 )
        goto LABEL_12;
    }
    v6 = 4 * blocking_children_alloc;
    v7 = blocking_children_alloc + 4;
    v8 = 4 * blocking_children_alloc + 16;
    goto LABEL_10;
  }
  v3 = 0;
LABEL_12:
  *v2 = 0;
  return v3;
}
