_DWORD *__fastcall sub_15F74(_DWORD *result, int *a2)
{
  int v2; // r3
  _DWORD *v3; // r1
  int v4; // t1
  int v5; // lr
  int v6; // r12
  int v7; // r1

  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  *result = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  v2 = *a2;
  *(_WORD *)result = *a2;
  if ( v2 == 2 )
  {
    result[1] = a2[1];
  }
  else if ( v2 == 10 )
  {
    v4 = a2[1];
    v3 = a2 + 1;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    result[2] = v4;
    result[3] = v5;
    result[4] = v6;
    result[5] = v7;
  }
  return result;
}
