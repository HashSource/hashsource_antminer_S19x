int __fastcall sub_13E794(int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v7; // r6
  int v8; // r5
  int v9; // lr
  int v10; // r5
  int v11; // r6
  int v12; // r3
  unsigned int v13; // r6
  int v14; // r5
  int v15; // r6
  unsigned int v16; // r5
  int v17; // r3
  int v18; // r5
  unsigned int v19; // r6
  int v20; // r3
  unsigned int v21; // r2
  int v22; // r3
  int result; // r0
  unsigned int v24; // r3
  int v25; // r2
  int v26; // r1
  unsigned int v27; // r2
  int v28; // r3
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r3
  unsigned int v33; // r2
  int v34; // r1

  v7 = a1[1];
  v8 = (*a1 ^ (v7 >> 4)) & 0xF0F0F0F;
  v9 = v7 ^ (16 * v8);
  v10 = *a1 ^ v8;
  v11 = (unsigned __int16)(v9 ^ HIWORD(v10));
  v12 = v10 ^ (v11 << 16);
  v13 = v9 ^ v11;
  v14 = (v12 ^ (v13 >> 2)) & 0x33333333;
  v15 = v13 ^ (4 * v14);
  v16 = v14 ^ v12;
  v17 = (v15 ^ (v16 >> 8)) & 0xFF00FF;
  v18 = v16 ^ (v17 << 8);
  v19 = v15 ^ v17;
  v20 = (v18 ^ (v19 >> 1)) & 0x55555555;
  *a1 = v18 ^ v20;
  a1[1] = v19 ^ (2 * v20);
  sub_13D83C(a1, a2, 1);
  sub_13D83C(a1, a3, 0);
  sub_13D83C(a1, a4, 1);
  v21 = a1[1];
  v22 = (*a1 ^ (v21 >> 1)) & 0x55555555;
  result = v21 ^ (2 * v22);
  v24 = v22 ^ *a1;
  v25 = (result ^ (v24 >> 8)) & 0xFF00FF;
  v26 = v24 ^ (v25 << 8);
  v27 = v25 ^ result;
  v28 = (v26 ^ (v27 >> 2)) & 0x33333333;
  v29 = v27 ^ (4 * v28);
  v30 = v28 ^ v26;
  v31 = (unsigned __int16)(v29 ^ HIWORD(v30));
  v32 = v30 ^ (v31 << 16);
  v33 = v29 ^ v31;
  v34 = (v32 ^ (v33 >> 4)) & 0xF0F0F0F;
  *a1 = v32 ^ v34;
  a1[1] = v33 ^ (16 * v34);
  return result;
}
