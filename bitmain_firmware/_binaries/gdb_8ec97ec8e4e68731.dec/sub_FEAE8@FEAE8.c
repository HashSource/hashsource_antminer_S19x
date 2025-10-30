char *__fastcall sub_FEAE8(char *result)
{
  char *v1; // r4
  size_t v2; // r5
  const char *v3; // r0
  _BYTE v4[12]; // [sp+0h] [bp-10h] BYREF

  if ( result )
  {
    v1 = result;
    v2 = sub_FE758(result, 0);
    v3 = (const char *)memcpy(v4, v1, v2);
    v4[v2] = 0;
    return (char *)sub_259858("%s\n", v3);
  }
  return result;
}
