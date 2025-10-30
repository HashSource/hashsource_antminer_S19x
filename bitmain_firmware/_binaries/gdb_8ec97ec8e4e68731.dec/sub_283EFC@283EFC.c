bool __fastcall sub_283EFC(_DWORD *a1)
{
  int v2; // r0
  int v4; // r5

  v2 = sub_28B738(a1);
  if ( sub_283BD0((int)a1, v2) )
    return 1;
  v4 = sub_2838F0(a1);
  if ( v4 < 0 )
    return 1;
  sub_28B5D4(a1, 0);
  dword_48ABE4 = 0;
  dword_48AAA0 &= ~0x100u;
  return v4 != 1;
}
