int __fastcall sub_59294(int a1)
{
  int i; // [sp+Ch] [bp-8h]

  if ( !dword_B382C )
    return -1;
  for ( i = 0; i <= 5; ++i )
  {
    if ( dword_B3930[3 * i] == a1 )
      return dword_B3930[3 * i + 2];
  }
  return -1;
}
