int sub_6908C()
{
  size_t v0; // r2
  int *v1; // r3
  int v2; // r1
  int v3; // r12
  int *v4; // t1
  int v5; // r5
  size_t v6; // r1
  void *v7; // r0
  int v9; // r4

  v0 = blocking_children_alloc;
  if ( !blocking_children_alloc )
  {
    v9 = 0;
    v6 = 16;
    v5 = 4;
LABEL_10:
    v7 = sub_63BA4((void *)blocking_children, v6, v0, 1);
    blocking_children_alloc = v5;
    blocking_children = (int)v7;
    return v9;
  }
  v1 = *(int **)blocking_children;
  if ( !*(_DWORD *)blocking_children )
    return 0;
  v2 = *v1;
  if ( !*v1 )
  {
    v3 = blocking_children;
    while ( 1 )
    {
      v9 = v2 + 1;
      if ( blocking_children_alloc == v2 + 1 )
        break;
      v4 = *(int **)(v3 + 4);
      v3 += 4;
      v1 = v4;
      if ( !v4 )
        return v9;
      ++v2;
      if ( *v1 )
        goto LABEL_12;
    }
    v0 = 4 * blocking_children_alloc;
    v5 = v2 + 5;
    v6 = 4 * blocking_children_alloc + 16;
    goto LABEL_10;
  }
  v9 = 0;
LABEL_12:
  *v1 = 0;
  return v9;
}
