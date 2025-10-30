_DWORD *__fastcall sub_21654(_DWORD *result, char a2, int a3)
{
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (a2 & 3) != 0 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v3, "EEPROM write data is not 32-bit aligned, FAIL ENC/DEC!\n");
      return (_DWORD *)sub_3AF5C(3, v3, 0, *(_DWORD *)"L ENC/DEC!\n");
    }
  }
  else if ( a3 )
  {
    return (_DWORD *)sub_214E4(result, a2, dword_AF2E4, 3);
  }
  else
  {
    return (_DWORD *)sub_2159C(result, a2, dword_AF2E4, 3);
  }
  return result;
}
