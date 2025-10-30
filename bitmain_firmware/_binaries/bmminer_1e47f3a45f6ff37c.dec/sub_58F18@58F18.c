int __fastcall sub_58F18(int a1)
{
  int i; // [sp+Ch] [bp-8h]

  if ( !dword_B382C )
    return -1;
  for ( i = 0; i <= 15; ++i )
  {
    if ( dword_B3830[4 * i] == a1 )
      return dword_B3830[4 * i + 1];
  }
  return -2;
}
