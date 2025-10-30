int sub_22D34()
{
  int v1; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( !byte_A0D78 || (byte_241D04 & 0x10) == 0 )
    return sub_22B10();
  v1 = *(unsigned __int16 *)(dword_A0D74 + 2);
  if ( (byte_241D05 & 8) == 0 )
    v1 = (unsigned __int16)word_241D0E;
  sub_1A0F0(v1);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v2, 0x800u, "set fixed voltage raw to %d\n", v1);
    sub_47AB4(3, v2, 0);
  }
  return 0;
}
