int __fastcall sub_BFE38(int a1, int a2, int a3)
{
  if ( a2 )
  {
    sub_B87C8(*(int **)(a1 + 20));
    *(_DWORD *)(a1 + 20) = a2;
  }
  if ( a3 )
  {
    sub_B87C8(*(int **)(a1 + 24));
    *(_DWORD *)(a1 + 24) = a3;
  }
  return 1;
}
