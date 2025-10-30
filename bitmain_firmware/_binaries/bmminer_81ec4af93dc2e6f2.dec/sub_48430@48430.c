int __fastcall sub_48430(int a1)
{
  int v1; // r7
  int v2; // r9
  int v3; // r4
  int v4; // r0
  int v5; // r11
  int v6; // r9
  _DWORD *v7; // r10
  int *v8; // r4
  int *v9; // r12
  int v10; // r0
  int v11; // r1
  int *v12; // lr
  int v13; // r2
  int v14; // r3
  int v15; // r5
  int v16; // r0
  char *v17; // r6
  int v18; // r1
  int v19; // r9
  int v20; // r2
  char *v21; // r12
  int v22; // r1
  int v23; // r2
  int v24; // r3
  _DWORD *v25; // r7
  _DWORD *v26; // lr
  _DWORD *v27; // lr
  int v28; // r1
  int v29; // r2
  int v30; // r3
  _DWORD *v31; // lr
  int v32; // r1
  int v33; // r2
  int v34; // r3
  bool v35; // zf
  unsigned int v36; // r4
  int v37; // r5
  unsigned int v38; // r3
  int v39; // r1
  int v40; // r3
  _DWORD *v42; // r3
  int v43; // r1
  int v44; // lr
  int v45; // r0
  _DWORD *v46; // r2
  int v47; // r0
  int v48; // r1
  int v49; // lr
  int v50; // r0
  int v51; // r0
  int v52; // r1
  int v53; // r3
  int v54; // r3
  int v55[33]; // [sp+0h] [bp-9ACh] BYREF
  int *v56; // [sp+88h] [bp-924h]
  _DWORD *v57; // [sp+8Ch] [bp-920h]
  int v58; // [sp+90h] [bp-91Ch]
  unsigned int v59; // [sp+94h] [bp-918h]
  _DWORD *v60; // [sp+98h] [bp-914h]
  int v61; // [sp+9Ch] [bp-910h]
  int v62; // [sp+A0h] [bp-90Ch]
  int v63; // [sp+A4h] [bp-908h]
  int v64; // [sp+A8h] [bp-904h]
  _DWORD *v65; // [sp+ACh] [bp-900h]
  int v66; // [sp+B0h] [bp-8FCh]
  char *v67; // [sp+B4h] [bp-8F8h]
  int v68; // [sp+B8h] [bp-8F4h]
  int v69; // [sp+BCh] [bp-8F0h]
  int v70; // [sp+C0h] [bp-8ECh]
  int v71; // [sp+C4h] [bp-8E8h]
  void *v72; // [sp+C8h] [bp-8E4h]
  _DWORD *v73; // [sp+CCh] [bp-8E0h]
  __time_t v74[2]; // [sp+D0h] [bp-8DCh] BYREF
  __time_t v75[2]; // [sp+D8h] [bp-8D4h] BYREF
  _BYTE v76[20]; // [sp+E0h] [bp-8CCh] BYREF
  int v77; // [sp+F4h] [bp-8B8h]
  int v78; // [sp+F8h] [bp-8B4h]
  int v79; // [sp+FCh] [bp-8B0h]
  int v80; // [sp+100h] [bp-8ACh]
  int v81; // [sp+104h] [bp-8A8h]
  int v82; // [sp+108h] [bp-8A4h]
  int v83; // [sp+10Ch] [bp-8A0h]
  int v84; // [sp+110h] [bp-89Ch] BYREF
  _BYTE v85[148]; // [sp+114h] [bp-898h] BYREF
  char s[2052]; // [sp+1A8h] [bp-804h] BYREF

  v70 = a1;
  v73 = &off_AFC24;
  sub_3D7A0(v74);
  if ( (unsigned int)off_AFC24 <= 3 || (memset(s, 0, 0x800u), strcpy(s, "\n"), sub_3BE28(3, s, 0), *v73 <= 3u) )
  {
    v71 = sub_26540();
    if ( !v71 )
    {
LABEL_37:
      v1 = v71;
      goto LABEL_26;
    }
  }
  else
  {
    snprintf(s, 0x800u, ">>>> Send work for chain %d.\n", v70);
    sub_3AF5C(3, s, 0, v54);
    v71 = sub_26540();
    if ( !v71 )
      goto LABEL_37;
  }
  v1 = 0;
  v59 = 0;
  v69 = 0;
  v72 = &unk_202A2A;
  v67 = (char *)&unk_80ACAC + 6656 * v70;
  v2 = 1 << v70;
  do
  {
    v3 = *(_DWORD *)(dword_530F04 + 4 * ((_DWORD)v72 + v69) + 4);
    v4 = sub_26580();
    v68 = v4;
    if ( v4 )
    {
      v5 = v2;
      v6 = v1;
      v65 = (_DWORD *)(v3 + 20);
      v64 = 0;
      v66 = (unsigned __int8)~((unsigned int)~(v70 << 25) >> 25);
      do
      {
        v7 = v65;
        v63 = v64 & 3;
        v58 = 0;
        do
        {
          while ( (v5 & sub_5BDB8(v4)) == 0 )
          {
            ++v6;
            v4 = usleep(0x3E8u);
          }
          v8 = (int *)v76;
          v9 = v7 - 5;
          v57 = v7 - 5;
          do
          {
            v10 = *v9;
            v9 += 4;
            v11 = *(v9 - 3);
            v12 = v8;
            v13 = *(v9 - 2);
            v8 += 4;
            v14 = *(v9 - 1);
            *v12 = v10;
            v12[1] = v11;
            v12[2] = v13;
            v12[3] = v14;
          }
          while ( v9 != v7 + 7 );
          v15 = 0;
          *v8 = *v9;
          memset(&v85[2], 0, 0x92u);
          v16 = *(v7 - 3);
          v62 = v6;
          v17 = &v67[52 * v59];
          v18 = *(v7 - 2);
          v19 = v63;
          v85[1] = v66;
          v20 = *(v7 - 1);
          LOBYTE(v77) = v77 + 1;
          *(_DWORD *)&v85[8] = v16;
          *(_DWORD *)&v85[12] = v18;
          *(_DWORD *)&v85[16] = v20;
          v56 = &v84;
          v61 = v5;
          *(_DWORD *)&v85[4] = v59 & 0x7F | v58;
          v60 = v57 + 12;
          v85[0] = 1;
          do
          {
            v21 = &v17[dword_530F04];
            if ( v15 == v19 )
            {
              v42 = &v85[32 * v15 + 20];
              v43 = v7[1];
              v44 = v7[2];
              *v42 = *v7;
              v45 = v7[3];
              v46 = v57;
              v42[1] = v43;
              v42[3] = v45;
              v47 = v7[4];
              v42[2] = v44;
              v48 = v7[5];
              v49 = v7[6];
              v42[4] = v47;
              v50 = v7[7];
              v42[5] = v48;
              v42[6] = v49;
              v42[7] = v50;
              do
              {
                v46 += 4;
                v21 += 16;
                v51 = *(v46 - 3);
                v52 = *(v46 - 2);
                v53 = *(v46 - 1);
                v35 = v46 == v60;
                *((_DWORD *)v21 - 4) = *(v46 - 4);
                *((_DWORD *)v21 - 3) = v51;
                *((_DWORD *)v21 - 2) = v52;
                *((_DWORD *)v21 - 1) = v53;
              }
              while ( !v35 );
              *(_DWORD *)v21 = *v60;
            }
            else
            {
              v22 = v78;
              v23 = v79;
              v24 = v80;
              v25 = v76;
              v26 = &v85[32 * v15 + 20];
              *v26 = v77;
              v26[1] = v22;
              v26[2] = v23;
              v26[3] = v24;
              v27 = &v85[32 * v15 + 36];
              v28 = v82;
              v29 = v83;
              v30 = v84;
              *v27 = v81;
              v27[1] = v28;
              v27[2] = v29;
              v27[3] = v30;
              do
              {
                v31 = v25;
                v25 += 4;
                v21 += 16;
                v32 = v31[1];
                v33 = v31[2];
                v34 = v31[3];
                v35 = v31 + 4 == v56;
                *((_DWORD *)v21 - 4) = *v31;
                *((_DWORD *)v21 - 3) = v32;
                *((_DWORD *)v21 - 2) = v33;
                *((_DWORD *)v21 - 1) = v34;
              }
              while ( !v35 );
              *(_DWORD *)v21 = *v25;
            }
            ++v15;
            v17 += 52;
          }
          while ( v15 != 4 );
          v5 = v61;
          v7 += 13;
          v36 = v59 + 4;
          v6 = v62;
          memcpy(v55, &v85[16], sizeof(v55));
          v37 = v58 + 128;
          v58 += 128;
          v4 = sub_27B6C(
                 *(unsigned int *)v85,
                 *(int *)&v85[4],
                 *(int *)&v85[8],
                 *(int *)&v85[12],
                 v55[0],
                 v55[1],
                 v55[2],
                 v55[3],
                 v55[4],
                 v55[5],
                 v55[6],
                 v55[7],
                 v55[8],
                 v55[9],
                 v55[10],
                 v55[11],
                 v55[12],
                 v55[13],
                 v55[14],
                 v55[15],
                 v55[16],
                 v55[17],
                 v55[18],
                 v55[19],
                 v55[20],
                 v55[21],
                 v55[22],
                 v55[23],
                 v55[24],
                 v55[25],
                 v55[26],
                 v55[27],
                 v55[28]);
          if ( v36 >= 0x80 )
            v38 = 0;
          else
            v38 = v36;
          v59 = v38;
        }
        while ( v37 != 1024 );
        v65 += 104;
        ++v64;
      }
      while ( v68 != v64 );
      v1 = v6;
      v2 = v5;
    }
    v35 = v71 == ++v69;
  }
  while ( !v35 );
LABEL_26:
  sub_3D7A0(v75);
  v39 = v75[0] - v74[0];
  if ( v75[1] - v74[1] < 0 )
    --v39;
  if ( *v73 > 3u )
  {
    snprintf(s, 0x800u, "Send work for chain %d done, time cost %lds, sleep_count = %d\n", v70, v39, v1);
    sub_3AF5C(3, s, 0, v40);
  }
  return 0;
}
