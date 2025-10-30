int sub_5836C()
{
  int i; // [sp+0h] [bp-Ch]
  int v3; // [sp+4h] [bp-8h]

  v3 = 0;
  if ( !dword_B0ACC )
    return -1;
  for ( i = 0; i <= 5; ++i )
  {
    if ( dword_B0BD0[3 * i] != -1 )
      ++v3;
  }
  return v3;
}
