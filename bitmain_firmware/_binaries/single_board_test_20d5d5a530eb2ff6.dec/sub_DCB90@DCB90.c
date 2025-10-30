int __fastcall sub_DCB90(int a1, int a2)
{
  int *v4; // r0
  int v6; // r0
  int v7; // r0

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v4 = (int *)sub_D14F4();
    *(_DWORD *)(a1 + 8) = v4;
    if ( !v4 )
      goto LABEL_6;
  }
  if ( !*(_DWORD *)(a1 + 12) && (v6 = sub_D14F4(), (*(_DWORD *)(a1 + 12) = v6) == 0)
    || !*(_DWORD *)(a1 + 4) && (v7 = sub_D14F4(), (*(_DWORD *)(a1 + 4) = v7) == 0)
    || !sub_D17B4(*(int **)(a1 + 8), *(int **)(a2 + 8))
    || !sub_D17B4(*(int **)(a1 + 12), *(int **)(a2 + 12))
    || !sub_D17B4(*(int **)(a1 + 4), *(int **)(a2 + 4)) )
  {
    v4 = *(int **)(a1 + 8);
LABEL_6:
    sub_D1478(v4);
    sub_D1478(*(int **)(a1 + 12));
    sub_D1478(*(int **)(a1 + 4));
    *(_DWORD *)a1 = 0;
    return 0;
  }
  *(_DWORD *)a1 = *(_DWORD *)a2;
  return 1;
}
