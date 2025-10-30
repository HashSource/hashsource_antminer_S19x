int __fastcall sub_B6E94(int a1, int a2, int a3)
{
  int v3; // r1
  int v5; // r4

  v3 = a2 & ~(a2 >> 31);
  if ( v3 >= a3 )
    v3 = a3;
  v5 = v3;
  do
  {
    if ( !v5 )
      return 1;
    --v5;
  }
  while ( sub_B6C30(a1, (int)&word_1E1C4C) == 1 );
  return 0;
}
