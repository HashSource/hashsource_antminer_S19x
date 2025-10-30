int __fastcall sub_1293AC(unsigned int a1, __int16 a2, _BYTE *a3, FILE *s)
{
  __int16 v5; // r5
  char ptr; // [sp+3h] [bp-11h] BYREF
  _BYTE v8[16]; // [sp+4h] [bp-10h] BYREF

  if ( a1 >= 0x10000 )
  {
    sub_B5560(v8, 0xBu, "\\W%08lX", a1);
    if ( !s || fwrite(v8, 1u, 0xAu, s) == 10 )
      return 10;
    return -1;
  }
  if ( a1 > 0xFF )
  {
    sub_B5560(v8, 0xBu, "\\U%04lX", a1);
    if ( !s || fwrite(v8, 1u, 6u, s) == 6 )
      return 6;
    return -1;
  }
  ptr = a1;
  if ( (a1 & 0x80) != 0 )
  {
    v5 = a2 & 4;
  }
  else
  {
    v5 = word_1CA6D0[a1] & a2;
    if ( (v5 & 0x61) != 0 )
    {
      if ( (v5 & 8) == 0 )
      {
        if ( !s || fwrite("\\", 1u, 1u, s) == 1 && fwrite(&ptr, 1u, 1u, s) == 1 )
          return 2;
        return -1;
      }
      if ( a3 )
        *a3 = 1;
      goto LABEL_9;
    }
  }
  if ( (v5 & 0x406) == 0 )
  {
    if ( a1 == 92 && (a2 & 0x40F) != 0 )
    {
      if ( !s || fwrite("\\\\", 1u, 2u, s) == 2 )
        return 2;
      return -1;
    }
LABEL_9:
    if ( !s || fwrite(&ptr, 1u, 1u, s) == 1 )
      return 1;
    return -1;
  }
  sub_B5560(v8, 0xBu, "\\%02X", a1);
  if ( s && fwrite(v8, 1u, 3u, s) != 3 )
    return -1;
  return 3;
}
