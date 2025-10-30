int __fastcall sub_15BE70(int a1, int a2, int a3, _DWORD *a4)
{
  int v8; // r11
  int v9; // r0
  int v10; // r9
  int result; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r1
  int *v16; // r6
  int v17; // r0
  int v18; // r4
  int *v19; // r0
  int v20; // r4
  int v21; // r5

  v8 = sub_B66C8(a1);
  v9 = sub_B7170(a1);
  if ( !v8 )
    return 0;
  if ( a2 != 12 )
  {
    v10 = v9;
    if ( a2 > 12 )
    {
      if ( a2 == 101 )
      {
        sub_B66FC(a1, 15);
        v21 = sub_B6ECC(v10, 101, a3, (int)a4);
        sub_B724C(a1);
        return v21;
      }
      if ( a2 > 101 )
      {
        if ( a2 == 113 )
          return *(_DWORD *)(v8 + 16);
        if ( a2 == 129 )
        {
          *a4 = *(_DWORD *)(v8 + 20);
          sub_B66CC(a1, 1);
          return 1;
        }
        return sub_B6ECC(v10, a2, a3, (int)a4);
      }
      if ( a2 != 13 )
        return sub_B6ECC(v10, a2, a3, (int)a4);
LABEL_19:
      v12 = *(_DWORD *)(v8 + 4);
      if ( *(_DWORD *)v8 - v12 > 0 )
        return *(_DWORD *)v8 - v12;
LABEL_21:
      v13 = (int)a4;
      v14 = a3;
      v15 = a2;
      return sub_B6ECC(v9, v15, v14, v13);
    }
    if ( a2 == 2 )
    {
      if ( *(int *)(v8 + 8) <= 0 )
        return 1;
      goto LABEL_21;
    }
    if ( a2 > 2 )
    {
      if ( a2 != 10 )
      {
        if ( a2 != 11 )
          return sub_B6ECC(v10, a2, a3, (int)a4);
        while ( 1 )
        {
          while ( *(_DWORD *)v8 != *(_DWORD *)(v8 + 4) )
          {
            result = sub_15BD44(a1, 0, 0);
            if ( result < 0 )
              return result;
          }
          if ( *(_DWORD *)(v8 + 12) )
            break;
          *(_DWORD *)(v8 + 12) = 1;
          *(_DWORD *)(v8 + 4) = 0;
          result = sub_D83A0(*(_DWORD **)(v8 + 20), v8 + 32, (int *)v8);
          *(_DWORD *)(v8 + 16) = result;
          if ( result <= 0 )
            return result;
        }
        v13 = (int)a4;
        v14 = a3;
        v9 = v10;
        v15 = 11;
        return sub_B6ECC(v9, v15, v14, v13);
      }
      goto LABEL_19;
    }
    if ( a2 != 1 )
      return sub_B6ECC(v10, a2, a3, (int)a4);
    v16 = *(int **)(v8 + 20);
    *(_DWORD *)(v8 + 16) = 1;
    *(_DWORD *)(v8 + 12) = 0;
    v17 = sub_D8924((int)v16);
    if ( sub_D8440(v16, 0, 0, 0, 0, v17) )
      return sub_B6ECC(v10, a2, a3, (int)a4);
    return 0;
  }
  v18 = sub_B66C8((int)a4);
  v19 = (int *)sub_D7A5C();
  *(_DWORD *)(v18 + 20) = v19;
  if ( !v19 )
    return 0;
  result = sub_D8804(v19, *(const void ***)(v8 + 20));
  v20 = result;
  if ( result )
  {
    sub_B66CC((int)a4, 1);
    return v20;
  }
  return result;
}
