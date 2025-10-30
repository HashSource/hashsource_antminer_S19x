int __fastcall sub_F8B74(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r0
  bool v6; // cc
  int v7; // r1

  v2 = 0;
  sub_B94B4(*(int **)(a1 + 68));
  sub_B94B4(*(int **)(a1 + 72));
  sub_B94B4(*(int **)(a1 + 76));
  while ( 1 )
  {
    v6 = v2 < sub_10C010(*(_DWORD *)(a1 + 48), v3, v4);
    v7 = v2++;
    if ( !v6 )
      break;
    v5 = sub_10C01C(*(_DWORD *)(a1 + 48), v7);
    sub_B94B4(*(int **)(v5 + 16));
  }
  return 1;
}
