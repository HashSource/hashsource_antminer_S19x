int __fastcall sub_B6040(int a1, char *a2, signed int a3)
{
  char *v3; // r6
  signed int *v5; // r4
  int v6; // r7
  signed int v8; // r3
  size_t v9; // r10
  void *v10; // r0
  bool v11; // zf
  size_t v12; // r3
  int v13; // r0
  int v14; // r10
  _BOOL4 v15; // r0
  int v17; // r0
  int v18; // r4
  _BOOL4 v19; // r0

  v3 = a2;
  if ( !a2 )
    return 0;
  v5 = *(signed int **)(a1 + 36);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(a1 + 40);
  if ( v6 )
  {
    v6 = 0;
    sub_B66FC(a1, 15);
    v8 = v5[3];
    while ( 1 )
    {
      v9 = a3;
      if ( a3 >= v8 )
        v9 = v8;
      v10 = v3;
      if ( v8 )
      {
        v6 += v9;
        v3 += v9;
        memcpy(v10, (const void *)(v5[2] + v5[4]), v9);
        v11 = a3 == v9;
        a3 -= v9;
        v12 = v5[3] - v9;
        v5[4] += v9;
        v5[3] = v12;
        if ( v11 )
          break;
      }
      if ( a3 > *v5 )
      {
        while ( 1 )
        {
          v17 = sub_B6740(*(_DWORD *)(a1 + 40), v3, a3);
          v18 = v17;
          v3 += v17;
          if ( v17 <= 0 )
            break;
          v11 = a3 == v17;
          v6 += v17;
          a3 -= v17;
          if ( v11 )
            return v6;
        }
        sub_B724C(a1);
        v19 = v18 == 0;
        if ( v6 > 0 )
          v19 = 1;
        if ( v19 )
          return v6;
        else
          return v18;
      }
      v13 = sub_B6740(*(_DWORD *)(a1 + 40), v5[2], *v5);
      v14 = v13;
      v8 = v13;
      if ( v13 <= 0 )
      {
        sub_B724C(a1);
        v15 = v14 == 0;
        if ( v6 > 0 )
          v15 = 1;
        if ( v15 )
          return v6;
        else
          return v14;
      }
      v5[4] = 0;
      v5[3] = v13;
    }
  }
  return v6;
}
