int sub_630C4()
{
  int v0; // r6
  int v1; // r4
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int result; // r0

  v0 = 11;
  while ( 1 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      v3 = v1++;
      v4 = sub_6DD90(v3);
      if ( v4 == -1 )
        break;
      if ( v4 > 3600 )
        ++v2;
    }
    while ( v1 != 4 );
    result = 1;
    if ( v2 == 4 )
      break;
    sleep(1u);
    if ( !--v0 )
      return 0;
  }
  return result;
}
