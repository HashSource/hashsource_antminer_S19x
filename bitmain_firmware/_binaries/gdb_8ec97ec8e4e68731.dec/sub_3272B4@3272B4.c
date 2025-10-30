void *__fastcall sub_3272B4(const void *a1, int a2)
{
  size_t v3; // r4
  _BYTE *v4; // r0

  v3 = strnlen(a1, a2);
  v4 = sub_93028(v3 + 1);
  v4[v3] = 0;
  return memcpy(v4, a1, v3);
}
