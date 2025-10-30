int __fastcall sub_115F0(const char *a1, int a2)
{
  int result; // r0
  int v5; // r3
  int v6; // r2
  _BOOL4 v7; // r1
  char *endptr; // [sp+4h] [bp-8h] BYREF

  result = strtol(a1, &endptr, 0);
  if ( *endptr || !*a1 )
  {
    fwrite("Error: Chip address is not a number!\n", 1u, 0x25u, (FILE *)stderr);
    return -1;
  }
  else
  {
    if ( a2 )
      v5 = 127;
    else
      v5 = 119;
    if ( a2 )
      v6 = 0;
    else
      v6 = 3;
    v7 = v5 < result;
    if ( v6 > result )
      v7 = 1;
    if ( v7 )
    {
      fprintf((FILE *)stderr, "Error: Chip address out of range (0x%02lx-0x%02lx)!\n", v6, v5);
      return -2;
    }
  }
  return result;
}
