char *__fastcall sub_10AC90(int *a1, int *a2)
{
  bool v2; // zf
  int v3; // r4
  char **i; // r5

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  v3 = v2;
  if ( v2 )
    return 0;
  for ( i = &off_21FBBC; sub_B8354((int *)i[1], a1) || sub_B8354((int *)i[2], a2); i += 3 )
  {
    if ( ++v3 == 7 )
      return 0;
  }
  return (&off_21FBBC)[3 * v3];
}
