int __fastcall sub_31944(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = sub_16F654();
  if ( ((int (__fastcall *)(int))loc_1665F4)(v2) == 32 )
    return a1;
  v3 = sub_16F654();
  return a1 & ~(-1 << ((int (__fastcall *)(int))loc_1665F4)(v3));
}
