int __fastcall sub_18E08(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  int v4; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( !dword_A05EC || !*(_BYTE *)(dword_A05EC + 96) )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return -1;
    snprintf(s, 0x800u, "No work mode voltage, chain = %d, mode = %d.\n", a1, a2);
LABEL_13:
    sub_47AB4(3, s, 0);
    return -1;
  }
  if ( a2 || (v4 = *(_DWORD *)(dword_A05EC + 4 * a1), !*(_BYTE *)(v4 + 128)) )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return -1;
    snprintf(s, 0x800u, "Invalid work mode to get voltage, chain = %d, mode = %d.\n", a1, a2);
    goto LABEL_13;
  }
  if ( a3 )
    v4 = *(unsigned __int16 *)(v4 + 120);
  result = 0;
  if ( a3 )
    *a3 = v4;
  return result;
}
