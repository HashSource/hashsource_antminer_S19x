int __fastcall sub_18590(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r3

  v2 = 0;
  while ( 1 )
  {
    v3 = sub_179C4();
    if ( v2 >= v3 )
      break;
    v4 = *(_DWORD *)(dword_B3C4C + 4 * v2++);
    if ( v4 == a1 && sub_26AC4(v3) )
      return 1;
  }
  return 0;
}
