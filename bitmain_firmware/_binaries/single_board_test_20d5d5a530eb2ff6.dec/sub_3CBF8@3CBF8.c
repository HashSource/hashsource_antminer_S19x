int sub_3CBF8()
{
  int result; // r0
  int v1; // r5
  const char *v2; // r4
  char filename[128]; // [sp+8h] [bp-6484h] BYREF
  _BYTE s[25604]; // [sp+88h] [bp-6404h] BYREF

  memset(s, 0, 0x6400u);
  result = sub_3CA58((int)s, off_21C0FC);
  if ( result > 100 )
  {
    v1 = result - 1;
    v2 = &s[128 * result - 128];
    do
    {
      --v1;
      snprintf(filename, 0x80u, "%s%s", off_21C0F4, v2);
      v2 -= 128;
      remove(filename);
      result = unlink(filename);
    }
    while ( v1 != 99 );
  }
  return result;
}
