int __fastcall sub_3F318(char a1, int a2)
{
  char v3; // r5
  int v5; // r0
  unsigned int v6; // r2
  bool v7; // r3
  unsigned __int16 v8; // r0
  int *v9; // r5
  unsigned int v10; // r12
  char v11; // r6
  char v12; // r2
  int v13; // r4
  unsigned int v14; // r3
  int v15; // r6
  unsigned int *v16; // r4
  int *v17; // r12
  unsigned int v18; // r0
  unsigned int v19; // r1
  unsigned int *v20; // lr
  unsigned int v21; // r2
  unsigned int v22; // r3
  char v24; // r8
  char v25; // r6
  unsigned int v26; // lr
  int v27; // [sp+10h] [bp-870h] BYREF
  unsigned int v28; // [sp+14h] [bp-86Ch]
  int v29; // [sp+18h] [bp-868h]
  int v30; // [sp+1Ch] [bp-864h]
  _DWORD v31[8]; // [sp+20h] [bp-860h] BYREF
  unsigned int src[16]; // [sp+40h] [bp-840h] BYREF
  unsigned int v33[512]; // [sp+80h] [bp-800h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v5 = sub_3F1DC((_BYTE *)a2, 67);
  v6 = *(unsigned __int8 *)(a2 + 8);
  v7 = (v3 & 0x1F) != v5;
  if ( v6 >> 7 )
  {
    if ( v6 >> 7 == 1 )
    {
      v8 = __rev16(*(unsigned __int16 *)(a2 + 6));
      v9 = (int *)((char *)nullsub_2 + 168 * (*(unsigned __int8 *)(a2 + 5) >> 3) + dword_5BFCE8);
      v10 = *(_DWORD *)a2;
      v11 = *(_BYTE *)(a2 + 4);
      v12 = v27 & 0xB0 | a1 & 0xF | (v7 << 6);
      v13 = v9[30];
      v14 = bswap32(v8 << 13);
      *(_WORD *)((char *)&v29 + 1) = v8;
      HIWORD(v27) = 0x8000;
      LOBYTE(v27) = v12 & 0x5F | 0x80;
      LOBYTE(v8) = BYTE1(v27) & 0x80 | v11 & 0x7F;
      v15 = v14 | v13;
      v28 = bswap32(v10);
      BYTE1(v27) = v8;
      v16 = src;
      v17 = v9;
      HIBYTE(v29) = v9[41];
      do
      {
        v18 = *v17;
        v17 += 4;
        v19 = *(v17 - 3);
        v20 = v16;
        v21 = *(v17 - 2);
        v16 += 4;
        v22 = *(v17 - 1);
        *v20 = v18;
        v20[1] = v19;
        v20[2] = v21;
        v20[3] = v22;
      }
      while ( v17 != v9 + 16 );
      sub_3EE50((int)src, 64);
      src[0] = v15;
      sub_3F2A8((int)src, src, 0x40u);
      sub_2A608(v33);
      sub_2CBDC(v33, (char *)src, 64);
      v31[0] = v33[2];
      v31[1] = v33[3];
      v31[2] = v33[4];
      v31[3] = v33[5];
      v31[4] = v33[6];
      v31[5] = v33[7];
      v31[6] = v33[8];
      v31[7] = v33[9];
      sub_39590(&v27, v9[41], v9[30], v9[29], v9[28], v9[29], v31);
      return 0;
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy((char *)v33, "unsupported response type got!\n");
        sub_3B6AC(3, (const char *)v33, 0, *(int *)"t!\n");
      }
      return -1;
    }
  }
  else
  {
    v24 = *(_BYTE *)(a2 + 5);
    v25 = *(_BYTE *)(a2 + 4);
    v26 = *(_DWORD *)a2;
    HIBYTE(v27) = *(_BYTE *)(a2 + 8) & 0x1F | (32 * ((*(_BYTE *)(a2 + 8) >> 5) & 3)) & 0x7F;
    LOBYTE(v27) = v27 & 0xB0 | a1 & 0xF | (((v3 & 0x1F) != v5) << 6);
    BYTE1(v27) = v24;
    v28 = bswap32(v26);
    BYTE2(v27) = v25;
    sub_39960(&v27);
    return 0;
  }
}
