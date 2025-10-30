_BYTE *__fastcall sub_1384C(const void *a1, size_t a2)
{
  _BYTE *v5; // r0
  _BYTE *v6; // r5

  if ( a2 == -1 )
    return 0;
  v5 = off_270F8(a2 + 1);
  v6 = v5;
  if ( !v5 )
    return 0;
  memcpy(v5, a1, a2);
  v6[a2] = 0;
  return v6;
}
