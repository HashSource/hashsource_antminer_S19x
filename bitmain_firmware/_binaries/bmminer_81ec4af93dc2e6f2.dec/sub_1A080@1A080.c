int __fastcall sub_1A080(int result, char *a2, unsigned int a3)
{
  int v5; // r3
  int v6; // [sp+4h] [bp-81Ch]
  _DWORD src[6]; // [sp+8h] [bp-818h] BYREF
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  v6 = 24;
  memset(src, 0, sizeof(src));
  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    result = (*(int (**)(void))(*(_DWORD *)(dword_B0F4C + 4 * result) + 180))();
    if ( a2 )
    {
      if ( v6 + 1 <= a3 )
        return (int)strcpy(a2, (const char *)src);
    }
  }
  else if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "read eeprom err, chain = %d.\n", result);
    return sub_3AF5C(4, s, 0, v5);
  }
  return result;
}
