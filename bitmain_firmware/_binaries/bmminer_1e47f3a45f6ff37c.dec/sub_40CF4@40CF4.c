int sub_40CF4()
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
    if ( sub_26C0C(v1) )
    {
      if ( !sub_1C05C(v1, (unsigned __int8)dword_B6EB4, (int *)&v5) )
      {
        v3 = sub_1BD40(v5);
        v5 = v3;
        if ( v3 >= v0 )
          v0 = v3;
      }
    }
    ++v1;
  }
  while ( v1 != 4 );
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "max voltage in eeprom = %d\n", v0);
    sub_3B6AC(4, s, 0, v4);
  }
  if ( v0 )
    return v0;
  else
    return -1;
}
