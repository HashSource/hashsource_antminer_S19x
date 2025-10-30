int __fastcall sub_13E85C(int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v8; // r5
  int v9; // r3
  int v10; // r12
  int v11; // r3
  int v12; // r5
  int v13; // lr
  unsigned int v14; // r5
  int v15; // r3
  int v16; // r5
  unsigned int v17; // r3
  int v18; // lr
  int v19; // r3
  unsigned int v20; // r5
  int v21; // lr
  unsigned int v22; // r2
  int v23; // r3
  int result; // r0
  unsigned int v25; // r3
  int v26; // r2
  int v27; // r1
  unsigned int v28; // r2
  int v29; // r3
  int v30; // r2
  int v31; // r3
  int v32; // r1
  int v33; // r3
  unsigned int v34; // r2
  int v35; // r1

  v8 = a1[1];
  v9 = (*a1 ^ (v8 >> 4)) & 0xF0F0F0F;
  v10 = v8 ^ (16 * v9);
  v11 = *a1 ^ v9;
  v12 = (unsigned __int16)(v10 ^ HIWORD(v11));
  v13 = v11 ^ (v12 << 16);
  v14 = v10 ^ v12;
  v15 = (v13 ^ (v14 >> 2)) & 0x33333333;
  v16 = v14 ^ (4 * v15);
  v17 = v13 ^ v15;
  v18 = (v16 ^ (v17 >> 8)) & 0xFF00FF;
  v19 = v17 ^ (v18 << 8);
  v20 = v16 ^ v18;
  v21 = (v19 ^ (v20 >> 1)) & 0x55555555;
  *a1 = v19 ^ v21;
  a1[1] = v20 ^ (2 * v21);
  sub_13D83C(a1, a4, 0);
  sub_13D83C(a1, a3, 1);
  sub_13D83C(a1, a2, 0);
  v22 = a1[1];
  v23 = (*a1 ^ (v22 >> 1)) & 0x55555555;
  result = v22 ^ (2 * v23);
  v25 = v23 ^ *a1;
  v26 = (result ^ (v25 >> 8)) & 0xFF00FF;
  v27 = v25 ^ (v26 << 8);
  v28 = v26 ^ result;
  v29 = (v27 ^ (v28 >> 2)) & 0x33333333;
  v30 = v28 ^ (4 * v29);
  v31 = v29 ^ v27;
  v32 = (unsigned __int16)(v30 ^ HIWORD(v31));
  v33 = v31 ^ (v32 << 16);
  v34 = v30 ^ v32;
  v35 = (v33 ^ (v34 >> 4)) & 0xF0F0F0F;
  *a1 = v33 ^ v35;
  a1[1] = v34 ^ (16 * v35);
  return result;
}
