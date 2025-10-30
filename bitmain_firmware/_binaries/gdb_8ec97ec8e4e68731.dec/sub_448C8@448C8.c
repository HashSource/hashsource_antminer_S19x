_DWORD *__fastcall sub_448C8(_DWORD *a1, int *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2
  _DWORD *v6; // t0

  v3 = *a2;
  v6 = a2 + 1;
  v4 = a2[1];
  v5 = v6[1];
  *a1 = v3;
  a1[1] = v4;
  a1[2] = v5;
  return a1;
}
