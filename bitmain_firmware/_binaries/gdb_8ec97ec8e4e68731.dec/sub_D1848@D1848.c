int __fastcall sub_D1848(int a1, int a2, unsigned int a3)
{
  int *v3; // r4

  v3 = *(int **)(a1 + 28);
  if ( !v3 )
    return 0;
  while ( !*((_BYTE *)v3 + 39) || !sub_CF3F0(v3, a2, a3) )
  {
    v3 = (int *)*v3;
    if ( !v3 )
      return 0;
  }
  return 1;
}
