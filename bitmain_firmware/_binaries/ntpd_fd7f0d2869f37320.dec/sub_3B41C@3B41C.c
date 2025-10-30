void **__fastcall sub_3B41C(void **result, int *a2)
{
  _DWORD *v2; // r6
  _DWORD *v4; // r4
  int v5; // r5
  int v6; // r12
  unsigned int v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r0
  unsigned int v10; // r3
  unsigned int v11; // r1
  unsigned int v12; // r0
  unsigned int v13; // r3
  unsigned int v14; // r1
  unsigned int v15; // r3
  int v16; // r1
  int v17; // r3
  unsigned int v18; // r2
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3

  v2 = result;
  v4 = *result;
  v5 = *a2;
  if ( *result )
  {
    result = (void **)memset(*result, 0, 0x88u);
    if ( *(_WORD *)(v5 + 24) != 10 )
    {
      v4[12] = 0;
      v6 = 0;
      *v4 = *(_DWORD *)(v5 + 28);
      v4[4] = *(_DWORD *)(v5 + 84);
      v4[8] = *(_DWORD *)(v5 + 56);
LABEL_4:
      v4[12] = v6;
      sub_6E4B4(v4 + 13);
      v7 = bswap32(*(_DWORD *)(v5 + 144));
      v8 = bswap32(*(_DWORD *)(v5 + 148));
      *((_WORD *)v4 + 64) = HIBYTE(*(_WORD *)(v5 + 140)) | (*(_WORD *)(v5 + 140) << 8);
      v9 = *(_DWORD *)(v5 + 156);
      v4[21] = v7;
      v10 = *(_DWORD *)(v5 + 164);
      v4[22] = v8;
      v11 = *(_DWORD *)(v5 + 168);
      v4[23] = bswap32(v9);
      v12 = *(_DWORD *)(v5 + 172);
      v4[24] = bswap32(v10);
      v13 = *(_DWORD *)(v5 + 176);
      v4[25] = bswap32(v11);
      v14 = *(_DWORD *)(v5 + 20);
      v15 = bswap32(v13);
      v4[26] = bswap32(v12);
      v4[29] = v15;
      v4[28] = v15;
      v4[30] = bswap32(v14);
      v16 = *(_DWORD *)(v5 + 160);
      v17 = current_time;
      *((_BYTE *)v4 + 130) = *(_DWORD *)(v5 + 180);
      v18 = *(_DWORD *)(v5 + 188);
      v4[27] = bswap32(v17 - v16);
      v4[31] = bswap32(v18);
      *((_BYTE *)v4 + 131) = *((_BYTE *)a2 + 4);
      result = (void **)sub_3B168();
      *v2 = result;
      return result;
    }
    if ( dword_BDB40 )
    {
      v4[12] = 1;
      v19 = *(_DWORD *)(v5 + 36);
      v20 = *(_DWORD *)(v5 + 40);
      v21 = *(_DWORD *)(v5 + 44);
      *v4 = *(_DWORD *)(v5 + 32);
      v4[1] = v19;
      v4[2] = v20;
      v4[3] = v21;
      v22 = *(_DWORD *)(v5 + 92);
      v23 = *(_DWORD *)(v5 + 96);
      v24 = *(_DWORD *)(v5 + 100);
      v6 = 0x1000000;
      v4[4] = *(_DWORD *)(v5 + 88);
      v4[5] = v22;
      v4[6] = v23;
      v4[7] = v24;
      v25 = *(_DWORD *)(v5 + 64);
      v26 = *(_DWORD *)(v5 + 68);
      v27 = *(_DWORD *)(v5 + 72);
      v4[8] = *(_DWORD *)(v5 + 60);
      v4[9] = v25;
      v4[10] = v26;
      v4[11] = v27;
      goto LABEL_4;
    }
  }
  return result;
}
