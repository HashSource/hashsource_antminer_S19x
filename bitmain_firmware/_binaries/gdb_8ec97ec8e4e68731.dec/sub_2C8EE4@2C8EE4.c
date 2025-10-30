int __fastcall sub_2C8EE4(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v9; // r1
  int v10; // r12
  int v11; // r6
  int v12; // r11
  int v13; // r1
  int v14; // r0
  int v15; // r7
  int v16; // r1
  int v17; // r9
  int v18; // r0
  int v19; // lr
  int v20; // r12
  int v21; // [sp+14h] [bp-2Ch]
  int v22; // [sp+14h] [bp-2Ch]
  int v23; // [sp+14h] [bp-2Ch]
  _DWORD *v24; // [sp+14h] [bp-2Ch]

  if ( *(_DWORD *)(a2 + 68) )
    return 1;
  v9 = *(_DWORD **)(a2 + 140);
  if ( a4 )
  {
    if ( *(_DWORD *)(a2 + 36) )
    {
      v17 = v9[10];
      v11 = (int)v9;
      if ( v17 )
      {
        v17 = 0;
        v12 = 0;
        v15 = sub_347418(v9[6], v9[10]);
        v20 = 16 * v15;
      }
      else
      {
        v20 = 0;
        v15 = 0;
        v12 = 0;
      }
      goto LABEL_17;
    }
    return 1;
  }
  if ( (*(_DWORD *)(a2 + 20) & 4) == 0 )
    return 1;
  v10 = *(_DWORD *)(a2 + 76);
  if ( !v10 )
    return 1;
  v11 = v9[15];
  v12 = v9[19];
  if ( !v11 || (v13 = *(_DWORD *)(v11 + 40)) == 0 )
  {
    if ( !v12 )
      return 0;
    v16 = *(_DWORD *)(v12 + 40);
    if ( !v16 )
      return 0;
    v15 = 0;
    goto LABEL_11;
  }
  v21 = *(_DWORD *)(a2 + 76);
  v14 = sub_347418(*(_DWORD *)(v11 + 24), v13);
  v15 = v14;
  v10 = v21;
  if ( v12 )
  {
    v16 = *(_DWORD *)(v12 + 40);
    if ( !v16 )
    {
      v17 = 0;
      goto LABEL_12;
    }
LABEL_11:
    v22 = v10;
    v18 = sub_347418(*(_DWORD *)(v12 + 24), v16);
    v10 = v22;
    v17 = v18;
LABEL_12:
    v19 = v17 + v15;
    if ( v10 != v17 + v15 )
      return 0;
    if ( !v11 || *(_QWORD *)(a2 + 88) != *(_QWORD *)(v11 + 16) )
    {
      v20 = 16 * v10;
      if ( *(_QWORD *)(a2 + 88) == *(_QWORD *)(v12 + 16) )
      {
LABEL_17:
        v24 = (_DWORD *)sub_2ACBF4((int)a1, v20);
        if ( !v24 )
          return 0;
        if ( !v11 )
        {
LABEL_20:
          if ( !v12 || sub_2C8CAC(a1, a2, v12, v17, &v24[4 * v15], a3, a4) )
          {
            *(_DWORD *)(a2 + 68) = v24;
            return 1;
          }
          return 0;
        }
        goto LABEL_19;
      }
LABEL_16:
      v23 = v20;
      sub_2A6BBC("elfcode.h", 1524);
      v20 = v23;
      goto LABEL_17;
    }
    goto LABEL_28;
  }
  if ( v21 != v14 )
    return 0;
  if ( *(_QWORD *)(a2 + 88) != *(_QWORD *)(v11 + 16) )
  {
    v20 = 16 * v14;
    v17 = 0;
    goto LABEL_16;
  }
  v19 = v14;
  v17 = 0;
LABEL_28:
  v24 = (_DWORD *)sub_2ACBF4((int)a1, 16 * v19);
  if ( !v24 )
    return 0;
LABEL_19:
  if ( sub_2C8CAC(a1, a2, v11, v15, v24, a3, a4) )
    goto LABEL_20;
  return 0;
}
