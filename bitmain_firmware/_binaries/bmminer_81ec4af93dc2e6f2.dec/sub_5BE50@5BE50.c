int __fastcall sub_5BE50(int a1, int a2, int a3)
{
  unsigned int i; // [sp+10h] [bp-Ch]
  int v5; // [sp+14h] [bp-8h]

  v5 = 0;
  for ( i = 0; i <= 0x1F && v5 < a3; ++i )
  {
    if ( (a1 & (1 << i)) != 0 )
      *(_BYTE *)(a2 + v5++) = i;
  }
  return v5;
}
