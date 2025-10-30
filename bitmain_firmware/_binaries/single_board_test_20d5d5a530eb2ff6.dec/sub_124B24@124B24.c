int __fastcall sub_124B24(unsigned __int8 *a1, int a2, unsigned int *a3)
{
  int v3; // r3
  int v5; // r1
  bool v6; // zf
  bool v7; // zf
  int v8; // r1
  int v9; // r3
  int v10; // r4
  _DWORD *v11; // r10
  int v12; // r4
  unsigned int v13; // r6
  unsigned int v14; // r5
  int v15; // r9
  int v16; // lr
  int v17; // r12
  int v18; // r7
  int v19; // r3
  int v20; // t2
  unsigned int v21; // r7
  unsigned int v22; // r1
  int v23; // lr
  int v24; // r3
  int v25; // r7
  int v26; // r1
  int v27; // r0
  int v28; // r12
  int v29; // r11
  int v30; // r5
  unsigned int v31; // r1
  unsigned int v32; // r5
  unsigned int v33; // r4
  int v34; // r0
  int v35; // r6
  int v36; // r8
  char *v37; // r11
  int v38; // r1
  int v39; // r11
  int v40; // r8
  int v41; // r4
  int v42; // r1
  unsigned int v43; // r12
  unsigned int v44; // r0
  int v45; // t2
  int v46; // r1
  unsigned int v47; // r11
  unsigned int v48; // lr
  unsigned int v49; // r5
  unsigned int v50; // r4
  int v51; // r5
  int v52; // r1
  int v53; // r10
  int v54; // r4
  int v55; // r5
  int v56; // t2
  unsigned int v57; // r12
  unsigned int v58; // r1
  int v59; // r3
  unsigned int v60; // r4
  int v62; // [sp+4h] [bp-48h]
  unsigned int v63; // [sp+4h] [bp-48h]
  unsigned int v64; // [sp+8h] [bp-44h]
  unsigned int v65; // [sp+Ch] [bp-40h]
  unsigned int v66; // [sp+Ch] [bp-40h]
  unsigned int v67; // [sp+10h] [bp-3Ch]
  unsigned int v68; // [sp+14h] [bp-38h]
  unsigned int v69; // [sp+18h] [bp-34h]
  unsigned int v70; // [sp+1Ch] [bp-30h]
  int v71; // [sp+1Ch] [bp-30h]
  unsigned int v72; // [sp+1Ch] [bp-30h]
  int v73; // [sp+20h] [bp-2Ch]
  unsigned int v74; // [sp+20h] [bp-2Ch]
  unsigned int v75; // [sp+24h] [bp-28h]
  unsigned int v76; // [sp+28h] [bp-24h]
  unsigned int v77; // [sp+30h] [bp-1Ch]
  unsigned int v78; // [sp+34h] [bp-18h]
  unsigned int v79; // [sp+38h] [bp-14h]
  unsigned int v80; // [sp+3Ch] [bp-10h]
  int v81; // [sp+40h] [bp-Ch]

  v3 = a2 + 287;
  v5 = a2 + 256;
  if ( v5 >= 0 )
    v3 = v5;
  v6 = a3 == 0;
  if ( a3 )
    v6 = a1 == 0;
  if ( v6 )
    return -1;
  v7 = (a2 & 0xFFFFFFBF) == 128;
  if ( (a2 & 0xFFFFFFBF) != 0x80 )
    v7 = a2 == 256;
  v8 = !v7;
  v73 = v8;
  if ( !v7 )
    return -2;
  v81 = a2;
  a3[68] = v3 >> 5;
  v9 = a2 - 65;
  v10 = a2 - 128;
  if ( v10 >= 0 )
    v9 = v10;
  v62 = 4 * (v9 >> 6);
  v11 = &dword_1C95BC[v62 + 1024];
  v12 = *(_DWORD *)&aInvalid[v62 * 4 - 240];
  v63 = ((a1[5] << 16) | (a1[4] << 24)) ^ a1[7] | (a1[6] << 8);
  v64 = ((a1[9] << 16) | (a1[8] << 24)) ^ a1[11] | (a1[10] << 8);
  v68 = ((a1[1] << 16) | (*a1 << 24)) ^ a1[3] | (a1[2] << 8);
  v67 = ((a1[13] << 16) | (a1[12] << 24)) ^ a1[15] | (a1[14] << 8);
  v13 = v63 ^ v11[1];
  v14 = v64 ^ v11[2];
  v65 = v67 ^ v11[3];
  v15 = dword_1C95BC[BYTE1(v14)]
      ^ dword_1C95BC[HIBYTE(v14) + 256]
      ^ dword_1C95BC[(unsigned __int8)v14 + 512]
      ^ dword_1C95BC[BYTE2(v14) + 768];
  v16 = dword_1C95BC[BYTE1(v13)]
      ^ dword_1C95BC[HIBYTE(v13) + 256]
      ^ dword_1C95BC[(unsigned __int8)v13 + 512]
      ^ dword_1C95BC[BYTE2(v13) + 768]
      ^ v15;
  v17 = dword_1C95BC[(unsigned __int8)((unsigned __int16)(v12 ^ v68) >> 8)]
      ^ dword_1C95BC[((v12 ^ v68) >> 24) + 256]
      ^ dword_1C95BC[(unsigned __int8)(v12 ^ v68) + 512]
      ^ dword_1C95BC[(unsigned __int8)((v12 ^ v68) >> 16) + 768]
      ^ v16;
  v18 = dword_1C95BC[HIBYTE(v65) + 256]
      ^ dword_1C95BC[(unsigned __int8)v65 + 512]
      ^ dword_1C95BC[BYTE2(v65) + 768]
      ^ dword_1C95BC[BYTE1(v65)];
  v19 = v15 ^ v18 ^ v17;
  v20 = __ROR4__(v19, 16);
  v21 = ((v18 ^ (unsigned int)v16) >> 24)
      | ((v18 ^ v16) << 24)
      | (((v18 ^ v16) & 0xFF00) << 8)
      | (((v18 ^ v16) & 0xFF0000u) >> 8);
  v22 = ((v16 ^ v19) << 8) & 0xFF00FF00 ^ ((v16 ^ (unsigned int)v19) >> 8) & 0xFF00FF ^ v20;
  v23 = v17 ^ v22;
  v24 = v20 ^ v21 ^ v17 ^ v22;
  v25 = v21 ^ v22;
  v26 = v22 ^ v24;
  if ( v81 > 128 )
  {
    v30 = a1[19] ^ ((a1[17] << 16) | (a1[16] << 24)) | (a1[18] << 8);
    v29 = ((a1[21] << 16) | (a1[20] << 24)) ^ a1[23] | (a1[22] << 8);
    if ( v81 <= 192 )
    {
      v27 = v73;
      v28 = v73;
    }
    else
    {
      v28 = ((a1[25] << 16) | (a1[24] << 24)) ^ a1[27] | (a1[26] << 8);
      v27 = ((a1[29] << 16) | (a1[28] << 24)) ^ a1[31] | (a1[30] << 8);
    }
  }
  else
  {
    v27 = v73;
    v28 = v73;
    v29 = v73;
    v30 = v73;
  }
  v80 = v24 ^ v28;
  v69 = v26 ^ v29;
  v31 = v26 ^ v29 ^ v11[5];
  v76 = v23 ^ v30;
  v66 = v27 ^ v25;
  v32 = v11[4] ^ v23 ^ v30;
  v70 = v11[6] ^ v24 ^ v28;
  v33 = v11[7] ^ v27 ^ v25;
  v34 = dword_1C95BC[(unsigned __int8)v31 + 768];
  v35 = dword_1C95BC[HIBYTE(v31)];
  v36 = BYTE2(v31);
  v37 = (char *)&dword_1C95BC[BYTE1(v31)];
  v38 = dword_1C95BC[HIBYTE(v70)]
      ^ dword_1C95BC[(unsigned __int8)v70 + 768]
      ^ dword_1C95BC[BYTE2(v70) + 512]
      ^ dword_1C95BC[BYTE1(v70) + 256];
  v39 = *((_DWORD *)v37 + 256) ^ v34 ^ v35 ^ dword_1C95BC[v36 + 512] ^ v38;
  v40 = dword_1C95BC[BYTE1(v32) + 256]
      ^ dword_1C95BC[HIBYTE(v32)]
      ^ dword_1C95BC[(unsigned __int8)v32 + 768]
      ^ dword_1C95BC[BYTE2(v32) + 512]
      ^ v39;
  v41 = dword_1C95BC[BYTE1(v33) + 256]
      ^ dword_1C95BC[HIBYTE(v33)]
      ^ dword_1C95BC[(unsigned __int8)v33 + 768]
      ^ dword_1C95BC[BYTE2(v33) + 512];
  v42 = v38 ^ v41 ^ v40;
  v71 = v11[9];
  v43 = (((v39 ^ (unsigned int)v42) >> 24) | ((v39 ^ v42) << 24))
      ^ v42
      ^ (((v39 ^ v42) & 0xFF00) << 8)
      ^ (((v39 ^ v42) & 0xFF0000u) >> 8);
  v44 = ((v41 ^ v39) << 8) & 0xFF00FF00 ^ ((v41 ^ (unsigned int)v39) >> 8) & 0xFF00FF;
  v45 = __ROR4__(v40, 16);
  v46 = v42 ^ v44 ^ v43 ^ v45;
  v47 = v46 ^ v63 ^ v43;
  v48 = v68 ^ v43 ^ v45 ^ v11[8];
  v78 = v68 ^ v43 ^ v45;
  v75 = v43 ^ v44 ^ v67;
  v79 = v64 ^ v46;
  v49 = v11[10] ^ v64 ^ v46;
  v50 = v11[11] ^ v75;
  v51 = dword_1C95BC[BYTE1(v49)]
      ^ dword_1C95BC[HIBYTE(v49) + 256]
      ^ dword_1C95BC[(unsigned __int8)v49 + 512]
      ^ dword_1C95BC[BYTE2(v49) + 768];
  v52 = dword_1C95BC[(unsigned __int8)(v47 ^ v71) + 512]
      ^ dword_1C95BC[((v47 ^ v71) >> 24) + 256]
      ^ dword_1C95BC[(unsigned __int8)((v47 ^ v71) >> 16) + 768]
      ^ dword_1C95BC[(unsigned __int8)((unsigned __int16)(v47 ^ v71) >> 8)]
      ^ v51;
  v53 = dword_1C95BC[BYTE1(v48)]
      ^ dword_1C95BC[HIBYTE(v48) + 256]
      ^ dword_1C95BC[(unsigned __int8)v48 + 512]
      ^ dword_1C95BC[BYTE2(v48) + 768]
      ^ v52;
  v54 = dword_1C95BC[BYTE1(v50)]
      ^ dword_1C95BC[HIBYTE(v50) + 256]
      ^ dword_1C95BC[(unsigned __int8)v50 + 512]
      ^ dword_1C95BC[BYTE2(v50) + 768];
  v55 = v51 ^ v54;
  v56 = __ROR4__(v55 ^ v53, 16);
  v57 = ((v54 ^ (unsigned int)v52) >> 24)
      | ((v54 ^ v52) << 24)
      | (((v54 ^ v52) & 0xFF00) << 8)
      | (((v54 ^ v52) & 0xFF0000u) >> 8);
  v58 = ((v52 ^ v55 ^ (unsigned int)v53) >> 8) & 0xFF00FF ^ ((v52 ^ v55 ^ v53) << 8) & 0xFF00FF00 ^ v56;
  v59 = v56 ^ v57 ^ v53 ^ v58;
  v60 = v69 ^ v58 ^ v59;
  v72 = v53 ^ v58 ^ v76;
  v74 = v66 ^ v57 ^ v58;
  v77 = v59 ^ v80;
  a3[10] = ((v60 << 13) | ((v59 ^ v80) >> 19)) ^ v79;
  a3[26] = ((2 * v60) | ((v59 ^ v80) >> 31)) ^ v79;
  a3[13] = ((v68 << 13) | (v63 >> 19)) ^ v60;
  a3[9] = v47 ^ (v72 << 13) ^ (v60 >> 19);
  a3[14] = ((v63 << 13) | (v64 >> 19)) ^ v59 ^ v80;
  a3[12] = ((v67 << 13) | (v68 >> 19)) ^ v72;
  a3[15] = ((v64 << 13) | (v67 >> 19)) ^ v74;
  a3[11] = v75 ^ (v74 >> 19) ^ ((v59 ^ v80) << 13);
  a3[8] = v78 ^ (v74 << 13) ^ (v72 >> 19);
  *a3 = ((v66 << 13) | (v76 >> 19)) ^ v68;
  a3[1] = ((v76 << 13) | (v69 >> 19)) ^ v63;
  a3[2] = ((v69 << 13) | (v80 >> 19)) ^ v64;
  a3[3] = ((v80 << 13) | (v66 >> 19)) ^ v67;
  a3[16] = ((2 * v66) | (v76 >> 31)) ^ v68;
  a3[5] = v69 ^ (v78 << 13) ^ (v47 >> 19);
  a3[24] = v78 ^ (2 * v74) ^ (v72 >> 31);
  a3[7] = v66 ^ (v75 >> 19) ^ (v79 << 13);
  a3[17] = ((2 * v76) | (v69 >> 31)) ^ v63;
  a3[18] = ((2 * v69) | (v80 >> 31)) ^ v64;
  a3[21] = v69 ^ (2 * v78) ^ (v47 >> 31);
  a3[19] = ((2 * v80) | (v66 >> 31)) ^ v67;
  a3[23] = v66 ^ (v75 >> 31) ^ (2 * v79);
  a3[4] = v76 ^ (v75 << 13) ^ (v78 >> 19);
  a3[6] = ((v47 << 13) | (v79 >> 19)) ^ v80;
  a3[22] = ((2 * v47) | (v79 >> 31)) ^ v80;
  a3[40] = ((v60 << 29) | ((v59 ^ v80) >> 3)) ^ v78;
  a3[20] = v76 ^ (2 * v75) ^ (v78 >> 31);
  a3[29] = ((2 * v68) | (v63 >> 31)) ^ v60;
  a3[30] = ((2 * v63) | (v64 >> 31)) ^ v59 ^ v80;
  a3[45] = ((v64 << 29) | (v67 >> 3)) ^ v60;
  a3[46] = ((v67 << 29) | (v68 >> 3)) ^ v59 ^ v80;
  a3[25] = v47 ^ (2 * v72) ^ (v60 >> 31);
  a3[27] = v75 ^ (v74 >> 31) ^ (2 * (v59 ^ v80));
  a3[28] = ((2 * v67) | (v68 >> 31)) ^ v72;
  a3[44] = ((v63 << 29) | (v64 >> 3)) ^ v72;
  a3[31] = ((2 * v64) | (v67 >> 31)) ^ v74;
  a3[47] = ((v68 << 29) | (v63 >> 3)) ^ v74;
  a3[36] = ((v47 << 29) | (v79 >> 3)) ^ v76;
  a3[32] = ((v69 << 29) | (v80 >> 3)) ^ v68;
  a3[41] = v47 ^ (v74 >> 3) ^ ((v59 ^ v80) << 29);
  a3[43] = v75 ^ (v72 << 29) ^ (v60 >> 3);
  a3[42] = v79 ^ (v74 << 29) ^ (v72 >> 3);
  a3[37] = v69 ^ (v75 >> 3) ^ (v79 << 29);
  a3[34] = ((v66 << 29) | (v76 >> 3)) ^ v64;
  a3[35] = ((v76 << 29) | (v69 >> 3)) ^ v67;
  a3[33] = ((v80 << 29) | (v66 >> 3)) ^ v63;
  a3[48] = ((v76 << 31) | (v69 >> 1)) ^ v68;
  a3[49] = ((v69 << 31) | (v80 >> 1)) ^ v63;
  a3[39] = v66 ^ (v78 << 29) ^ (v47 >> 3);
  a3[50] = ((v80 << 31) | (v66 >> 1)) ^ v64;
  a3[51] = ((v66 << 31) | (v76 >> 1)) ^ v67;
  a3[38] = v80 ^ (v75 << 29) ^ (v78 >> 3);
  if ( v81 <= 128 )
    return 0;
  a3[52] = v76 ^ (v78 << 31) ^ (v47 >> 1);
  a3[54] = v80 ^ (v75 >> 1) ^ (v79 << 31);
  a3[57] = ((v60 << 31) | (v77 >> 1)) ^ v47;
  a3[55] = v66 ^ (v75 << 31) ^ (v78 >> 1);
  a3[58] = v79 ^ (v74 >> 1) ^ (v77 << 31);
  a3[59] = v75 ^ (v74 << 31) ^ (v72 >> 1);
  a3[53] = ((v47 << 31) | (v79 >> 1)) ^ v69;
  a3[56] = v78 ^ (v72 << 31) ^ (v60 >> 1);
  if ( v81 <= 192 )
    return 0;
  a3[62] = v77 ^ ((v64 << 31) | (v67 >> 1));
  a3[64] = ((v76 << 19) | (v69 >> 13)) ^ v68;
  a3[60] = v72 ^ ((v68 << 31) | (v63 >> 1));
  a3[61] = ((v63 << 31) | (v64 >> 1)) ^ v60;
  a3[63] = ((v67 << 31) | (v68 >> 1)) ^ v74;
  a3[65] = ((v69 << 19) | (v80 >> 13)) ^ v63;
  a3[66] = ((v80 << 19) | (v66 >> 13)) ^ v64;
  a3[67] = (__SPAIR64__(v66, v76) >> 13) ^ v67;
  return 0;
}
