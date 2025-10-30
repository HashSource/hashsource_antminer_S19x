unsigned int sub_1DA50()
{
  int v0; // r4
  unsigned int v1; // r6
  int v2; // r7
  int v4; // r3
  int v5; // r3
  char v6[2048]; // [sp+0h] [bp-800h] BYREF

  if ( !dword_B3CC0[0] || !*(_BYTE *)(dword_B3CC0[0] + 28) )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(v6, 0x800u, "eeprom is not init, chain:%d\n", 0);
      sub_3B6AC(4, v6, 0, v4);
    }
    return 0;
  }
  v0 = 0;
  v1 = 0xFFFF;
  while ( !sub_26C0C(v0) )
  {
LABEL_8:
    if ( ++v0 == 4 )
      return v1;
  }
  v2 = *(_DWORD *)(dword_B3CC0[0] + 4 * v0);
  if ( v2 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(v2 + 24))(*(_DWORD *)(dword_B3CC0[0] + 4 * v0)) <= v1 )
      v1 = (*(int (**)(void))(*(_DWORD *)(dword_B3CC0[0] + 4 * v0) + 24))();
    goto LABEL_8;
  }
  if ( (unsigned int)dword_B308C <= 4 )
    return 0;
  snprintf(v6, 0x800u, "eeprom is not init ctx is null, chain:%d\n", v0);
  sub_3B6AC(4, v6, 0, v5);
  return 0;
}
