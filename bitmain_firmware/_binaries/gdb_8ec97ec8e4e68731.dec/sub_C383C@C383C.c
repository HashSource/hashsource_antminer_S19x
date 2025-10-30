bool __fastcall sub_C383C(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r1
  int v6; // r0
  int *v7; // r12
  int *v8; // r3
  int v9; // t1
  bool v10; // zf

  if ( *a4 != 1 )
    return 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = a4[1];
  v7 = *(int **)(v5 + 140);
  v8 = *(int **)(v5 + 136);
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *v8++;
      if ( v6 == v9 )
        break;
      if ( v7 == v8 )
        return 0;
    }
    return 1;
  }
  if ( *(_BYTE *)(v5 + 148) )
    return 1;
  v10 = v6 == 5;
  if ( v6 != 5 )
    v10 = v6 == 2;
  return !v10;
}
