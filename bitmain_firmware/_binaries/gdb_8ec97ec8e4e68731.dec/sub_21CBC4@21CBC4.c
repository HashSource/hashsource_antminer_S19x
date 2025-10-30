_DWORD *__fastcall sub_21CBC4(int a1)
{
  int v1; // r0
  _DWORD *v2; // r1
  _DWORD *v3; // r3
  _DWORD *result; // r0

  if ( !a1 )
    return 0;
  v1 = sub_C269C(a1);
  v2 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = (_DWORD *)v2[5];
    if ( v3 )
      break;
LABEL_8:
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      return 0;
  }
  while ( *(_DWORD *)(v3[8] + 8) != v1 )
  {
    v3 = (_DWORD *)*v3;
    if ( !v3 )
      goto LABEL_8;
  }
  result = (_DWORD *)v2[45];
  if ( !result )
    return v2;
  return result;
}
