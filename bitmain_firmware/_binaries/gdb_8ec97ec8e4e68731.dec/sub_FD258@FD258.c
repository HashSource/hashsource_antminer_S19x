int __fastcall sub_FD258(int a1, int a2)
{
  int v3; // r6
  int v4; // r3
  int v5; // r4
  __int16 *v6; // r1
  int v7; // r5
  int v9; // r0
  int v10; // r9
  int v11; // r0

  v3 = sub_171258(a1);
  v4 = *(_DWORD *)(v3 + 24);
  v5 = 0;
  while ( 1 )
  {
    v6 = &word_3B4A2C;
    v7 = 24 * v5;
    if ( (*(_WORD *)(v4 + 2) & 0x380) == 0x80 )
      v6 = *(__int16 **)(v4 + 28);
    if ( *v6 <= v5++ )
      break;
    v9 = sub_171258(*(_DWORD *)(*(_DWORD *)(v4 + 24) + v7 + 12));
    v4 = *(_DWORD *)(v3 + 24);
    v10 = v9;
    v11 = *(_DWORD *)(*(_DWORD *)(v4 + 24) + v7 + 16);
    if ( v11 )
    {
      if ( sub_25AA0C(v11, a2) )
        return v10;
      v10 = sub_FD258(v10, a2);
      if ( v10 )
        return v10;
      v4 = *(_DWORD *)(v3 + 24);
    }
  }
  return 0;
}
