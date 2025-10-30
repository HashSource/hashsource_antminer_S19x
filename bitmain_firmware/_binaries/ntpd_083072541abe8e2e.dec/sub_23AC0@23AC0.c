__int16 *sub_23AC0()
{
  int v0; // r8
  int v1; // r4
  unsigned int v2; // r0
  _WORD *v3; // r3
  bool v4; // cc
  _WORD *v6; // [sp+0h] [bp-1E0h] BYREF
  int v7; // [sp+4h] [bp-1DCh]
  _WORD v8[234]; // [sp+8h] [bp-1D8h] BYREF

  word_B94A0 = __rev16(sub_235A8());
  v0 = peer_list;
  if ( peer_list )
  {
    v1 = 2;
    v8[0] = __rev16(*(unsigned __int16 *)(peer_list + 60));
    v8[1] = __rev16(sub_23504(peer_list));
    while ( 1 )
    {
      v0 = *(_DWORD *)v0;
      if ( !v0 )
        break;
      while ( 1 )
      {
        v8[v1] = __rev16(*(unsigned __int16 *)(v0 + 60));
        v2 = sub_23504(v0);
        v3 = &v8[v1];
        v4 = (unsigned int)(v1 + 3) > 0xE9;
        v1 += 2;
        v3[1] = __rev16(v2);
        if ( !v4 )
          break;
        v6 = v8;
        v7 = 2 * v1;
        sub_1EEC8((char *)&v6, 1, 1);
        v0 = *(_DWORD *)v0;
        v1 = 0;
        if ( !v0 )
          goto LABEL_7;
      }
    }
LABEL_7:
    if ( v1 )
    {
      v6 = v8;
      v7 = 2 * v1;
      sub_1EEC8((char *)&v6, 1, 1);
    }
  }
  return sub_1EBA4(0);
}
