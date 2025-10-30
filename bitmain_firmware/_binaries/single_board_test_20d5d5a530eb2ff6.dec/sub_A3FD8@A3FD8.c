int __fastcall sub_A3FD8(_DWORD *a1, int *a2, int a3)
{
  int v3; // r3
  unsigned int *v5; // r2
  int *v6; // r1

  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 2) == 0 )
    return 1;
  if ( !a1[257] )
    return 0;
  v3 = a1[31];
  if ( a3 )
  {
    v5 = (unsigned int *)(v3 + 628);
    v6 = (int *)(v3 + 620);
  }
  else
  {
    v5 = (unsigned int *)(v3 + 624);
    v6 = (int *)(v3 + 616);
  }
  return sub_A3F08(a2, v6, v5);
}
