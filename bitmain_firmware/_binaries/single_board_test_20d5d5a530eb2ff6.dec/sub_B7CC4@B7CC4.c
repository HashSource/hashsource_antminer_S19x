signed int __fastcall sub_B7CC4(_DWORD *a1, _BYTE *a2, signed int a3)
{
  signed int **v6; // r3
  signed int *v7; // r6
  signed int v8; // r4
  int v9; // r3
  int v10; // r2
  int v11; // t1
  int *v12; // r3
  int v13; // r6
  int v14; // r3
  bool v15; // cc
  signed int v17; // r1
  int v18; // r2

  v6 = (signed int **)a1[9];
  v7 = v6[1];
  if ( (a1[6] & 0x200) != 0 )
    v7 = *v6;
  sub_B66FC((int)a1, 15);
  v8 = *v7;
  if ( *v7 >= a3 )
    v8 = a3 - 1;
  if ( v8 <= 0 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    v9 = 0;
    v10 = v7[1] - 1;
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)++v10;
      if ( v11 == 10 )
        break;
      if ( v8 == ++v9 )
        goto LABEL_9;
    }
    v8 = v9 + 1;
LABEL_9:
    v12 = (int *)a1[9];
    v13 = *v12;
    v14 = v12[1];
    if ( (a1[6] & 0x200) == 0 )
      v13 = v14;
    sub_B66FC((int)a1, 15);
    if ( (unsigned int)v8 >= *(_DWORD *)v13 )
      v8 = *(_DWORD *)v13;
    v15 = (int)a2 <= 0;
    if ( a2 )
      v15 = v8 <= 0;
    if ( !v15 )
    {
      memcpy(a2, *(const void **)(v13 + 4), v8);
      v17 = *(_DWORD *)v13;
      v18 = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v13 + 4) += v8;
      *(_DWORD *)v13 = v17 - v8;
      *(_DWORD *)(v13 + 8) = v18 - v8;
      a2[v8] = 0;
      return v8;
    }
    if ( !*(_DWORD *)v13 )
    {
      v8 = a1[8];
      if ( !v8 )
        return v8;
      sub_B6710((int)a1, 9);
    }
    if ( v8 <= 0 )
      return v8;
    a2[v8] = 0;
    return v8;
  }
}
