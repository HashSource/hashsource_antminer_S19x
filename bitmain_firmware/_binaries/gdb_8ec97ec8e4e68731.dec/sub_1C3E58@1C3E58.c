_BYTE *__fastcall sub_1C3E58(const void *a1, size_t a2)
{
  void *v3; // r3
  _BYTE *result; // r0

  v3 = (void *)dword_487CB8;
  if ( a2 + 1 > dword_487CBC )
  {
    dword_487CBC = a2 + 1;
    v3 = sub_93050((void *)dword_487CB8, a2 + 1);
    dword_487CB8 = (int)v3;
  }
  result = memcpy(v3, a1, a2);
  result[a2] = 0;
  return result;
}
