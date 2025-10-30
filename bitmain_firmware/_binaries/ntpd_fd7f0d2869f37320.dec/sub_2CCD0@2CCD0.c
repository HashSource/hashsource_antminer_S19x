void *__fastcall sub_2CCD0(_QWORD *a1)
{
  void *result; // r0

  result = memset(a1 + 8, 255, sizeof(_QWORD));
  a1[7] = -1;
  a1[6] = -1;
  a1[5] = -1;
  return result;
}
