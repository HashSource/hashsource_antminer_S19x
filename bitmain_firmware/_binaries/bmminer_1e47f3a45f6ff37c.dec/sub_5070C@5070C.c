char *__fastcall sub_5070C(_BYTE *a1, const char **a2)
{
  size_t v4; // r0
  const char *v5; // r1
  size_t v6; // r5
  char *result; // r0
  _BYTE *v8; // r4

  v4 = strlen(*a2);
  *a1 = 34;
  v5 = *a2;
  v6 = v4;
  if ( v4 > 0x4E )
  {
    result = strncpy(a1 + 1, v5, 0x4Eu);
    a1[79] = 34;
  }
  else
  {
    result = strncpy(a1 + 1, v5, v4);
    v8 = &a1[v6];
    v8[1] = 34;
    if ( v6 != 78 )
      v8[2] = 0;
  }
  return result;
}
