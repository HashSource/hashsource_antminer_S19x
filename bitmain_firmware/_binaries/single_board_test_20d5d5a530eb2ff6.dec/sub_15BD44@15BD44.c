int __fastcall sub_15BD44(int a1, char *a2, int a3)
{
  int v6; // r4
  int v7; // r0
  bool v8; // zf
  int v9; // r3
  int v11; // r5
  int v12; // r1
  int v13; // r9
  int v14; // r0
  bool v15; // cc
  int v16; // r3
  int v17; // r9
  char *v18; // r11
  signed int v19; // r7
  int v20; // r6
  int i; // r1
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r10
  int v26; // [sp+8h] [bp-Ch]
  int v27; // [sp+8h] [bp-Ch]

  v6 = sub_B66C8(a1);
  v7 = sub_B7170(a1);
  v8 = v7 == 0;
  if ( v7 )
    v8 = v6 == 0;
  if ( v8 )
    return 0;
  v11 = v7;
  sub_B66FC(a1, 15);
  v12 = *(_DWORD *)(v6 + 4);
  v13 = *(_DWORD *)v6 - v12;
  if ( v13 <= 0 )
  {
LABEL_12:
    v15 = (int)a2 <= 0;
    if ( a2 )
      v15 = a3 <= 0;
    v16 = v15;
    if ( !v15 )
    {
      v17 = a3;
      v18 = a2;
      *(_DWORD *)(v6 + 4) = v16;
      v27 = a1;
      while ( 1 )
      {
        v19 = v17;
        if ( v17 >= 4096 )
          v19 = 4096;
        if ( !sub_D8188(*(_DWORD **)(v6 + 20), v6 + 32, (int *)v6, v18, v19) )
        {
          sub_B66FC(v27, 15);
          v9 = 0;
          *(_DWORD *)(v6 + 16) = 0;
          return v9;
        }
        v20 = *(_DWORD *)v6;
        v17 -= v19;
        v18 += v19;
        *(_DWORD *)(v6 + 4) = 0;
        if ( v20 > 0 )
          break;
LABEL_30:
        *(_DWORD *)v6 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( v17 <= 0 )
        {
          sub_B724C(v27);
          return a3;
        }
      }
      for ( i = v6 + 32; ; i = v6 + v23 )
      {
        v24 = sub_B69CC(v11, i, v20);
        v20 -= v24;
        if ( v24 <= 0 )
          break;
        v22 = v24 + *(_DWORD *)(v6 + 4);
        *(_DWORD *)(v6 + 4) = v22;
        v23 = v22 + 32;
        if ( v20 <= 0 )
          goto LABEL_30;
      }
      v25 = v24;
      sub_B724C(v27);
      if ( a3 == v17 )
        return v25;
      else
        return a3 - v17;
    }
    return 0;
  }
  while ( 1 )
  {
    v14 = sub_B69CC(v11, v12 + 32 + v6, v13);
    v13 -= v14;
    if ( v14 <= 0 )
      break;
    v12 = *(_DWORD *)(v6 + 4) + v14;
    *(_DWORD *)(v6 + 4) = v12;
    if ( v13 <= 0 )
      goto LABEL_12;
  }
  v26 = v14;
  sub_B724C(a1);
  return v26;
}
