int __fastcall sub_6266C(int a1, int a2)
{
  int i; // [sp+1Ch] [bp-8h]

  if ( a2 <= 1 || a2 > 256 )
    return 0;
  for ( i = 0; i < a2; ++i )
  {
    round();
    *(_BYTE *)(a1 + i) = (unsigned int)((double)i * (255.0 / (double)(a2 - 1)));
  }
  return 1;
}
