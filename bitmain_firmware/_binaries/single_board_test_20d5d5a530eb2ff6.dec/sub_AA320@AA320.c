bool __fastcall sub_AA320(int a1, char *a2)
{
  int *v3; // r0
  int v5; // r0

  v3 = *(int **)(a1 + 12);
  if ( v3 )
    v5 = sub_86528(v3, a2);
  else
    v5 = 1;
  if ( *(_DWORD *)(a1 + 16) )
    v5 = sub_86584(*(int **)(a1 + 16), a2);
  return v5 > 0;
}
