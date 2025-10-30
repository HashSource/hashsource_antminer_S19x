bool __fastcall sub_336AD4(const void *a1, size_t a2, char *s, int (__fastcall **a4)(_BYTE *, _BYTE *))
{
  size_t v8; // r7
  _BYTE *v9; // r0
  _BYTE v11[108]; // [sp+0h] [bp-84h] BYREF

  v8 = strlen(s);
  v9 = memcpy(v11, a1, a2);
  v9[a2] = 47;
  memcpy(&v9[a2 + 1], s, v8 + 1);
  return (*a4)(v11, v11) == 0;
}
