_DWORD *__fastcall sub_326B88(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = sub_93028(0x1Cu);
  result[1] = a1;
  result[2] = a2;
  result[3] = a3;
  result[4] = sub_326A20;
  result[5] = j_free;
  *result = 0;
  result[6] = 0;
  return result;
}
