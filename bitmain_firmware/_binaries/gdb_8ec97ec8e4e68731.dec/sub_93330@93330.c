_BYTE *__fastcall sub_93330(const void *a1, size_t a2)
{
  void *v4; // r0
  _BYTE *result; // r0

  v4 = sub_93028(a2 + 1);
  result = memcpy(v4, a1, a2);
  result[a2] = 0;
  return result;
}
