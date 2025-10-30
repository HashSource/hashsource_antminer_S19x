int __fastcall sub_DCAD0(int a1)
{
  int v2; // r3
  int *v4; // r0
  int v5; // r0
  int v6; // r0

  sub_D1478(*(int **)(a1 + 8));
  sub_D1478(*(int **)(a1 + 12));
  sub_D1478(*(int **)(a1 + 4));
  v2 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = 0;
  if ( v2 || (v4 = (int *)sub_D14F4(), (*(_DWORD *)(a1 + 8) = v4) != 0) )
  {
    if ( *(_DWORD *)(a1 + 12) || (v5 = sub_D14F4(), (*(_DWORD *)(a1 + 12) = v5) != 0) )
    {
      if ( *(_DWORD *)(a1 + 4) )
        return 1;
      v6 = sub_D14F4();
      *(_DWORD *)(a1 + 4) = v6;
      if ( v6 )
        return 1;
    }
    v4 = *(int **)(a1 + 8);
  }
  sub_D1478(v4);
  sub_D1478(*(int **)(a1 + 12));
  sub_D1478(*(int **)(a1 + 4));
  *(_DWORD *)a1 = 0;
  return 0;
}
