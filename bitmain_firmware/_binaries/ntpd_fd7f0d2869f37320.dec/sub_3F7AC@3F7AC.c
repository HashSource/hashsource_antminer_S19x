int __fastcall sub_3F7AC(struct sockaddr *a1, int a2, int a3)
{
  __int16 v3; // lr
  char v4; // r7
  unsigned int v5; // r5
  int v6; // r12
  char *v7; // r12
  _WORD *v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r3
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int v21; // r2

  if ( num_ctl_traps )
  {
    v3 = a2;
    v4 = *(_BYTE *)(a3 + 3);
    v5 = 0;
    byte_BD93A = *(_BYTE *)(a3 + 2);
    dword_BDB38 = a2;
    if ( dword_BDB40 )
      v6 = 64;
    else
      v6 = 28;
    byte_BD93B = v4;
    if ( dword_BDB40 )
      v3 = 0x4000;
    dword_BD92C = v6;
    if ( !dword_BDB40 )
      v3 = 7168;
    dword_BDB3C = (int)a1;
    v7 = (char *)&dword_BD940;
    word_BD93E = v3;
    dword_BDB34 = 0;
    dword_BD930 = 0;
    dword_BD928 = 0;
    dword_BD924 = 0;
    v8 = &unk_1091E8;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v8 - 1) & 1) == 0 )
        goto LABEL_13;
      if ( *(v8 - 26) == 2 )
        break;
      if ( dword_BDB40 )
      {
        v9 = *(_DWORD *)(*((_DWORD *)v8 - 6) + 36);
        v10 = *(_DWORD *)(*((_DWORD *)v8 - 6) + 40);
        v11 = *(_DWORD *)(*((_DWORD *)v8 - 6) + 44);
        *((_DWORD *)v7 + 8) = *(_DWORD *)(*((_DWORD *)v8 - 6) + 32);
        *((_DWORD *)v7 + 9) = v9;
        *((_DWORD *)v7 + 10) = v10;
        *((_DWORD *)v7 + 11) = v11;
        v12 = *((_DWORD *)v8 - 10);
        v13 = *((_DWORD *)v8 - 9);
        v14 = *((_DWORD *)v8 - 8);
        *((_DWORD *)v7 + 12) = *((_DWORD *)v8 - 11);
        *((_DWORD *)v7 + 13) = v12;
        *((_DWORD *)v7 + 14) = v13;
        *((_DWORD *)v7 + 15) = v14;
        *((_DWORD *)v7 + 7) = 1;
LABEL_12:
        v15 = *((_DWORD *)v8 - 5);
        *((_WORD *)v7 + 4) = *(v8 - 25);
        v16 = *((_DWORD *)v8 - 3);
        *((_WORD *)v7 + 5) = HIBYTE(*(v8 - 2)) | (*(v8 - 2) << 8);
        v17 = current_time;
        *((_DWORD *)v7 + 5) = bswap32(*((_DWORD *)v8 - 2));
        *((_DWORD *)v7 + 3) = bswap32(v17 - v15);
        *((_DWORD *)v7 + 4) = bswap32(v17 - v16);
        *((_DWORD *)v7 + 6) = bswap32(*((unsigned __int8 *)v8 - 2));
        v7 = sub_3B168();
      }
LABEL_13:
      v18 = (int)v7;
      ++v5;
      v8 += 26;
      if ( v7 )
        v18 = 1;
      if ( v5 > 2 )
        v18 = 0;
      if ( !v18 )
        return sub_3B8C4();
    }
    v19 = *((_DWORD *)v8 - 6);
    if ( v19 == any_interface )
      v20 = 0;
    else
      v20 = *(_DWORD *)(v19 + 28);
    v21 = dword_BDB40;
    *(_DWORD *)v7 = v20;
    *((_DWORD *)v7 + 1) = *((_DWORD *)v8 - 12);
    if ( v21 )
      *((_DWORD *)v7 + 7) = 0;
    goto LABEL_12;
  }
  return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
