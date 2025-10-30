void **__fastcall sub_3ABB0(void **result, int *a2)
{
  _DWORD *v2; // r4
  int v3; // r5
  _DWORD *v4; // r8
  int v6; // r12
  int v7; // r2
  int v8; // r3
  unsigned int v9; // r3
  unsigned int v10; // lr
  unsigned int v11; // r1
  unsigned int v12; // r12
  unsigned int v13; // r2
  unsigned int v14; // r0
  unsigned int v15; // r3
  unsigned int v16; // r1
  unsigned int v17; // r3
  int v18; // r1
  int v19; // r3
  unsigned int v20; // r2
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v29; // r3

  v2 = *result;
  if ( *result )
  {
    v3 = *a2;
    v4 = result;
    result = (void **)memset(*result, 0, 0x88u);
    if ( *(_WORD *)(v3 + 24) != 10 )
    {
      v6 = 0;
      v7 = *(_DWORD *)(v3 + 84);
      v8 = *(_DWORD *)(v3 + 56);
      *v2 = *(_DWORD *)(v3 + 28);
      v2[4] = v7;
      v2[8] = v8;
LABEL_4:
      v2[12] = v6;
      sub_6D4DC(v2 + 13);
      v9 = bswap32(*(_DWORD *)(v3 + 144));
      v10 = *(_DWORD *)(v3 + 156);
      v11 = bswap32(*(_DWORD *)(v3 + 148));
      v12 = *(_DWORD *)(v3 + 168);
      v13 = bswap32(*(_DWORD *)(v3 + 164));
      *((_WORD *)v2 + 64) = __rev16(*(unsigned __int16 *)(v3 + 140));
      v14 = *(_DWORD *)(v3 + 172);
      v2[21] = v9;
      v15 = *(_DWORD *)(v3 + 176);
      v2[22] = v11;
      v16 = *(_DWORD *)(v3 + 20);
      v2[24] = v13;
      v17 = bswap32(v15);
      v2[23] = bswap32(v10);
      v2[30] = bswap32(v16);
      v2[25] = bswap32(v12);
      v2[26] = bswap32(v14);
      v2[29] = v17;
      v2[28] = v17;
      v18 = *(_DWORD *)(v3 + 160);
      v19 = current_time;
      *((_BYTE *)v2 + 130) = *(_DWORD *)(v3 + 180);
      v20 = bswap32(*(_DWORD *)(v3 + 188));
      v2[27] = bswap32(v19 - v18);
      v2[31] = v20;
      *((_BYTE *)v2 + 131) = *((_BYTE *)a2 + 4);
      result = (void **)sub_3A918();
      *v4 = result;
      return result;
    }
    if ( dword_BCB2C )
    {
      v21 = *(_DWORD *)(v3 + 36);
      v22 = *(_DWORD *)(v3 + 40);
      v23 = *(_DWORD *)(v3 + 44);
      *v2 = *(_DWORD *)(v3 + 32);
      v2[1] = v21;
      v2[2] = v22;
      v2[3] = v23;
      v24 = *(_DWORD *)(v3 + 92);
      v25 = *(_DWORD *)(v3 + 96);
      v26 = *(_DWORD *)(v3 + 100);
      v6 = 0x1000000;
      v2[4] = *(_DWORD *)(v3 + 88);
      v2[5] = v24;
      v2[6] = v25;
      v2[7] = v26;
      v27 = *(_DWORD *)(v3 + 64);
      v28 = *(_DWORD *)(v3 + 68);
      v29 = *(_DWORD *)(v3 + 72);
      v2[8] = *(_DWORD *)(v3 + 60);
      v2[9] = v27;
      v2[10] = v28;
      v2[11] = v29;
      goto LABEL_4;
    }
  }
  return result;
}
