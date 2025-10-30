_DWORD *__fastcall sub_2DFC4(_DWORD *a1)
{
  _DWORD *result; // r0
  int v3; // r12
  int v4; // r3

  result = sub_2D4D0(0);
  v3 = result[1];
  v4 = result[2];
  *a1 = *result;
  a1[1] = v3;
  a1[2] = v4;
  return result;
}
