int __fastcall sub_18D10(int a1, int a2, int a3)
{
  int v4; // r12
  int v5; // r1
  int v6; // r2
  int v7; // t1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( !dword_A05EC || !*(_BYTE *)(dword_A05EC + 96) )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return -1;
    snprintf(s, 0x800u, "No work mode freq, chain = %d, mode = %d.\n", a1, a2);
LABEL_12:
    sub_47AB4(3, s, 0);
    return -1;
  }
  if ( a2 || (v4 = *(_DWORD *)(dword_A05EC + 4 * a1), !*(_BYTE *)(v4 + 128)) )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return -1;
    snprintf(s, 0x800u, "Invalid work mode to get freq, chain = %d, mode = %d.\n", a1, a2);
    goto LABEL_12;
  }
  v5 = a3 - 4;
  v6 = v4 + 41;
  do
  {
    v7 = *(unsigned __int8 *)++v6;
    *(_DWORD *)(v5 + 4) = 5 * v7;
    v5 += 4;
  }
  while ( v6 != v4 + 119 );
  return 0;
}
