int __fastcall sub_113BEC(int result, int *a2)
{
  int v2; // r5
  int v3; // r4

  v2 = result;
  if ( result )
  {
    v3 = (int)a2;
    if ( *(int **)(result + 16) != a2 )
    {
      v3 = sub_AE228(a2);
      if ( v3 )
      {
        sub_12AA8C(*(_DWORD *)(v2 + 16));
        *(_DWORD *)(v2 + 16) = v3;
      }
    }
    result = v3;
    if ( v3 )
      return 1;
  }
  return result;
}
