int __fastcall sub_19098(int a1, int a2, void *src)
{
  int v5; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( dword_A05EC && *(_BYTE *)(dword_A05EC + 96) && (v5 = *(_DWORD *)(dword_A05EC + 4 * a1)) != 0 )
  {
    if ( !a2 && *(_BYTE *)(v5 + 128) )
    {
      memcpy((void *)(v5 + 42), src, 0x56u);
      return a2;
    }
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "Invalid work mode %d.\n", a2);
LABEL_11:
      sub_47AB4(3, s, 0);
      return -1;
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Can't set work mode conf, configuration is not loaded, chain = %d, mode = %d.\n", a1, a2);
    goto LABEL_11;
  }
  return -1;
}
