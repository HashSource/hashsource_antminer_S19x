int __fastcall sub_14370(_DWORD *a1, __int16 a2)
{
  int v2; // r2
  int v3; // r3
  int v5; // [sp+4h] [bp-4h]

  if ( !a1 || *a1 != 1114990113 )
    sub_1073C();
  v2 = a1[3];
  if ( (unsigned int)(v2 + 2) > a1[2] )
    sub_1073C();
  v3 = a1[1];
  a1[3] = v2 + 2;
  *(_BYTE *)(v3 + v2) = HIBYTE(a2);
  *(_BYTE *)(v3 + v2 + 1) = a2;
  return v5;
}
