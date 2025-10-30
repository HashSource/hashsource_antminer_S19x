int __fastcall sub_B6414(int a1, char *a2, signed int a3)
{
  _DWORD *v3; // r6
  int v7; // r9
  signed int v8; // r3
  int v9; // r2
  int v10; // r1
  int v11; // r0
  signed int v12; // r4
  const void *v13; // r1
  int v14; // r0
  int v15; // r7
  _BOOL4 v16; // r0
  int v18; // r0
  int v19; // r4
  _BOOL4 v20; // r0

  v3 = *(_DWORD **)(a1 + 36);
  if ( !v3 || !*(_DWORD *)(a1 + 40) )
    return 0;
  v7 = 0;
  sub_B66FC(a1, 15);
  v8 = v3[1];
  while ( 1 )
  {
    v9 = v3[6];
    v10 = v3[7];
    v11 = v9 + v10;
    v12 = v8 - (v9 + v10);
    if ( v12 >= a3 )
    {
      memcpy((void *)(v11 + v3[5]), a2, a3);
      v3[6] += a3;
      return a3 + v7;
    }
    if ( v9 )
      break;
LABEL_16:
    v3[7] = 0;
    while ( a3 >= v8 )
    {
      v18 = sub_B69CC(*(_DWORD *)(a1 + 40), a2, a3);
      v19 = v18;
      a2 += v18;
      if ( v18 <= 0 )
      {
        sub_B724C(a1);
        v20 = v7 > 0;
        if ( !v19 )
          v20 = 1;
        if ( v20 )
          return v7;
        else
          return v19;
      }
      a3 -= v18;
      v7 += v18;
      if ( !a3 )
        return v7;
      v8 = v3[1];
    }
  }
  if ( v12 > 0 )
  {
    v13 = a2;
    a3 -= v12;
    v7 += v12;
    a2 += v12;
    memcpy((void *)(v11 + v3[5]), v13, v12);
    v10 = v3[7];
    v9 = v3[6] + v12;
    v3[6] = v9;
  }
  while ( 1 )
  {
    v14 = sub_B69CC(*(_DWORD *)(a1 + 40), v10 + v3[5], v9);
    v15 = v14;
    if ( v14 <= 0 )
      break;
    v9 = v3[6] - v14;
    v10 = v3[7] + v14;
    v3[6] = v9;
    v3[7] = v10;
    if ( !v9 )
    {
      v8 = v3[1];
      goto LABEL_16;
    }
  }
  sub_B724C(a1);
  v16 = v15 == 0;
  if ( v7 > 0 )
    v16 = 1;
  if ( v16 )
    return v7;
  else
    return v15;
}
