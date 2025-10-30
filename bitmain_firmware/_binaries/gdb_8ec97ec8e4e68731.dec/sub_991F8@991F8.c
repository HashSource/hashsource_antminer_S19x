_BYTE *__fastcall sub_991F8(unsigned __int8 *a1, _BYTE *a2, int a3)
{
  unsigned __int8 *v3; // r4
  int v4; // r0
  _BYTE *v6; // r8
  _BYTE *v7; // r5
  char v8; // r6
  _BYTE *v9; // r2

  if ( a3 <= 0 )
    return 0;
  v3 = a1;
  v4 = *a1;
  if ( !v4 )
    return 0;
  if ( !v3[1] )
    return (_BYTE *)v3[1];
  v6 = &a2[a3];
  v7 = a2;
  do
  {
    v8 = sub_990E4(v4);
    *v7++ = sub_990E4(v3[1]) + 16 * v8;
    v9 = (_BYTE *)(v7 - a2);
    if ( v7 == v6 )
      break;
    v4 = v3[2];
    v3 += 2;
    if ( !v4 )
      break;
  }
  while ( v3[1] );
  return v9;
}
