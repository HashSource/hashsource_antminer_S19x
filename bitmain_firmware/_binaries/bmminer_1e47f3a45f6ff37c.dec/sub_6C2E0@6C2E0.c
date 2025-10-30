int __fastcall sub_6C2E0(unsigned int a1, char a2)
{
  char v4[8]; // [sp+Ch] [bp-808h] BYREF
  unsigned __int8 i; // [sp+80Fh] [bp-5h]

  if ( a1 <= 0xF )
  {
    if ( LOBYTE(dword_536504[17 * a1]) )
    {
      for ( i = 0; i < (unsigned int)LOBYTE(dword_536504[17 * a1]); ++i )
      {
        if ( a2 == LOBYTE(dword_536504[17 * a1 + 1 + 2 * i]) )
          return i;
      }
      return -2147482112;
    }
    else
    {
      return -2147482112;
    }
  }
  else
  {
    snprintf(v4, 0x800u, " Bad T-sensor param, input chain is %d\n", a1);
    sub_3B6AC(0, v4, 0, (int)v4);
    return -2147482111;
  }
}
