int __fastcall sub_1C730(int a1, char *a2, unsigned int a3)
{
  int v6; // r3
  _DWORD v7[5]; // [sp+4h] [bp-818h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !dword_B0F4C || !*(_BYTE *)(dword_B0F4C + 28) )
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(s, 0x800u, "No ft ver, chain = %d\n", a1);
      sub_3AF5C(4, s, 0, v6);
    }
    return -1;
  }
  if ( !a2 || (*(int (**)(void))(*(_DWORD *)(dword_B0F4C + 4 * a1) + 68))() )
    return -1;
  if ( a3 <= 0x15 )
    return -2;
  strcpy(a2, (const char *)v7);
  return 0;
}
