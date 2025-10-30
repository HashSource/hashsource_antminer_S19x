int __fastcall sub_786B8(int a1)
{
  int *v1; // r2
  int v2; // r3
  int v3; // t1

  v1 = &clktypes;
  if ( clktypes == -1 )
    return 0;
  if ( a1 != clktypes )
  {
    while ( 1 )
    {
      v3 = v1[3];
      v1 += 3;
      v2 = v3;
      if ( v3 == -1 )
        break;
      if ( v2 == a1 )
        return v1[2];
    }
    return 0;
  }
  return v1[2];
}
