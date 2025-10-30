bool __fastcall sub_323A0(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = *(_DWORD *)(dword_1AEA64 + 4);
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Check if read reg done, chain = %d, done_threshold = %d.\n", a1, 1);
    sub_47AB4(4, s, 0);
  }
  v3 = 0;
  v4 = v2 + 78 * a1 - 1;
  do
  {
    if ( *(unsigned __int8 *)++v4 )
      ++v3;
  }
  while ( v4 != v2 + 77 + 78 * a1 );
  return v3 == 78;
}
