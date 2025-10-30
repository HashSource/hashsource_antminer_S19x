int __fastcall sub_B2A38(int **a1, int a2, int a3, int a4)
{
  int v4; // r3
  int v5; // r0
  int v6; // r3

  v4 = *(_DWORD *)(a4 + 20);
  v5 = **a1;
  if ( (v4 & 1) != 0 && !v5 )
    return -1;
  v6 = v4 & 2;
  if ( v6 )
  {
    if ( v5 >= 0 )
    {
      v6 = 0;
    }
    else
    {
      v5 = -v5;
      v6 = 1;
    }
  }
  return sub_127724(a2, a2, v5, 0, v6);
}
