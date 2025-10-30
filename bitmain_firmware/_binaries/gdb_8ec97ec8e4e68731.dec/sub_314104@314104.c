_DWORD *__fastcall sub_314104(_DWORD *a1, int a2, int a3)
{
  int v3; // lr
  int v4; // r5
  _BOOL4 v5; // r12
  _DWORD *v6; // r3
  _DWORD *result; // r0

  v3 = a1[5];
  if ( v3 >= a1[6] )
    return 0;
  v4 = a1[4];
  v5 = !a2 || a3 == 0;
  v6 = (_DWORD *)(v4 + 16 * v3);
  v6[1] = 0;
  a1[5] = v3 + 1;
  if ( v5 )
    return 0;
  v6[1] = 0;
  result = (_DWORD *)(v4 + 16 * v3);
  *result = 0;
  v6[2] = a2;
  v6[3] = a3;
  return result;
}
