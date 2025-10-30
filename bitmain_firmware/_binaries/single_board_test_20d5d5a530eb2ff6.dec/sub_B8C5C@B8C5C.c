int __fastcall sub_B8C5C(_DWORD *a1, int a2)
{
  if ( a2 < 0 )
    return 0;
  if ( a2 >> 6 >= a1[1] )
    return 0;
  *(_DWORD *)(*a1 + 4 * (a2 >> 6)) &= ~(1 << (a2 & 0x3F));
  sub_B8ACC(a1);
  return 1;
}
