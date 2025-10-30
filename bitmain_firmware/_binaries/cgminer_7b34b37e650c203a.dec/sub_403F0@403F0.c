char *__fastcall sub_403F0(_BYTE *a1, const char **a2)
{
  size_t v4; // r0
  bool v5; // cc
  size_t v6; // r5
  char *v7; // r0
  const char *v8; // r1
  _BYTE *v9; // r4
  char *result; // r0

  v4 = strlen(*a2);
  v5 = v4 > 0x4E;
  v6 = v4;
  *a1 = 34;
  v7 = a1 + 1;
  v8 = *a2;
  if ( v5 )
  {
    result = strncpy(v7, v8, 0x4Eu);
    a1[79] = 34;
  }
  else
  {
    v9 = &a1[v6];
    result = strncpy(v7, v8, v6);
    v9[1] = 34;
    if ( v6 != 78 )
      v9[2] = 0;
  }
  return result;
}
