_DWORD *__fastcall sub_147C8(_DWORD *result, int a2, int a3, __int16 a4)
{
  int v4; // r1
  int v5; // r12
  int v6; // r1
  int v7; // r12
  _BYTE *v8; // r3

  if ( !result || *result != 1114990113 )
    sub_1073C();
  v4 = result[3];
  if ( (unsigned int)(v4 + 6) > result[2] )
    sub_1073C();
  v5 = result[1];
  result[3] = v4 + 2;
  *(_BYTE *)(v5 + v4) = HIBYTE(a4);
  *(_BYTE *)(v5 + v4 + 1) = a4;
  v6 = result[3];
  v7 = result[1];
  result[3] = v6 + 4;
  v8 = (_BYTE *)(v7 + v6);
  *(_BYTE *)(v7 + v6) = HIBYTE(a3);
  v8[3] = a3;
  v8[1] = BYTE2(a3);
  v8[2] = BYTE1(a3);
  return result;
}
