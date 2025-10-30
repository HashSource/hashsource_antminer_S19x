int __fastcall sub_2B2864(int a1, int a2, int a3)
{
  int v3; // r3

  v3 = *(unsigned __int8 *)(a3 + 4);
  if ( v3 == 22 )
    return 4;
  if ( *(unsigned __int8 *)(a3 + 4) <= 0x16u )
  {
    if ( v3 == 20 )
      return 2;
  }
  else
  {
    if ( v3 == 23 )
      return 1;
    if ( v3 == 160 )
      return 3;
  }
  return 0;
}
