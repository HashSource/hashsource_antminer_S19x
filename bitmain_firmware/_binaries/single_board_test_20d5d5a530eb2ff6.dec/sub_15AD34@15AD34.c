int sub_15AD34()
{
  int v0; // r0
  int v1; // r4

  v0 = sub_CE32C();
  if ( v0 )
  {
    v1 = v0;
    do
    {
      while ( (*(_DWORD *)(v1 + 76) & 8) != 0 )
      {
        v1 = sub_CE484(v1);
        if ( !v1 )
          return 1;
      }
      sub_15ACF8(v1);
      v1 = sub_CE484(v1);
    }
    while ( v1 );
  }
  return 1;
}
