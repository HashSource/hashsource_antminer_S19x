const char *__fastcall sub_18550(int a1, int a2)
{
  if ( a2 )
    return *(const char **)&aReadSensorOnAs[16 * **(__int16 **)(*(_DWORD *)(dword_B3C50 + 4 * a1) + 4 * a2) + 20];
  else
    return "LM75A";
}
