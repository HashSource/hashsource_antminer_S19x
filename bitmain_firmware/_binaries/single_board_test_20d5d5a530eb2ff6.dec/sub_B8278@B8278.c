int *__fastcall sub_B8278(int *result, int *a2)
{
  int v2; // r12
  int v3; // r8
  int v4; // r6
  int v5; // r5
  int v6; // lr
  int v7; // r4
  int v8; // r7
  int v9; // r2
  int v10; // r3
  int v11; // r6

  v2 = a2[4] & 0xE;
  v3 = result[4] & 1;
  v4 = a2[1];
  v5 = *result;
  v6 = result[4] & 0xE | a2[4] & 1;
  *result = *a2;
  v7 = a2[2];
  v8 = result[1];
  v9 = result[3];
  result[1] = v4;
  v10 = a2[3];
  v11 = result[2];
  result[2] = v7;
  result[3] = v10;
  *a2 = v5;
  a2[1] = v8;
  a2[2] = v11;
  a2[3] = v9;
  result[4] = v3 | v2;
  a2[4] = v6;
  return result;
}
