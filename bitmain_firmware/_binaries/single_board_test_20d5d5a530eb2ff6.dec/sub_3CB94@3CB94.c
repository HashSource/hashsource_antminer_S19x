int sub_3CB94()
{
  int result; // r0
  int v1; // r5
  const char *v2; // r4
  char filename[128]; // [sp+8h] [bp-C884h] BYREF
  _BYTE s[51204]; // [sp+88h] [bp-C804h] BYREF

  memset(s, 0, 0xC800u);
  result = sub_3CA58((int)s, (const char *)off_21C0F8);
  if ( result > 200 )
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
    while ( v1 != 199 );
  }
  return result;
}
