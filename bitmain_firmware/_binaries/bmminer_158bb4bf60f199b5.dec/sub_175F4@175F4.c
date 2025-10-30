_DWORD *__fastcall sub_175F4(_DWORD *result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3

  v1 = *(_DWORD *)(dword_A05E8 + 4);
  v2 = *(_DWORD *)(dword_A05E8 + 8);
  v3 = *(_DWORD *)(dword_A05E8 + 12);
  *result = *(_DWORD *)dword_A05E8;
  result[1] = v1;
  result[2] = v2;
  result[3] = v3;
  return result;
}
