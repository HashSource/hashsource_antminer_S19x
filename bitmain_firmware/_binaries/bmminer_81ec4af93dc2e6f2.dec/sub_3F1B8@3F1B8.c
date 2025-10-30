int sub_3F1B8()
{
  unsigned int v0; // r5
  int v1; // r4
  unsigned int v3; // r0
  int v4; // r3
  unsigned int v5; // [sp+4h] [bp-804h] BYREF
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v0 = 0;
  v1 = 0;
  v5 = 0;
  do
  {
    if ( sub_266F0(v1) )
    {
      if ( !sub_1C1D4(v1, (unsigned __int8)dword_B413C, (int *)&v5) )
      {
        v3 = sub_1BEC4(v5);
        v5 = v3;
        if ( v0 < v3 )
          v0 = v3;
      }
    }
    ++v1;
  }
  while ( v1 != 4 );
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "max voltage in eeprom = %d\n", v0);
    sub_3AF5C(4, s, 0, v4);
  }
  if ( v0 )
    return v0;
  else
    return -1;
}
