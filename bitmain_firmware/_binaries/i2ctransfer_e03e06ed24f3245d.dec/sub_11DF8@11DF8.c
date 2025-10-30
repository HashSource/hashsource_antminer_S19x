unsigned int __fastcall sub_11DF8(const char *a1)
{
  unsigned int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r7
  const char *v5; // r0
  _DWORD *v6; // r4
  int v7; // r5
  char *endptr; // [sp+4h] [bp-8h] BYREF

  result = strtoul(a1, &endptr, 0);
  if ( *endptr || !*a1 )
  {
    v3 = sub_11854();
    v4 = v3;
    if ( v3 )
    {
      v5 = (const char *)v3[1];
      if ( v5 )
      {
        v6 = v4 + 4;
        v7 = -1;
        do
        {
          if ( !strcmp(v5, a1) )
          {
            if ( v7 >= 0 )
            {
              v7 = -4;
              fwrite("Error: I2C bus name is not unique!\n", 1u, 0x23u, (FILE *)stderr);
              goto LABEL_15;
            }
            v7 = *(v6 - 4);
          }
          v6 += 4;
          v5 = (const char *)*(v6 - 3);
        }
        while ( v5 );
        if ( v7 == -1 )
          goto LABEL_17;
      }
      else
      {
LABEL_17:
        v7 = -1;
        fwrite("Error: I2C bus name doesn't match any bus present!\n", 1u, 0x33u, (FILE *)stderr);
      }
LABEL_15:
      sub_115E0(v4);
      return v7;
    }
    else
    {
      fwrite("Error: Out of memory!\n", 1u, 0x16u, (FILE *)stderr);
      return -3;
    }
  }
  else if ( result >= 0x100000 )
  {
    fwrite("Error: I2C bus out of range!\n", 1u, 0x1Du, (FILE *)stderr);
    return -2;
  }
  return result;
}
