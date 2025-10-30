unsigned int __fastcall sub_11DC4(const char *a1)
{
  unsigned int v2; // r0
  int v3; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  const char *v7; // r0
  _DWORD *v8; // r4
  int v9; // r5
  char *endptr; // [sp+4h] [bp-8h] BYREF

  v2 = strtoul(a1, &endptr, 0);
  if ( !*endptr && *a1 )
  {
    if ( v2 < 0x100000 )
      return v2;
    v3 = -2;
    fwrite("Error: I2C bus out of range!\n", 1u, 0x1Du, (FILE *)stderr);
    return v3;
  }
  v5 = sub_117D8();
  v6 = v5;
  if ( !v5 )
  {
    v3 = -3;
    fwrite("Error: Out of memory!\n", 1u, 0x16u, (FILE *)stderr);
    return v3;
  }
  v7 = (const char *)v5[1];
  if ( v7 )
  {
    v8 = v6 + 4;
    v9 = -1;
    do
    {
      if ( !strcmp(v7, a1) )
      {
        if ( v9 >= 0 )
        {
          v9 = -4;
          fwrite("Error: I2C bus name is not unique!\n", 1u, 0x23u, (FILE *)stderr);
          goto LABEL_16;
        }
        v9 = *(v8 - 4);
      }
      v8 += 4;
      v7 = (const char *)*(v8 - 3);
    }
    while ( v7 );
    if ( v9 == -1 )
      goto LABEL_18;
  }
  else
  {
LABEL_18:
    v9 = -1;
    fwrite("Error: I2C bus name doesn't match any bus present!\n", 1u, 0x33u, (FILE *)stderr);
  }
LABEL_16:
  sub_11570(v6);
  return v9;
}
