int __fastcall sub_19F88(const char *a1, signed int a2, int a3)
{
  _DWORD dest[5]; // [sp+10h] [bp-1Ch] BYREF
  int i; // [sp+24h] [bp-8h]

  i = 0;
  memset(dest, 0, sizeof(dest));
  if ( !a1 || a2 <= 0 || a2 > 16 )
    return -2147483646;
  strncpy((char *)dest, a1, a2);
  if ( a3 )
  {
    if ( a3 == 1 || a3 == 2 )
    {
      for ( i = 0; (&off_864BC)[4 * i]; ++i )
      {
        if ( !strcmp((const char *)dest, (&off_864BC)[4 * i]) )
          return i;
      }
    }
  }
  else
  {
    for ( i = 0; off_8651C[3 * i]; ++i )
    {
      if ( !strcmp((const char *)dest, off_8651C[3 * i]) )
        return i;
    }
  }
  return -2147483645;
}
