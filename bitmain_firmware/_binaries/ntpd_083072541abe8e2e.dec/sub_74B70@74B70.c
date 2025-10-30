int __fastcall sub_74B70(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r12
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // t0

  v2 = a1 + 1;
  a1[2] = 0;
  a1[3] = 0;
  a1[1] = 0;
  a1[4] = 0;
  a1[5] = 0;
  *a1 = 10;
  result = *a2;
  v7 = a2 + 1;
  v4 = a2[1];
  v5 = *++v7;
  v6 = v7[1];
  *v2 = result;
  v2[1] = v4;
  v2[2] = v5;
  v2[3] = v6;
  return result;
}
