__int16 *__fastcall sub_15954(__int16 *result)
{
  unsigned int v1; // r5
  int *v2; // r2
  int *v3; // r4
  int *v4; // r3
  unsigned int v5; // r1

  v1 = (unsigned int)result;
  v2 = &fd_list;
  v3 = (int *)fd_list;
  v4 = *(int **)fd_list;
  if ( *(__int16 **)(fd_list + 4) != result )
  {
    if ( !v4 )
      return result;
    while ( (__int16 *)v4[1] != result )
    {
      v3 = v4;
      if ( !*v4 )
        return result;
      v4 = (int *)*v4;
    }
    v2 = v3;
    v3 = (int *)*v3;
    v4 = (int *)*v3;
  }
  v5 = v3[2];
  *v2 = (int)v4;
  if ( v5 > 1 )
  {
    sub_64E00(3, "internal error - illegal descriptor type %d - EXITING", v5);
    exit(1);
  }
  close(v3[1]);
  free(v3);
  return sub_15274(v1, 1);
}
