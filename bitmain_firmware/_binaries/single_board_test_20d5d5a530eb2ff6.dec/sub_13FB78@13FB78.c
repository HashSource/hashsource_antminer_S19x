int __fastcall sub_13FB78(int a1, _DWORD *a2)
{
  int v2; // r2
  int v5; // r0
  _DWORD *v6; // r0
  int *v7; // r1

  v2 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 28);
  if ( v2 )
  {
    if ( !v5 )
    {
      v6 = sub_BFD20();
      if ( !v6 )
        return 0;
      goto LABEL_4;
    }
  }
  else if ( !v5 )
  {
    sub_D0048(5, 113, 107, (int)"crypto/dh/dh_pmeth.c", 404);
    return 0;
  }
  v6 = (_DWORD *)sub_13FDF8();
  if ( !v6 )
    return 0;
LABEL_4:
  sub_D9F44(a2, **(_DWORD **)a1, (int)v6);
  v7 = *(int **)(a1 + 8);
  if ( !v7 || sub_D9D74(a2, v7) )
    return sub_BFA94(a2[6]);
  return 0;
}
