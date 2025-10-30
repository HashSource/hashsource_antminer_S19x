_DWORD *__fastcall sub_B8740(_DWORD *result, int *a2, int a3)
{
  int v3; // r5
  int v4; // r6
  int v5; // r4
  unsigned int v6; // r3
  int v7; // r1

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[4] & 0xFFFFFFFE | result[4] & 1;
  v7 = a2[3];
  *result = v3;
  result[1] = v4;
  result[2] = v5;
  result[3] = v7;
  result[4] = a3 | v6 | 2;
  return result;
}
