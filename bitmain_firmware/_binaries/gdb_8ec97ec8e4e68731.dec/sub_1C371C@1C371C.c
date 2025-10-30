_DWORD *__fastcall sub_1C371C(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v7; // r1

  *a1 = a2;
  v7 = sub_93028(16 * (a2 + 2));
  a1[1] = v7;
  *v7 = a3;
  v7[1] = a4;
  a1[2] = 0;
  return a1;
}
