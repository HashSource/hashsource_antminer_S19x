int __fastcall sub_B85BC(_DWORD *a1)
{
  int v2; // r6
  int v4; // r9
  int v5; // r7
  int v6; // r5
  int v7; // r0
  int v8; // r4

  v2 = a1[1] - 1;
  if ( (a1[4] & 4) != 0 )
  {
    if ( (int)a1[2] <= 0 )
      return 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(*a1 + 4 * v6);
      v8 = (((v6 ^ v2) - 1) & ~(v6 ^ v2)) >> 31;
      ++v6;
      v5 |= v8;
      v4 += (sub_B8208(v7) & v8) + (~(_BYTE)v5 & 0x40);
    }
    while ( v6 < a1[2] );
    return v4 & ~(((-v2 - 2) & v2) >> 31);
  }
  else
  {
    if ( sub_B85B0((int)a1) )
      return 0;
    return sub_B8208(*(_DWORD *)(*a1 + 4 * v2)) + (v2 << 6);
  }
}
