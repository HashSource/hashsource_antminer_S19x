int __fastcall sub_18FC0(int a1, int a2)
{
  int v3; // r2
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( !dword_A05EC || !*(_BYTE *)(dword_A05EC + 96) )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return 0;
    snprintf(s, 0x800u, "No work mode conf, chain = %d, mode = %d.\n", a1, a2);
LABEL_10:
    sub_47AB4(3, s, 0);
    return 0;
  }
  if ( !a2 )
  {
    v3 = *(_DWORD *)(dword_A05EC + 4 * a1);
    if ( *(_BYTE *)(v3 + 128) )
      return v3 + 42;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Invalid work mode to get conf, chain = %d, mode = %d.\n", a1, a2);
    goto LABEL_10;
  }
  return 0;
}
