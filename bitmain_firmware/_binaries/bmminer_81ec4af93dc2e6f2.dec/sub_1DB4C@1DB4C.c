unsigned int sub_1DB4C()
{
  int v0; // r4
  unsigned int v1; // r6
  int v2; // r7
  int v4; // r6
  int v5; // r3
  int v6; // r3
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  if ( !dword_B0F4C[0] || !*(_BYTE *)(dword_B0F4C[0] + 28) )
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v7, 0x800u, "eeprom is not init, chain:%d\n", 0);
      sub_3AF5C(4, v7, 0, v5);
      return 0;
    }
    return 0;
  }
  v0 = 0;
  v1 = 0xFFFF;
  while ( !sub_266F0(v0) )
  {
LABEL_8:
    if ( ++v0 == 4 )
      return v1;
  }
  v2 = *(_DWORD *)(dword_B0F4C[0] + 4 * v0);
  if ( v2 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(v2 + 24))(*(_DWORD *)(dword_B0F4C[0] + 4 * v0)) <= v1 )
      v1 = (*(int (**)(void))(*(_DWORD *)(dword_B0F4C[0] + 4 * v0) + 24))();
    goto LABEL_8;
  }
  if ( (unsigned int)off_AFC24 <= 4 )
    return 0;
  v4 = *(_DWORD *)(dword_B0F4C[0] + 4 * v0);
  snprintf(v7, 0x800u, "eeprom is not init ctx is null, chain:%d\n", v0);
  sub_3AF5C(4, v7, v2, v6);
  return v4;
}
