int __fastcall sub_234484(_DWORD *a1)
{
  _DWORD *v1; // r5
  _DWORD *v2; // r4
  unsigned int v3; // r6
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  unsigned int v11; // t1
  int v13; // [sp+0h] [bp-2Ch]
  int v14; // [sp+4h] [bp-28h]
  int v15; // [sp+8h] [bp-24h]
  int v16; // [sp+Ch] [bp-20h]
  int v17; // [sp+10h] [bp-1Ch]
  int v18; // [sp+14h] [bp-18h]
  int v19; // [sp+18h] [bp-14h]
  int v20; // [sp+1Ch] [bp-10h]
  int v21; // [sp+20h] [bp-Ch]
  int v22; // [sp+24h] [bp-8h]

  v1 = a1;
  v2 = a1 - 10;
  v13 = *a1;
  v3 = *a1;
  v14 = a1[1];
  v15 = a1[2];
  v16 = a1[3];
  v17 = a1[4];
  v18 = a1[5];
  v19 = a1[6];
  v20 = a1[7];
  v21 = a1[8];
  v22 = a1[9];
  if ( *a1 < *(a1 - 10) )
  {
    do
    {
      v4 = v2[1];
      v5 = v2[2];
      v6 = v2[3];
      v1 = v2;
      v2[10] = *v2;
      v2[11] = v4;
      v2[12] = v5;
      v2[13] = v6;
      v7 = v2[5];
      v8 = v2[6];
      v9 = v2[7];
      v2[14] = v2[4];
      v2[15] = v7;
      v2[16] = v8;
      v2[17] = v9;
      v10 = v2[9];
      v2[18] = v2[8];
      v2[19] = v10;
      v11 = *(v2 - 10);
      v2 -= 10;
    }
    while ( v11 > v3 );
  }
  *v1 = v13;
  v1[1] = v14;
  v1[2] = v15;
  v1[3] = v16;
  v1[4] = v17;
  v1[5] = v18;
  v1[6] = v19;
  v1[7] = v20;
  v1[8] = v21;
  v1[9] = v22;
  return v21;
}
