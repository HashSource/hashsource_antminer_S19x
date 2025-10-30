_DWORD *__fastcall sub_21B64(_DWORD *result, char a2, int a3)
{
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (a2 & 3) != 0 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v3, "EEPROM write data is not 32-bit aligned, FAIL ENC/DEC!\n");
      return (_DWORD *)sub_3B6AC(3, v3, 0, *(_DWORD *)"L ENC/DEC!\n");
    }
  }
  else if ( a3 )
  {
    return (_DWORD *)sub_219F4(result, a2, dword_B274C, 3);
  }
  else
  {
    return (_DWORD *)sub_21AAC(result, a2, dword_B274C, 3);
  }
  return result;
}
