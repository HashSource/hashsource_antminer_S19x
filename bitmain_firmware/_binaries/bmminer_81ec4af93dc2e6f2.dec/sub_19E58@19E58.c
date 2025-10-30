int __fastcall sub_19E58(int result, char *a2, unsigned int a3)
{
  int v5; // r3
  int v6; // [sp+0h] [bp-81Ch]
  _DWORD v7[5]; // [sp+4h] [bp-818h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  memset(v7, 0, sizeof(v7));
  v6 = 20;
  if ( dword_B0F4C && *(_BYTE *)(dword_B0F4C + 28) )
  {
    result = (*(int (**)(void))(*(_DWORD *)(dword_B0F4C + 4 * result) + 44))();
    if ( a2 )
    {
      if ( v6 + 1 <= a3 )
        return (int)strcpy(a2, (const char *)v7);
    }
  }
  else if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "No hash board sn, chain = %d.\n", result);
    return sub_3AF5C(4, s, 0, v5);
  }
  return result;
}
