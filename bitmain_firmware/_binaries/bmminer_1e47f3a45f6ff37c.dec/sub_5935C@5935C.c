int sub_5935C()
{
  int i; // [sp+0h] [bp-Ch]
  int v3; // [sp+4h] [bp-8h]

  v3 = 0;
  if ( !dword_B382C )
    return -1;
  for ( i = 0; i <= 5; ++i )
  {
    if ( dword_B3930[3 * i] != -1 )
      ++v3;
  }
  return v3;
}
