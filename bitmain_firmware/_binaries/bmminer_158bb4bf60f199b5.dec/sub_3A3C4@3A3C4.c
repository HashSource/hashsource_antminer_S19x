unsigned int __fastcall sub_3A3C4(int a1, int a2)
{
  int v2; // lr
  unsigned int v3; // r12
  int v4; // r2
  int v5; // lr
  int v6; // t1
  unsigned int v7; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = a2 + 312 * a1;
  v3 = 0;
  v4 = v2 - 4;
  v5 = v2 + 308;
  do
  {
    v6 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    v3 += v6;
  }
  while ( v4 != v5 );
  v7 = v3 / 0x4E;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_avg = %d\n", a1, v3 / 0x4E);
    sub_47AB4(4, s, 0);
  }
  return v7;
}
