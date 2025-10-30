int __fastcall sub_C43C8(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r1
  int *v6; // r2
  int *v7; // r1
  int v8; // r0
  int *v9; // r3
  int v10; // t1

  if ( (unsigned int)(*a4 - 8) > 1 )
    return 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(int **)(v5 + 136);
  v7 = *(int **)(v5 + 140);
  if ( v7 != v6 )
  {
    v8 = a4[1];
    v9 = v6;
    while ( 1 )
    {
      v10 = *v9++;
      if ( v8 == v10 )
        break;
      if ( v7 == v9 )
        return 0;
    }
  }
  return 1;
}
