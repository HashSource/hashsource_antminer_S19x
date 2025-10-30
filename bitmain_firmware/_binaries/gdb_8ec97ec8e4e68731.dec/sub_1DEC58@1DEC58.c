int __fastcall sub_1DEC58(int result, int **a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int *v7; // r8
  int v9; // r10
  unsigned int v10; // r9
  int v11; // r1
  int v12; // r7
  int v13; // t1
  int v14; // r4
  _BOOL4 v15; // r2
  int v16; // r6
  unsigned int v17; // r5
  int v18; // r8
  int v19; // r3
  int v20; // r11
  int v21; // r7
  bool v22; // zf
  int v23; // r2
  unsigned int v24; // [sp+8h] [bp-1Ch]
  int v26; // [sp+14h] [bp-10h]
  int *v28; // [sp+1Ch] [bp-8h]

  v7 = *a2;
  if ( !**a2 )
    return result;
  v9 = result;
  v10 = 0;
  v11 = **a2;
  while ( 1 )
  {
LABEL_8:
    v14 = v7[1];
    v12 = v7[2];
    v15 = v14 != -1;
    if ( v12 )
      v15 = 0;
    if ( v15 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v9 + 20) + 4 * v14);
      if ( a4 == -1 )
        goto LABEL_13;
      goto LABEL_4;
    }
    if ( v14 != -1 )
      break;
LABEL_6:
    v10 += v12 * v11;
LABEL_7:
    v13 = v7[3];
    v7 += 3;
    v11 = v13;
    if ( !v13 )
      return result;
  }
  if ( a4 != -1 )
  {
LABEL_4:
    if ( v14 <= a4 && v14 + v11 > a4 )
    {
      if ( v10 + v12 * (a4 - v14) + v12 <= a7 )
      {
        if ( !a6 )
          JUMPOUT(0x1DE920);
        JUMPOUT(0x1DEB38);
      }
      return result;
    }
    goto LABEL_6;
  }
LABEL_13:
  v16 = v10 + v12;
  if ( a7 < v10 + v12 )
    goto LABEL_7;
  v28 = v7;
  v17 = v10 + v12;
  v18 = v11 - 1 + v14;
  v19 = a6;
  v26 = a5 - v12;
  v20 = v12;
  v21 = v19;
  while ( 1 )
  {
    v24 = v17;
    if ( !v21 )
      break;
    result = ((int (__fastcall *)(int, int, unsigned int))loc_1DEB38)(v9, v14, v21 + v10 - v16 + v17);
    v22 = v14++ == v18;
    if ( v22 )
      goto LABEL_22;
LABEL_16:
    v17 += v20;
    if ( v17 > a7 )
    {
      v7 = v28;
      a6 = v21;
      v10 = v24;
      goto LABEL_7;
    }
  }
  v23 = v26 + v17;
  if ( !a5 )
    v23 = 0;
  result = ((int (__fastcall *)(int, int, int))loc_1DE920)(a3, v14, v23);
  v22 = v14++ == v18;
  if ( !v22 )
    goto LABEL_16;
LABEL_22:
  a6 = v21;
  v10 = v17;
  v7 = v28 + 3;
  v11 = v28[3];
  if ( v11 )
    goto LABEL_8;
  return result;
}
