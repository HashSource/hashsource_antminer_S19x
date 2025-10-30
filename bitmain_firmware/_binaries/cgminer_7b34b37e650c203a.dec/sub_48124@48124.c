bool __fastcall sub_48124(int *a1, int *a2)
{
  int v2; // r3
  int v6; // r7
  int v7; // r2
  unsigned int v8; // r6
  int v9; // r1
  bool v10; // zf
  int v11; // r0
  int v12; // r8
  int v13; // r0
  int v14; // r1
  int v15; // r0
  char *v16; // r6
  int v17; // r7
  int v18; // r0
  char *v19; // r1
  int v20; // r6
  size_t v21; // r2

  v2 = *a1;
  if ( *a1 != *a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  switch ( v2 )
  {
    case 0:
      if ( a1[2] != a2[2] )
        return 0;
      v12 = (int)(a1 + 2);
      v13 = sub_45CEC((int)(a1 + 2));
      if ( !v13 )
        return 1;
      while ( 1 )
      {
        v15 = sub_45D7C(v13);
        v16 = (char *)v15;
        if ( !v15 )
          break;
        v17 = v15 - 16;
        v18 = sub_45D84(v15 - 16);
        v19 = v16;
        v20 = v18;
        if ( !v18 )
          break;
        v14 = sub_480FC(a2, v19);
        if ( !v14 || !sub_48124(v20, v14) )
          return 0;
        if ( !*a1 )
        {
          v13 = sub_45D64(v12, v17);
          if ( v13 )
            continue;
        }
        return 1;
      }
      return 1;
    case 1:
      v6 = a1[3];
      if ( v6 != a2[3] )
        return 0;
      if ( !v6 )
        return 1;
      v7 = *a1;
      v8 = 0;
      break;
    case 2:
      v21 = a1[3];
      return v21 == a2[3] && !memcmp((const void *)a1[2], (const void *)a2[2], v21);
    case 3:
      return *((_QWORD *)a1 + 1) == *((_QWORD *)a2 + 1);
    case 4:
      return *((double *)a1 + 1) == *((double *)a2 + 1);
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v2 == 1 && a1[3] > v8 )
      v11 = *(_DWORD *)(a1[4] + 4 * v8);
    else
      v11 = 0;
    if ( v7 != 1 || a2[3] <= v8 )
      return 0;
    v9 = *(_DWORD *)(a2[4] + 4 * v8);
    v10 = v9 == 0;
    if ( v9 )
      v10 = v11 == 0;
    if ( v10 || !sub_48124(v11, v9) )
      return 0;
    if ( v6 == ++v8 )
      break;
    v2 = *a1;
    v7 = *a2;
  }
  return 1;
}
