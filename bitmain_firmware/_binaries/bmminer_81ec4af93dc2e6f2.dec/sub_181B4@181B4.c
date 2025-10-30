int __fastcall sub_181B4(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r3

  v2 = 0;
  while ( 1 )
  {
    v3 = sub_17674();
    if ( v3 <= v2 )
      break;
    v4 = *(_DWORD *)(dword_B0EDC + 4 * v2++);
    if ( v4 == a1 && sub_265C0(v3) )
      return 1;
  }
  return 0;
}
