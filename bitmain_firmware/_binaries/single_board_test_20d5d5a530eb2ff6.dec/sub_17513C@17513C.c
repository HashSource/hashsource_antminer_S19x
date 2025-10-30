bool __fastcall sub_17513C(int a1, int **a2, int **a3, int *a4, int ***a5)
{
  int **v6; // r1
  int **v7; // r0
  int v8; // r5
  int v9; // r3
  unsigned int v10; // r1
  unsigned int v11; // r2
  int *v12; // r10
  int v13; // r12
  int v14; // r5
  int v15; // r3
  int v16; // r7
  int v17; // r11
  int v18; // r8
  int v19; // r9
  int v20; // lr
  int v21; // r6
  int v22; // r12
  int v23; // r3
  int v24; // r8
  int v25; // lr
  int v26; // r4
  int v27; // r3
  int v28; // r9
  int v29; // lr
  int v30; // r3
  int v31; // r5
  int v32; // r2
  int v33; // r1
  int v34; // r3
  int v35; // r1
  _BOOL4 v36; // r4
  int v38; // [sp+4h] [bp-108h]
  int *v39; // [sp+Ch] [bp-100h]
  int v40; // [sp+10h] [bp-FCh]
  int v41; // [sp+10h] [bp-FCh]
  int v42; // [sp+14h] [bp-F8h]
  int v43; // [sp+18h] [bp-F4h]
  int v44; // [sp+1Ch] [bp-F0h]
  int v45; // [sp+1Ch] [bp-F0h]
  int v46; // [sp+1Ch] [bp-F0h]
  int v47; // [sp+20h] [bp-ECh]
  int v48; // [sp+20h] [bp-ECh]
  int v49; // [sp+20h] [bp-ECh]
  int v50; // [sp+24h] [bp-E8h]
  int v51; // [sp+24h] [bp-E8h]
  int v52; // [sp+28h] [bp-E4h]
  int v53; // [sp+28h] [bp-E4h]
  int v54; // [sp+2Ch] [bp-E0h]
  _BYTE *v55; // [sp+44h] [bp-C8h]
  _BYTE *v56; // [sp+48h] [bp-C4h]
  _BYTE *v57; // [sp+4Ch] [bp-C0h]
  _BYTE *v58; // [sp+50h] [bp-BCh]
  _BYTE *v59; // [sp+54h] [bp-B8h]
  _BYTE *v60; // [sp+58h] [bp-B4h]
  _BYTE *v61; // [sp+5Ch] [bp-B0h]
  int v62; // [sp+60h] [bp-ACh]
  int v63; // [sp+64h] [bp-A8h]
  unsigned int v64; // [sp+68h] [bp-A4h]
  int v65; // [sp+6Ch] [bp-A0h]
  unsigned int v66; // [sp+70h] [bp-9Ch]
  unsigned int v67; // [sp+74h] [bp-98h]
  unsigned int v68; // [sp+78h] [bp-94h]
  unsigned int v69; // [sp+7Ch] [bp-90h]
  int v70; // [sp+80h] [bp-8Ch]
  int v71; // [sp+84h] [bp-88h]
  int v72; // [sp+88h] [bp-84h]
  int v73; // [sp+8Ch] [bp-80h]
  int v74; // [sp+90h] [bp-7Ch]
  int v75; // [sp+94h] [bp-78h]
  int v76; // [sp+98h] [bp-74h]
  int v77; // [sp+9Ch] [bp-70h]
  int v78; // [sp+A0h] [bp-6Ch]
  int v79; // [sp+A4h] [bp-68h]
  _DWORD *v80; // [sp+A8h] [bp-64h]
  int v81; // [sp+ACh] [bp-60h]
  int v82; // [sp+B0h] [bp-5Ch]
  int **v83; // [sp+B4h] [bp-58h]
  int v87; // [sp+C8h] [bp-44h]
  int v88; // [sp+CCh] [bp-40h]
  int v89; // [sp+D0h] [bp-3Ch]
  int v90; // [sp+D4h] [bp-38h]
  int v91; // [sp+D8h] [bp-34h]
  int v92; // [sp+DCh] [bp-30h]
  int v93; // [sp+E0h] [bp-2Ch]
  int v94; // [sp+E4h] [bp-28h]
  int v95; // [sp+E8h] [bp-24h]
  int v96; // [sp+ECh] [bp-20h]
  int v97; // [sp+F0h] [bp-1Ch]
  int v98; // [sp+F4h] [bp-18h]
  int v99; // [sp+F8h] [bp-14h]
  int v100; // [sp+FCh] [bp-10h]
  int v101; // [sp+100h] [bp-Ch]
  int v102; // [sp+104h] [bp-8h]
  _BYTE v103[4]; // [sp+108h] [bp-4h] BYREF

  if ( a2 == a3 )
    return sub_174FF4(a1, a2, a4, a5);
  sub_130BC0((int)a5);
  v7 = sub_130CCC(a5, v6);
  v83 = v7;
  if ( v7 && (v8 = (int)a2[1] + (_DWORD)a3[1] + 4, sub_B89D8((int)v7, v8)) )
  {
    v83[1] = (int *)v8;
    if ( v8 > 0 )
      memset(*v83, 0, 4 * v8);
    v82 = (int)a3[1];
    if ( v82 > 0 )
    {
      v79 = 0;
      v81 = 0;
      v80 = *a3 + 3;
      v9 = 0;
      v42 = (int)a2[1];
      do
      {
        v10 = *(v80 - 3);
        if ( v9 + 1 == v82 )
        {
          v11 = 0;
        }
        else
        {
          __pld(v80);
          v11 = *(v80 - 2);
        }
        if ( v42 > 0 )
        {
          v39 = *a2;
          v67 = 4 * (((v11 ^ v10) >> 20) & 0xF);
          v43 = (*v83)[v79];
          v68 = 4 * (((v11 ^ v10) >> 24) & 0xF);
          v77 = 4 * (v10 >> 28);
          v62 = 4 * ((v11 ^ v10) & 0xF);
          v69 = 4 * ((v11 ^ v10) >> 28);
          v63 = 4 * ((unsigned __int8)(v11 ^ v10) >> 4);
          v64 = 4 * (((v11 ^ v10) >> 8) & 0xF);
          v66 = 4 * (((v11 ^ v10) >> 16) & 0xF);
          v65 = 4 * ((unsigned __int16)(v11 ^ v10) >> 12);
          v78 = 4 * (HIBYTE(v11) & 0xF);
          v55 = &v103[4 * (v11 >> 28)];
          v70 = 4 * (*(v80 - 3) & 0xF);
          v71 = 4 * ((unsigned __int8)v10 >> 4);
          v72 = 4 * ((v10 >> 8) & 0xF);
          v12 = &(*v83)[v79];
          v73 = 4 * ((unsigned __int16)v10 >> 12);
          v74 = 4 * (HIWORD(v10) & 0xF);
          v75 = 4 * ((v10 >> 20) & 0xF);
          v76 = 4 * (HIBYTE(v10) & 0xF);
          v38 = 0;
          v56 = &v103[4 * (v11 & 0xF)];
          v57 = &v103[4 * ((unsigned __int8)v11 >> 4)];
          v58 = &v103[4 * ((v11 >> 8) & 0xF)];
          v59 = &v103[4 * ((unsigned __int16)v11 >> 12)];
          v60 = &v103[4 * (HIWORD(v11) & 0xF)];
          v61 = &v103[4 * ((v11 >> 20) & 0xF)];
          do
          {
            v35 = *v39;
            if ( v42 == v38 + 1 )
            {
              v21 = 0;
              v54 = 0;
              v20 = 0;
              v52 = 0;
              v19 = 0;
              v50 = 0;
              v18 = 0;
              v47 = 0;
              v17 = 0;
              v44 = 0;
              v15 = 0;
              v40 = 0;
              v16 = 0;
              v14 = 0;
              v13 = 0;
            }
            else
            {
              v13 = v39[1];
              v14 = 2 * v13;
              v15 = 8 * v13;
              v16 = 4 * v13;
              v17 = v13 ^ (2 * v13);
              v18 = v13 ^ (4 * v13);
              v19 = (2 * v13) ^ (4 * v13);
              v47 = (8 * v13) ^ v17;
              v20 = (4 * v13) ^ v17;
              v52 = (8 * v13) ^ v18;
              v54 = (8 * v13) ^ v19;
              v40 = v13 ^ (8 * v13);
              v21 = (8 * v13) ^ v20;
              v44 = (2 * v13) ^ (8 * v13);
              v50 = (4 * v13) ^ (8 * v13);
            }
            v89 = v14;
            v91 = v16;
            v95 = v15;
            v87 = 0;
            v38 += 2;
            v96 = v40;
            v90 = v17;
            v94 = v20;
            v93 = v19;
            v39 += 2;
            v97 = v44;
            v88 = v13;
            v22 = v13 ^ v35;
            v92 = v18;
            v98 = v47;
            v99 = v50;
            v100 = v52;
            v101 = v54;
            v102 = v21;
            v41 = *((_DWORD *)v55 - 16);
            v23 = *((_DWORD *)v56 - 16);
            v53 = *(int *)((char *)&v87 + v78);
            v45 = *((_DWORD *)v57 - 16);
            v48 = *((_DWORD *)v58 - 16);
            v51 = *((_DWORD *)v59 - 16);
            v24 = *((_DWORD *)v60 - 16);
            v25 = *((_DWORD *)v61 - 16);
            v94 = (4 * v35) ^ v35 ^ (2 * v35);
            v91 = 4 * v35;
            v89 = 2 * v35;
            v88 = v35;
            v90 = v35 ^ (2 * v35);
            v95 = 8 * v35;
            v93 = (2 * v35) ^ (4 * v35);
            v101 = (8 * v35) ^ v93;
            v102 = (8 * v35) ^ v94;
            v99 = (4 * v35) ^ (8 * v35);
            v92 = v35 ^ (4 * v35);
            v98 = v90 ^ (8 * v35);
            v100 = (8 * v35) ^ v92;
            v26 = (2 * v22) ^ v22;
            v96 = v35 ^ (8 * v35);
            v97 = (2 * v35) ^ (8 * v35);
            v46 = v23 ^ (v41 << 28) ^ (16 * v45) ^ (v48 << 8) ^ (v51 << 12) ^ (v24 << 16) ^ (v25 << 20) ^ (v53 << 24);
            v27 = *(int *)((char *)&v87 + v70)
                ^ (*(int *)((char *)&v87 + v77) << 28)
                ^ (16 * *(int *)((char *)&v87 + v71))
                ^ (*(int *)((char *)&v87 + v72) << 8)
                ^ (*(int *)((char *)&v87 + v73) << 12);
            v49 = *(int *)((char *)&v87 + v74);
            v28 = *(int *)((char *)&v87 + v75);
            v29 = *(int *)((char *)&v87 + v76);
            v88 = v22;
            v96 = v22 ^ (8 * v22);
            v90 = v26;
            v89 = 2 * v22;
            v95 = 8 * v22;
            v97 = (2 * v22) ^ (8 * v22);
            v92 = v22 ^ (4 * v22);
            v94 = (4 * v22) ^ v26;
            v30 = v27 ^ (v49 << 16) ^ (v28 << 20) ^ (v29 << 24);
            v99 = (4 * v22) ^ (8 * v22);
            v93 = (2 * v22) ^ (4 * v22);
            v98 = (8 * v22) ^ v26;
            v100 = (8 * v22) ^ v92;
            v91 = 4 * v22;
            v31 = v43 ^ v30;
            v102 = (8 * v22) ^ v94;
            v101 = (8 * v22) ^ v93;
            v32 = *(int *)((char *)&v87 + v63);
            v33 = *(int *)((char *)&v87 + v69);
            v34 = v30 ^ *(int *)((char *)&v87 + v62);
            *v12 = v31;
            v43 = v12[2] ^ v46;
            v12[1] ^= v34
                    ^ (v33 << 28)
                    ^ (16 * v32)
                    ^ (*(int *)((char *)&v87 + v64) << 8)
                    ^ (*(int *)((char *)&v87 + v65) << 12)
                    ^ (*(int *)((char *)&v87 + v66) << 16)
                    ^ (*(int *)((char *)&v87 + v67) << 20)
                    ^ (*(int *)((char *)&v87 + v68) << 24)
                    ^ v46;
            v12[2] = v43;
            v12 += 2;
          }
          while ( v38 < v42 );
        }
        v79 += 2;
        v9 = v81 + 2;
        v81 = v9;
        v80 += 2;
      }
      while ( v9 < v82 );
    }
    sub_B8ACC(v83);
    v36 = sub_174D98(a1, (int *)v83, a4) != 0;
  }
  else
  {
    v36 = 0;
  }
  sub_130C74(a5);
  return v36;
}
