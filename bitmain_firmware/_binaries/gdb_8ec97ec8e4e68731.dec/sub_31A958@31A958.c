_DWORD *__fastcall sub_31A958(_DWORD *a1)
{
  unsigned __int8 *v1; // r3
  unsigned int v3; // r4
  unsigned int v4; // r7
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char *v8; // r0
  char **v9; // r5
  unsigned int v10; // lr
  bool v11; // cc
  _DWORD *result; // r0
  unsigned int v13; // r0
  int v14; // r3
  _DWORD *v15; // r0
  int v16; // r3
  _DWORD *v17; // r1
  int v18; // r12
  bool v19; // zf
  int v20; // r4
  _DWORD *v21; // r0
  __int64 v22; // r2
  int v23; // r1

  v1 = (unsigned __int8 *)a1[3];
  v3 = *v1;
  if ( !*v1 || (a1[3] = v1 + 1, v3 = *v1, !v1[1]) )
  {
    v4 = 0;
LABEL_4:
    v5 = 67;
    v6 = 0;
    while ( 1 )
    {
      v7 = v6 + (v5 - v6) / 2;
      v8 = (&off_433698)[4 * v7];
      v9 = &(&off_433698)[4 * v7];
      v10 = (unsigned __int8)*v8;
      v11 = v10 > v3;
      if ( v10 == v3 )
      {
        v13 = (unsigned __int8)v8[1];
        v11 = v13 > v4;
        if ( v13 == v4 )
          break;
      }
      if ( v11 )
        v5 = v6 + (v5 - v6) / 2;
      else
        v6 = v7 + 1;
      if ( v6 == v5 )
        return 0;
    }
    v14 = a1[5];
    if ( v14 < a1[6] )
    {
      result = (_DWORD *)(a1[4] + 16 * v14);
      result[1] = 0;
      a1[5] = v14 + 1;
      *result = 49;
      result[2] = v9;
      return result;
    }
    return 0;
  }
  a1[3] = v1 + 2;
  v4 = v1[1];
  if ( v3 == 118 )
  {
    if ( (unsigned __int8)(v4 - 48) > 9u )
      goto LABEL_4;
    v15 = sub_314170((int)a1);
    v16 = a1[5];
    v17 = v15;
    if ( v16 >= a1[6] )
      return 0;
    v18 = a1[4];
    v19 = v15 == 0;
    result = (_DWORD *)(v18 + 16 * v16);
    result[1] = 0;
    a1[5] = v16 + 1;
    if ( v19 )
      return 0;
    result[1] = 0;
    *(_DWORD *)(v18 + 16 * v16) = 50;
    result[2] = v4 - 48;
    result[3] = v17;
  }
  else
  {
    v19 = v3 == 99;
    if ( v3 == 99 )
      v19 = v4 == 118;
    if ( !v19 )
      goto LABEL_4;
    v20 = a1[13];
    a1[13] = a1[12] == 0;
    v21 = sub_319DD0((int)a1);
    HIDWORD(v22) = a1[13];
    LODWORD(v22) = v21;
    if ( HIDWORD(v22) )
    {
      HIDWORD(v22) = 0;
      v23 = 52;
    }
    else
    {
      v23 = 51;
    }
    result = (_DWORD *)sub_313728(a1, v23, v22);
    a1[13] = v20;
  }
  return result;
}
