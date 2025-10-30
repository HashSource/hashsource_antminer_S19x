int __fastcall sub_12A7B8(const char *a1)
{
  unsigned int v3; // r0
  char *endptr; // [sp+4h] [bp-4h] BYREF

  if ( !strncmp(a1, "MASK:", 5u) )
  {
    if ( !a1[5] )
      return 0;
    v3 = strtoul(a1 + 5, &endptr, 0);
    if ( *endptr )
      return 0;
  }
  else if ( !strcmp(a1, "nombstr") )
  {
    v3 = -10241;
  }
  else if ( !strcmp(a1, "pkix") )
  {
    v3 = -5;
  }
  else if ( !strcmp(a1, "utf8only") )
  {
    v3 = 0x2000;
  }
  else
  {
    if ( strcmp(a1, "default") )
      return 0;
    v3 = -1;
  }
  sub_12A7A0(v3);
  return 1;
}
