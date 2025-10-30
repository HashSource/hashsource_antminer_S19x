int __fastcall sub_581EC(int a1)
{
  int i; // [sp+Ch] [bp-8h]

  if ( !dword_B0ACC )
    return -1;
  for ( i = 0; i <= 5; ++i )
  {
    if ( a1 == dword_B0BD0[3 * i] )
      return dword_B0BD0[3 * i + 1];
  }
  return -2;
}
