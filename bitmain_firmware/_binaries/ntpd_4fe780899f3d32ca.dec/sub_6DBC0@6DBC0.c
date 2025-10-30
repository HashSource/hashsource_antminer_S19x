int *__fastcall sub_6DBC0(int *result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r4
  bool v4; // cf
  int v5; // r3
  int v6; // r1

  v3 = a3[1];
  v4 = *a2 >= *a3;
  v5 = *a2 - *a3;
  v6 = a2[1];
  *result = v5;
  result[1] = v6 - (v3 + !v4);
  return result;
}
