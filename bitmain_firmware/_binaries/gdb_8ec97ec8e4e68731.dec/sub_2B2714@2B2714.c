int __fastcall sub_2B2714(int a1, int a2, int a3)
{
  int v3; // r1
  int v4; // r12
  char v5; // r3
  unsigned int v6; // t1
  unsigned int v7; // lr
  char v8; // r4

  if ( a3 <= 0 )
    return 0;
  v3 = a2 - 4;
  v4 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v3 + 4);
    v3 += 4;
    v5 = v6;
    ++v4;
    v7 = v6 - 32;
    v8 = 2 * (v6 - 32);
    if ( v6 <= 0x1F && (a1 & (1 << v5)) != 0 )
      break;
    if ( v7 <= 0xF && (a1 & (3 << v8)) != 0 )
      break;
    if ( a3 == v4 )
      return 0;
  }
  return 1;
}
