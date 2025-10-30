int __fastcall sub_CA098(int a1, int a2)
{
  int *v4; // r0
  int *v5; // r0
  int v6; // r0
  int v7; // r0

  sub_B94B4(*(int **)(a1 + 80));
  v4 = *(int **)(a1 + 84);
  *(_DWORD *)(a1 + 80) = 0;
  sub_B87C8(v4);
  *(_DWORD *)(a1 + 84) = 0;
  if ( !sub_CBB60(a1, a2) )
    return 0;
  if ( !*(_DWORD *)(a2 + 80) )
  {
LABEL_5:
    v6 = *(_DWORD *)(a2 + 84);
    if ( !v6 )
      return 1;
    v7 = sub_B8A2C(v6);
    *(_DWORD *)(a1 + 84) = v7;
    if ( v7 )
      return 1;
    goto LABEL_9;
  }
  v5 = sub_B9478();
  *(_DWORD *)(a1 + 80) = v5;
  if ( !v5 )
    return 0;
  if ( sub_B9690(v5, *(int **)(a2 + 80)) )
    goto LABEL_5;
LABEL_9:
  sub_B94B4(*(int **)(a1 + 80));
  *(_DWORD *)(a1 + 80) = 0;
  return 0;
}
