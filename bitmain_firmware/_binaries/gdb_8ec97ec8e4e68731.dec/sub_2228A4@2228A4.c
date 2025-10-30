int __fastcall sub_2228A4(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // r1
  int result; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // [sp+0h] [bp-10h] BYREF
  int v15; // [sp+4h] [bp-Ch]
  int v16; // [sp+8h] [bp-8h]
  int v17; // [sp+Ch] [bp-4h]

  v1 = a1;
  v2 = a1 - 4;
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v14 = *a1;
  v15 = v3;
  v16 = v4;
  v17 = v5;
  while ( 1 )
  {
    v9 = v2;
    v2 -= 4;
    if ( sub_21EFDC(&v14, v9) >= 0 )
      break;
    v1 = v2 + 4;
    v6 = v2[5];
    v7 = v2[6];
    v8 = v2[7];
    v2[8] = v2[4];
    v2[9] = v6;
    v2[10] = v7;
    v2[11] = v8;
  }
  result = v14;
  v11 = v15;
  v12 = v16;
  v13 = v17;
  *v1 = v14;
  v1[1] = v11;
  v1[2] = v12;
  v1[3] = v13;
  return result;
}
