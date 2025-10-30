void *sub_23DC8()
{
  unsigned int v0; // r0
  int v1; // r5
  int v2; // r4
  unsigned int v3; // r0
  int v4; // r9
  unsigned int v5; // r0
  int v6; // r3
  _WORD *v8; // [sp+0h] [bp-1E4h] BYREF
  int v9; // [sp+4h] [bp-1E0h]
  _WORD v10[234]; // [sp+8h] [bp-1DCh] BYREF

  v0 = sub_2389C();
  word_BA4A0 = (v0 >> 8) | ((_WORD)v0 << 8);
  v1 = peer_list;
  if ( peer_list )
  {
    v2 = 2;
    v10[0] = HIBYTE(*(_WORD *)(peer_list + 60)) | (*(_WORD *)(peer_list + 60) << 8);
    v3 = sub_237F8(peer_list);
    v10[1] = (v3 >> 8) | ((_WORD)v3 << 8);
    while ( 1 )
    {
      v1 = *(_DWORD *)v1;
      if ( !v1 )
        break;
      v4 = v2 + 2;
      v10[v2] = HIBYTE(*(_WORD *)(v1 + 60)) | (*(_WORD *)(v1 + 60) << 8);
      v5 = sub_237F8(v1);
      v10[v2 + 1] = (v5 >> 8) | ((_WORD)v5 << 8);
      if ( (unsigned int)(v2 + 3) > 0xE9 )
      {
        v6 = 2 * v4;
        v8 = v10;
        v4 = 0;
        v9 = v6;
        sub_1F104((char *)&v8, 1, 1);
      }
      v2 = v4;
    }
    if ( v2 )
    {
      v8 = v10;
      v9 = 2 * v2;
      sub_1F104((char *)&v8, 1, 1);
    }
  }
  return sub_1EDD4(0);
}
