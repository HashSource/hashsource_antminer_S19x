int __fastcall sub_159874(int a1, _DWORD *a2)
{
  int *v4; // r7
  int v5; // r0
  _DWORD *v6; // r5
  int *v7; // r1

  v4 = *(int **)(a1 + 20);
  if ( !*(_DWORD *)(a1 + 8) && !*v4 )
  {
    sub_D0048(16, 199, 139, (int)"crypto/ec/ec_pmeth.c", 420);
    return 0;
  }
  v5 = EC_KEY_new();
  v6 = (_DWORD *)v5;
  if ( !v5 )
    return 0;
  if ( sub_D9F44(a2, 408, v5) )
  {
    v7 = *(int **)(a1 + 8);
    if ( v7 )
    {
      if ( !sub_D9D74(a2, v7) )
        return 0;
    }
    else if ( !sub_C59BC(v6, *v4) )
    {
      return 0;
    }
    return sub_C5674(v6);
  }
  else
  {
    sub_C5410((int)v6);
    return 0;
  }
}
