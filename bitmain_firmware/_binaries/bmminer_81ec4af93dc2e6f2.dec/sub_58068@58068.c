int __fastcall sub_58068(int a1)
{
  int i; // [sp+Ch] [bp-8h]

  if ( !dword_B0ACC )
    return -1;
  for ( i = 0; i <= 15; ++i )
  {
    if ( a1 == dword_B0AD0[4 * i] )
      return dword_B0AD0[4 * i + 3];
  }
  return -2;
}
