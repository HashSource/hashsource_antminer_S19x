int __fastcall sub_16EB04(char *a1, int a2, char a3)
{
  int *v4; // r5
  int v7; // r0
  int v8; // r4
  int v9; // r4
  int v10; // r0
  bool v11; // cc
  unsigned int v12; // r1
  int v13; // r0
  int v14; // r4
  int v15; // r0
  unsigned int v16; // r1
  unsigned int v18; // r1
  int v19; // r0
  char *v20; // r0
  int v21; // r4
  unsigned int v22; // r1
  int v23; // r0
  char *v24; // r0

  v4 = *(int **)(a2 + 196);
  if ( !v4 )
    goto LABEL_22;
  v7 = v4[1];
  if ( !v7 )
  {
    v13 = *v4;
    if ( !*v4 )
      goto LABEL_22;
    if ( (a3 & 0x10) != 0 )
      goto LABEL_30;
LABEL_10:
    v14 = 0;
    while ( 1 )
    {
      v11 = v14 < sub_10C010(v13);
      v16 = v14++;
      if ( !v11 )
        break;
      v15 = sub_10C01C((_DWORD *)*v4, v16);
      if ( a1 == sub_EAC84(v15) )
        return 1;
      v13 = *v4;
    }
    return 2;
  }
  v8 = a3 & 0x10;
  if ( (a3 & 0x10) == 0 )
  {
    while ( 1 )
    {
      v11 = v8 < sub_10C010(v7);
      v12 = v8++;
      if ( !v11 )
        break;
      v10 = sub_10C01C((_DWORD *)v4[1], v12);
      if ( a1 == sub_EAC84(v10) )
        return 2;
      v7 = v4[1];
    }
    v13 = *v4;
    if ( !*v4 )
      goto LABEL_22;
    goto LABEL_10;
  }
  v9 = 0;
  while ( 1 )
  {
    v11 = v9 < sub_10C010(v7);
    v18 = v9++;
    if ( !v11 )
      break;
    v19 = sub_10C01C((_DWORD *)v4[1], v18);
    v20 = sub_EAC84(v19);
    if ( v20 == a1 || v20 == (char *)910 )
      return 2;
    v7 = v4[1];
  }
  v13 = *v4;
  if ( *v4 )
  {
LABEL_30:
    v21 = 0;
    while ( 1 )
    {
      v11 = v21 < sub_10C010(v13);
      v22 = v21++;
      if ( !v11 )
        break;
      v23 = sub_10C01C((_DWORD *)*v4, v22);
      v24 = sub_EAC84(v23);
      if ( a1 == v24 || v24 == (char *)910 )
        return 1;
      v13 = *v4;
    }
    return 2;
  }
LABEL_22:
  if ( (a3 & 8) != 0 && sub_120C28(a2, -1, 0) == 1 && (a3 & 4) == 0 && (*(_DWORD *)(a2 + 128) & 0x2000) != 0 )
    return 1;
  else
    return 3;
}
