int __fastcall sub_1561BC(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r9
  int v7; // r9
  int v8; // r9
  int v9; // r9
  int v10; // r9
  int v11; // r9
  int v12; // r1
  int v13; // r2
  int v14; // r3
  _DWORD *v15; // r10
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  _BYTE v26[15]; // [sp+0h] [bp-110h] BYREF
  _BYTE v27[64]; // [sp+40h] [bp-D0h] BYREF
  _DWORD v28[16]; // [sp+80h] [bp-90h] BYREF
  _DWORD v29[21]; // [sp+C0h] [bp-50h] BYREF

  v29[20] = a4;
  v6 = 4;
  sub_17BE0C(v28);
  sub_17B628(v27, a2, v28);
  sub_17BE0C(v28);
  sub_17B628(v27, a2, v28);
  sub_17BE0C(v28);
  sub_17BE0C(v26);
  sub_17BE0C(v28);
  sub_17B628(v29, v27, v28);
  sub_17BE0C(v28);
  sub_17BE0C(v26);
  sub_17BE0C(v28);
  sub_17B628(v29, v27, v28);
  sub_17BE0C(v27);
  do
  {
    sub_17BE0C(v26);
    sub_17BE0C(v27);
    --v6;
  }
  while ( v6 );
  v7 = 8;
  sub_17B628(v28, v29, v27);
  sub_17BE0C(v29);
  sub_17B628(v27, a2, v29);
  sub_17BE0C(v26);
  sub_17BE0C(v29);
  do
  {
    sub_17BE0C(v26);
    sub_17BE0C(v29);
    --v7;
  }
  while ( v7 );
  v8 = 18;
  sub_17B628(v27, v28, v29);
  sub_17BE0C(v29);
  do
  {
    sub_17BE0C(v26);
    sub_17BE0C(v29);
    --v8;
  }
  while ( v8 );
  v9 = 18;
  sub_17B628(v28, v27, v29);
  sub_17BE0C(v29);
  do
  {
    sub_17BE0C(v26);
    sub_17BE0C(v29);
    --v9;
  }
  while ( v9 );
  v10 = 55;
  sub_17B628(v28, v27, v29);
  sub_17BE0C(v29);
  do
  {
    sub_17BE0C(v26);
    sub_17BE0C(v29);
    --v10;
  }
  while ( v10 );
  v11 = 111;
  sub_17B628(v27, v28, v29);
  sub_17BE0C(v29);
  sub_17B628(v28, a2, v29);
  sub_17BE0C(v29);
  do
  {
    sub_17BE0C(v26);
    sub_17BE0C(v29);
    --v11;
  }
  while ( v11 );
  sub_17B628(v28, v27, v29);
  sub_17BE0C(v27);
  sub_17B628(v29, v27, a2);
  v12 = v28[1];
  v13 = v28[2];
  v14 = v28[3];
  *a1 = v28[0];
  a1[1] = v12;
  a1[2] = v13;
  a1[3] = v14;
  v15 = a1 + 4;
  v16 = v28[5];
  v17 = v28[6];
  v18 = v28[7];
  *v15 = v28[4];
  v15[1] = v16;
  v15[2] = v17;
  v15[3] = v18;
  v15 += 4;
  v19 = v28[9];
  v20 = v28[10];
  v21 = v28[11];
  *v15 = v28[8];
  v15[1] = v19;
  v15[2] = v20;
  v15[3] = v21;
  v15 += 4;
  v22 = v28[13];
  v23 = v28[14];
  v24 = v28[15];
  *v15 = v28[12];
  v15[1] = v22;
  v15[2] = v23;
  v15[3] = v24;
  return sub_156154(v29, dword_1DBAB0, v23, v24);
}
