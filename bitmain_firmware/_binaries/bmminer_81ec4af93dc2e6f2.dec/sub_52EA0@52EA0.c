int __fastcall sub_52EA0(int a1, int a2)
{
  int v3; // r4

  if ( !dword_531040 && sub_529AC() )
    return -1;
  v3 = dword_531048;
  *(_DWORD *)(v3 + 4 * sub_52954(a1)) = a2;
  return 0;
}
