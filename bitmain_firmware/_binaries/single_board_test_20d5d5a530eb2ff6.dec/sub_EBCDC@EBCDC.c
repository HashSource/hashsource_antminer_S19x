bool __fastcall sub_EBCDC(int a1, int *a2, _DWORD *a3)
{
  int v4; // r4

  v4 = *(_DWORD *)(a1 + 4);
  if ( !v4 )
  {
    *a3 = sub_115E5C(*(_DWORD *)(a1 + 8));
    *a2 = 0;
    return *a3 != 0;
  }
  if ( v4 != 1 )
    return 0;
  *a2 = sub_12809C(*(int **)(a1 + 8));
  *a3 = 0;
  return *a2 != 0;
}
