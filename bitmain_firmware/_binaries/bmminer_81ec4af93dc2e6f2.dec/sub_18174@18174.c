const char *__fastcall sub_18174(int a1, int a2)
{
  if ( a2 )
    return *(const char **)&aReadSensorOnAs[16 * **(__int16 **)(*(_DWORD *)(dword_B0EE0 + 4 * a1) + 4 * a2) + 20];
  else
    return "LM75A";
}
