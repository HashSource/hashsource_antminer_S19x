bool __fastcall sub_AA348(int a1, char *a2)
{
  int *v3; // r0
  int v5; // r0

  v3 = *(int **)(a1 + 12);
  if ( v3 )
    v5 = sub_89A04(v3, a2);
  else
    v5 = 1;
  if ( *(_DWORD *)(a1 + 16) )
    v5 = sub_89A78(*(_DWORD *)(a1 + 16), a2);
  return v5 > 0;
}
