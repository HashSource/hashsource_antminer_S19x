void *__fastcall sub_3E3A8(void *result, const void *a2, size_t a3, int a4, int a5, int a6, int a7)
{
  int v7; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( (int)(a3 - 1) < 0 )
  {
    if ( !byte_5BC044 && !byte_4B6CA5 && dword_AFC2C <= 2 )
      return result;
    snprintf(s, 0x800u, "ERR: Asked to memcpy %u bytes from %s %s():%d", a3, a4, a5, a6);
    return (void *)sub_3AF5C(3, s, 0, v7);
  }
  if ( !result )
  {
    if ( !byte_5BC044 && !byte_4B6CA5 && dword_AFC2C <= 2 )
      return result;
    snprintf(s, 0x800u, "ERR: Asked to memcpy %u bytes to NULL from %s %s():%d", a3, a4, a5, a6);
    return (void *)sub_3AF5C(3, s, 0, v7);
  }
  if ( a2 )
    return memcpy(result, a2, a3);
  if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
  {
    snprintf(s, 0x800u, "ERR: Asked to memcpy %u bytes from NULL from %s %s():%d", a3, a4, a5, a6);
    return (void *)sub_3AF5C(3, s, 0, v7);
  }
  return result;
}
