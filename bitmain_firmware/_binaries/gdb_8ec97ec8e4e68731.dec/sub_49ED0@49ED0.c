_QWORD *__fastcall sub_49ED0(_QWORD *result)
{
  _DWORD *v1; // r12
  __int64 v2; // r6
  __int64 v3; // r4
  int v4; // r1
  int v5; // r2
  int v6; // r3
  __int64 v7; // r2
  __int64 v8; // r2

  v1 = result;
  v2 = *result;
  v3 = result[1];
  while ( 1 )
  {
    v7 = *((_QWORD *)v1 - 1);
    if ( v7 == v3 )
      break;
    if ( v3 >= v7 )
      goto LABEL_8;
LABEL_3:
    result = (_QWORD *)*(v1 - 4);
    v4 = *(v1 - 3);
    v5 = *(v1 - 2);
    v6 = *(v1 - 1);
    *v1 = result;
    v1[1] = v4;
    v1[2] = v5;
    v1[3] = v6;
    v1 -= 4;
  }
  if ( v3 == v2 )
    goto LABEL_3;
  v8 = *((_QWORD *)v1 - 2);
  if ( v3 != v8 && v2 < v8 )
    goto LABEL_3;
LABEL_8:
  *(_QWORD *)v1 = v2;
  *((_QWORD *)v1 + 1) = v3;
  return result;
}
