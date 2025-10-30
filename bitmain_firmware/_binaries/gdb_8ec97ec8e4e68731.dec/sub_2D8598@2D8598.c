int __fastcall sub_2D8598(int a1, int a2, int a3)
{
  int v3; // lr
  _BOOL4 v4; // r3

  v3 = **(_DWORD **)(*(_DWORD *)(a1 + 4) + 444);
  v4 = v3 != a2;
  if ( !v3 )
    v4 = 0;
  if ( !a2 )
    v4 = 0;
  if ( v4 )
    return 0;
  else
    return sub_2A66F4(a1, a2, a3);
}
