int __fastcall sub_6C60C(int *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v9; // [sp+0h] [bp-4Ch] BYREF
  _BYTE v10[24]; // [sp+4h] [bp-48h] BYREF
  _DWORD v11[10]; // [sp+1Ch] [bp-30h] BYREF

  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  v5 = *a1;
  memset(&v11[7], 0, 12);
  v11[0] = v5;
  v11[1] = v2;
  v11[2] = v3;
  v11[3] = v4;
  v6 = a1[5];
  v7 = a1[6];
  v11[4] = a1[4];
  v11[5] = v6;
  v11[6] = v7;
  sub_74CE8(v10, v11);
  if ( sub_749DC(v10, &v9) )
    return -1;
  else
    return v9;
}
