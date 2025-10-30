int __fastcall sub_C39AC(int a1)
{
  int v1; // r1
  int v2; // r0
  int *v3; // r2
  int *v4; // r12
  int v5; // t1
  int v7; // r1
  int i; // r3
  bool v9; // zf

  v1 = *(_DWORD *)(a1 + 16);
  v2 = dword_478268;
  v3 = *(int **)(v1 + 136);
  v4 = *(int **)(v1 + 140);
  if ( v4 == v3 )
  {
    v7 = *(unsigned __int8 *)(v1 + 148);
    for ( i = 0; i != 152; ++i )
    {
      if ( v7 )
        goto LABEL_9;
      v9 = i == 5;
      if ( i != 5 )
        v9 = i == 2;
      if ( !v9 )
LABEL_9:
        ++*(_DWORD *)(v2 + 4 * i);
    }
  }
  else
  {
    do
    {
      v5 = *v3++;
      ++*(_DWORD *)(v2 + 4 * v5);
    }
    while ( v4 != v3 );
  }
  sub_189058();
  return 0;
}
