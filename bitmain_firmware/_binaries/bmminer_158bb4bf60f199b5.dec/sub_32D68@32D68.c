int __fastcall sub_32D68(int a1)
{
  int v1; // r0
  int v2; // r9
  int v3; // r7
  int v4; // r11
  int v5; // r9
  _DWORD *v6; // r10
  int *v7; // r4
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int *v11; // lr
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r0
  int v16; // r6
  int v17; // r1
  int v18; // r9
  int v19; // r2
  _DWORD *v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r7
  _DWORD *v25; // lr
  _DWORD *v26; // lr
  int v27; // r1
  int v28; // r2
  int v29; // r3
  _DWORD *v30; // lr
  int v31; // r1
  int v32; // r2
  int v33; // r3
  bool v34; // zf
  unsigned int v35; // r4
  int v36; // r5
  unsigned int v37; // r3
  int v38; // r1
  _DWORD *v40; // r3
  int v41; // r1
  int v42; // lr
  int v43; // r0
  _DWORD *v44; // r2
  int v45; // r0
  int v46; // r1
  int v47; // lr
  int v48; // r0
  int v49; // r0
  int v50; // r1
  int v51; // r3
  int v52[33]; // [sp+0h] [bp-9A4h] BYREF
  int *v53; // [sp+88h] [bp-91Ch]
  _DWORD *v54; // [sp+8Ch] [bp-918h]
  int v55; // [sp+90h] [bp-914h]
  unsigned int v56; // [sp+94h] [bp-910h]
  _DWORD *v57; // [sp+98h] [bp-90Ch]
  int v58; // [sp+9Ch] [bp-908h]
  int v59; // [sp+A0h] [bp-904h]
  int v60; // [sp+A4h] [bp-900h]
  int v61; // [sp+A8h] [bp-8FCh]
  int v62; // [sp+ACh] [bp-8F8h]
  int v63; // [sp+B0h] [bp-8F4h]
  int v64; // [sp+B4h] [bp-8F0h]
  int v65; // [sp+B8h] [bp-8ECh]
  int v66; // [sp+BCh] [bp-8E8h]
  int *v67; // [sp+C0h] [bp-8E4h]
  void *v68; // [sp+C4h] [bp-8E0h]
  _DWORD v69[2]; // [sp+C8h] [bp-8DCh] BYREF
  _DWORD v70[2]; // [sp+D0h] [bp-8D4h] BYREF
  _BYTE v71[20]; // [sp+D8h] [bp-8CCh] BYREF
  int v72; // [sp+ECh] [bp-8B8h]
  int v73; // [sp+F0h] [bp-8B4h]
  int v74; // [sp+F4h] [bp-8B0h]
  int v75; // [sp+F8h] [bp-8ACh]
  int v76; // [sp+FCh] [bp-8A8h]
  int v77; // [sp+100h] [bp-8A4h]
  int v78; // [sp+104h] [bp-8A0h]
  int v79; // [sp+108h] [bp-89Ch] BYREF
  _BYTE v80[148]; // [sp+10Ch] [bp-898h] BYREF
  char s[2052]; // [sp+1A0h] [bp-804h] BYREF

  v66 = a1;
  v67 = &dword_9E31C;
  sub_4A60C(v69);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "\n");
    sub_47EC8(3, s, 0);
    if ( (unsigned int)*v67 > 3 )
    {
      snprintf(s, 0x800u, ">>>> Send work for chain %d.\n", v66);
      sub_47AB4(3, s, 0);
    }
  }
  v1 = v66;
  v56 = 0;
  v65 = 0;
  v64 = 6656 * v66 + 3898820;
  v63 = (unsigned __int8)~((unsigned int)~(v66 << 25) >> 25);
  v2 = 1 << v66;
  v3 = 0;
  v68 = &unk_EDF22;
  do
  {
    v4 = v2;
    v5 = v3;
    v61 = 0;
    v62 = *(_DWORD *)(dword_1AEA68 + 4 * ((_DWORD)v68 + v65) + 4) + 20;
    do
    {
      v6 = (_DWORD *)v62;
      v60 = v61 & 3;
      v55 = 0;
      do
      {
        while ( (v4 & sub_6FF04(v1)) == 0 )
        {
          ++v5;
          v1 = usleep(0x3E8u);
        }
        v7 = (int *)v71;
        v8 = v6 - 5;
        v54 = v6 - 5;
        do
        {
          v9 = *v8;
          v8 += 4;
          v10 = *(v8 - 3);
          v11 = v7;
          v12 = *(v8 - 2);
          v7 += 4;
          v13 = *(v8 - 1);
          *v11 = v9;
          v11[1] = v10;
          v11[2] = v12;
          v11[3] = v13;
        }
        while ( v8 != v6 + 7 );
        v14 = 0;
        *v7 = *v8;
        memset(&v80[2], 0, 0x92u);
        v15 = *(v6 - 3);
        v59 = v5;
        v16 = v64 + 52 * v56;
        v17 = *(v6 - 2);
        v18 = v60;
        v80[1] = v63;
        v19 = *(v6 - 1);
        LOBYTE(v72) = v72 + 1;
        *(_DWORD *)&v80[8] = v15;
        *(_DWORD *)&v80[12] = v17;
        *(_DWORD *)&v80[16] = v19;
        v53 = &v79;
        v58 = v4;
        *(_DWORD *)&v80[4] = v56 & 0x7F | v55;
        v57 = v54 + 12;
        v80[0] = 1;
        do
        {
          v20 = (_DWORD *)(dword_1AEA68 + v16);
          if ( v14 == v18 )
          {
            v40 = &v80[32 * v14 + 20];
            v41 = v6[1];
            v42 = v6[2];
            *v40 = *v6;
            v43 = v6[3];
            v44 = v54;
            v40[1] = v41;
            v40[3] = v43;
            v45 = v6[4];
            v40[2] = v42;
            v46 = v6[5];
            v47 = v6[6];
            v40[4] = v45;
            v48 = v6[7];
            v40[5] = v46;
            v40[6] = v47;
            v40[7] = v48;
            do
            {
              v44 += 4;
              v20 += 4;
              v49 = *(v44 - 3);
              v50 = *(v44 - 2);
              v51 = *(v44 - 1);
              v34 = v44 == v57;
              *(v20 - 4) = *(v44 - 4);
              *(v20 - 3) = v49;
              *(v20 - 2) = v50;
              *(v20 - 1) = v51;
            }
            while ( !v34 );
            *v20 = *v57;
          }
          else
          {
            v21 = v73;
            v22 = v74;
            v23 = v75;
            v24 = v71;
            v25 = &v80[32 * v14 + 20];
            *v25 = v72;
            v25[1] = v21;
            v25[2] = v22;
            v25[3] = v23;
            v26 = &v80[32 * v14 + 36];
            v27 = v77;
            v28 = v78;
            v29 = v79;
            *v26 = v76;
            v26[1] = v27;
            v26[2] = v28;
            v26[3] = v29;
            do
            {
              v30 = v24;
              v24 += 4;
              v20 += 4;
              v31 = v30[1];
              v32 = v30[2];
              v33 = v30[3];
              v34 = v30 + 4 == v53;
              *(v20 - 4) = *v30;
              *(v20 - 3) = v31;
              *(v20 - 2) = v32;
              *(v20 - 1) = v33;
            }
            while ( !v34 );
            *v20 = *v24;
          }
          ++v14;
          v16 += 52;
        }
        while ( v14 != 4 );
        v4 = v58;
        v6 += 13;
        v35 = v56 + 4;
        v5 = v59;
        memcpy(v52, &v80[16], sizeof(v52));
        v36 = v55 + 128;
        v55 += 128;
        v1 = sub_1B010(
               *(unsigned int *)v80,
               *(int *)&v80[4],
               *(int *)&v80[8],
               *(int *)&v80[12],
               v52[0],
               v52[1],
               v52[2],
               v52[3],
               v52[4],
               v52[5],
               v52[6],
               v52[7],
               v52[8],
               v52[9],
               v52[10],
               v52[11],
               v52[12],
               v52[13],
               v52[14],
               v52[15],
               v52[16],
               v52[17],
               v52[18],
               v52[19],
               v52[20],
               v52[21],
               v52[22],
               v52[23],
               v52[24],
               v52[25],
               v52[26],
               v52[27],
               v52[28]);
        if ( v35 >= 0x80 )
          v37 = 0;
        else
          v37 = v35;
        v56 = v37;
      }
      while ( v36 != 1024 );
      ++v61;
      v62 += 416;
    }
    while ( v61 != 383 );
    v3 = v5;
    v2 = v4;
    ++v65;
  }
  while ( v65 != 78 );
  sub_4A60C(v70);
  v38 = v70[0] - v69[0];
  if ( v70[1] - v69[1] < 0 )
    --v38;
  if ( (unsigned int)*v67 > 3 )
  {
    snprintf(s, 0x800u, "Send work for chain %d done, time cost %lds, sleep_count = %d\n", v66, v38, v3);
    sub_47AB4(3, s, 0);
  }
  return 0;
}
