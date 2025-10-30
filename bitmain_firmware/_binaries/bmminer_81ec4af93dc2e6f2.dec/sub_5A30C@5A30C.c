unsigned int __fastcall sub_5A30C(unsigned int result)
{
  unsigned int v1; // [sp+Ch] [bp-808h]
  char v2[4]; // [sp+10h] [bp-804h] BYREF

  v1 = result;
  if ( result <= 0xF )
  {
    if ( dword_531444[2 * result] || dword_531444[2 * result + 1] )
    {
      result = sub_6A8A0(dword_531444[2 * result]);
      dword_531444[2 * v1] = 0;
      dword_531444[2 * v1 + 1] = 0;
    }
  }
  else
  {
    snprintf(v2, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_close", result);
    return sub_3AF5C(0, v2, 0, (int)v2);
  }
  return result;
}
