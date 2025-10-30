int __fastcall sub_14B04(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // lr
  _BYTE *v4; // r2
  int v6; // [sp+4h] [bp-4h]

  if ( !a1 || *a1 != 1114990113 )
    sub_10C38();
  v2 = a1[3];
  if ( (unsigned int)(v2 + 4) > a1[2] )
    sub_10C38();
  v3 = a1[1];
  a1[3] = v2 + 4;
  v4 = (_BYTE *)(v3 + v2);
  *(_BYTE *)(v3 + v2) = HIBYTE(a2);
  v4[3] = a2;
  v4[1] = BYTE2(a2);
  v4[2] = BYTE1(a2);
  return v6;
}
