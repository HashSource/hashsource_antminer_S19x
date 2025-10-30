bool __fastcall sub_98FB8(int *a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r2

  v1 = *a1;
  v2 = a1[1];
  if ( !*a1 )
  {
    if ( v2 )
      return v1;
    v3 = a1[2];
    if ( !v3 )
      return v1;
    return v3 == 0;
  }
  if ( v1 == -1 )
  {
    if ( !v2 )
    {
      v3 = a1[2];
      if ( v3 )
        return v3 == 0;
    }
  }
  else if ( !v2 )
  {
    return a1[2] == 0;
  }
  return 0;
}
