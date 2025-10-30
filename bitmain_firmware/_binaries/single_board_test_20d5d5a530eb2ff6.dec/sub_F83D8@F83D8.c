int __fastcall sub_F83D8(int a1, int a2, int a3)
{
  int v3; // r3
  bool v4; // zf
  int v5; // r5
  bool v6; // zf

  v3 = *(_DWORD *)(a1 + 28);
  v4 = v3 == 0;
  if ( !v3 )
    v4 = a2 == 0;
  if ( v4 )
    return 0;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = v5 == 0;
  if ( !v5 )
    v6 = a3 == 0;
  if ( v6 )
    return 0;
  if ( a2 )
  {
    sub_B87C8(*(int **)(a1 + 28));
    *(_DWORD *)(a1 + 28) = a2;
    sub_B87B8(a2, 4);
  }
  if ( a3 )
  {
    sub_B87C8(*(int **)(a1 + 32));
    *(_DWORD *)(a1 + 32) = a3;
    sub_B87B8(a3, 4);
  }
  return 1;
}
