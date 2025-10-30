int __fastcall sub_C441C(int a1, int a2)
{
  int *v3; // r3
  int *v4; // r0
  int v5; // t1

  if ( *(_UNKNOWN **)(a1 + 4) != &unk_4782B4 || (*(_DWORD *)(a1 + 16) & 0xFFFFFFFD) == 0 )
    return 0;
  v3 = *(int **)(a1 + 136);
  v4 = *(int **)(a1 + 140);
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      v5 = *v3++;
      if ( a2 == v5 )
        break;
      if ( v4 == v3 )
        return 0;
    }
  }
  return 1;
}
