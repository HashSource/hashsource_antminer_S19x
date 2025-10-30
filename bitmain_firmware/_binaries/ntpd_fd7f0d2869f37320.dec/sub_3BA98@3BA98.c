int __fastcall sub_3BA98(int a1, int a2, int a3)
{
  char v3; // r7
  char v4; // r4
  int v5; // r3
  int v6; // r1
  __int16 v7; // r1
  int v8; // r4
  char *v9; // r12
  int v10; // r2
  char v11; // r3
  unsigned int v12; // r3
  bool v13; // zf
  int v14; // r1
  int v15; // r2
  int v16; // r3

  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  v5 = dword_BDB40;
  dword_BDB3C = a1;
  dword_BDB38 = a2;
  if ( dword_BDB40 )
    v6 = 32;
  else
    v6 = 8;
  byte_BD93B = v4;
  dword_BD92C = v6;
  if ( dword_BDB40 )
    v7 = 0x2000;
  else
    v7 = 2048;
  byte_BD93A = v3;
  dword_BDB34 = 0;
  word_BD93E = v7;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  v8 = peer_list;
  if ( peer_list )
  {
    v9 = (char *)&dword_BD940;
    while ( 1 )
    {
      if ( *(_WORD *)(v8 + 16) == 10 )
      {
        if ( !v5 )
          goto LABEL_21;
        v14 = *(_DWORD *)(v8 + 28);
        v15 = *(_DWORD *)(v8 + 32);
        v16 = *(_DWORD *)(v8 + 36);
        *((_DWORD *)v9 + 4) = *(_DWORD *)(v8 + 24);
        *((_DWORD *)v9 + 5) = v14;
        *((_DWORD *)v9 + 6) = v15;
        *((_DWORD *)v9 + 7) = v16;
        *((_DWORD *)v9 + 2) = 1;
      }
      else
      {
        v10 = *(_DWORD *)(v8 + 20);
        if ( v5 )
          *((_DWORD *)v9 + 2) = 0;
        *(_DWORD *)v9 = v10;
      }
      *((_WORD *)v9 + 2) = *(_WORD *)(v8 + 18);
      v11 = *(_BYTE *)(v8 + 63);
      v9[7] = 0;
      v9[6] = v11;
      if ( (*(_DWORD *)(v8 + 68) & 1) != 0 )
        v9[7] = 1;
      if ( v8 == sys_peer )
        v9[7] |= 2u;
      v12 = *(unsigned __int8 *)(v8 + 296);
      if ( v12 == 4 )
      {
        v9[7] |= 0x40u;
        v12 = *(unsigned __int8 *)(v8 + 296);
      }
      if ( v12 > 5 )
        v9[7] = ~((unsigned int)~((unsigned __int8)v9[7] << 25) >> 25);
      v9 = sub_3B168();
LABEL_21:
      v8 = *(_DWORD *)v8;
      v13 = v9 == 0;
      if ( v9 )
        v13 = v8 == 0;
      if ( v13 )
        return sub_3B8C4();
      v5 = dword_BDB40;
    }
  }
  return sub_3B8C4();
}
