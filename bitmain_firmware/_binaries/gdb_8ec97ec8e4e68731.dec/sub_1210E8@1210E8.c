int __fastcall sub_1210E8(int a1, int a2)
{
  int v3; // r5
  char *v4; // r11
  int v5; // r1
  int v6; // r3
  char v7; // r2
  void *v8; // r12
  void *v9; // r3
  int v10; // r0
  bool v11; // zf
  int v12; // r3
  int v13; // r7
  int v14; // lr
  char v15; // r3
  char *v16; // r4
  int v17; // r6
  int v18; // r0
  char v19; // t1
  unsigned int v20; // r8
  int v21; // r1
  int v22; // r3
  int v23; // r3
  int v24; // r0
  int v25; // r2
  int v26; // r3
  int v27; // r12
  int v28; // r3
  char *v29; // r4
  char v30; // t1
  int v31; // r2
  char v32; // t1
  unsigned int v33; // r6
  int v34; // r11
  char *v35; // r10
  char *v36; // r10
  char v37; // t1
  int v38; // r9
  int v39; // r8
  int v40; // r0
  char v41; // t1
  unsigned int v42; // r4
  char v43; // t1
  int v44; // r5
  int v45; // r4
  int v46; // r2
  char v47; // t1
  unsigned int v48; // r6
  unsigned __int64 v49; // r6
  int v50; // r2
  char *v51; // r3
  char *v52; // r3
  int v53; // r2
  int v54; // r6
  unsigned int v55; // r7
  char *v56; // r5
  unsigned int v57; // r10
  char *v58; // lr
  char v59; // r12
  char v60; // t1
  unsigned int v61; // r0
  int v62; // r3
  int v63; // lr
  int v64; // r1
  int v65; // r3
  size_t v66; // r2
  void *v67; // r3
  void *v68; // r0
  int v69; // r12
  int v70; // r3
  int v71; // r12
  char *v72; // r2
  unsigned int v73; // r1
  int v74; // r2
  unsigned int v75; // r6
  int v76; // lr
  int v77; // r3
  char v78; // t1
  unsigned int v79; // r6
  int v80; // r0
  _DWORD *v81; // r1
  size_t v83; // r1
  int v84; // r0
  int v85; // [sp+10h] [bp-3Ch]
  _DWORD *v86; // [sp+14h] [bp-38h]
  char *src; // [sp+18h] [bp-34h]
  int v88; // [sp+1Ch] [bp-30h]
  unsigned int v89; // [sp+30h] [bp-1Ch]
  struct obstack *v91; // [sp+44h] [bp-8h]

  v3 = *(_DWORD *)(dword_4872D8 + 344);
  if ( *(_BYTE *)(a1 + 17) && *(_BYTE *)(*(_DWORD *)a1 + 17) )
  {
    v84 = ((int (*)(void))loc_11E090)();
    return sub_12179C(v84);
  }
  else
  {
    v4 = (char *)sub_93028(0x34u);
    *(_DWORD *)v4 = a2;
    v91 = (struct obstack *)(v4 + 4);
    obstack_begin((struct obstack *)(v4 + 4), 0, 0, (void *(*)(int))sub_93028, (void (*)(void *))&loc_11C838);
    v5 = *((_DWORD *)v4 + 5);
    v6 = *((_DWORD *)v4 + 4);
    v7 = v5 - v6;
    if ( (unsigned int)(v5 - v6) < 0x1E4 )
    {
      obstack_newchunk(v91, 484);
      v6 = *((_DWORD *)v4 + 4);
      v5 = *((_DWORD *)v4 + 5);
    }
    v8 = (void *)*((_DWORD *)v4 + 3);
    v9 = (void *)(v6 + 484);
    v10 = *((_DWORD *)v4 + 7);
    *((_DWORD *)v4 + 4) = v9;
    v11 = v9 == v8;
    *((_DWORD *)v4 + 12) = v8;
    if ( v9 == v8 )
      v7 = v4[44];
    v12 = ((unsigned int)v9 + v10) & ~v10;
    *((_DWORD *)v4 + 4) = v12;
    if ( v11 )
      v4[44] = v7 | 2;
    if ( v12 - *((_DWORD *)v4 + 2) > (unsigned int)(v5 - *((_DWORD *)v4 + 2)) )
    {
      v12 = v5;
      *((_DWORD *)v4 + 4) = v5;
    }
    *((_DWORD *)v4 + 3) = v12;
    memset(v8, 0, 0x1E4u);
    if ( !*(_BYTE *)(a1 + 16) )
      ((void (__fastcall *)(int, int))loc_11FFD0)(v3, a1);
    v13 = 0;
    v14 = *(_DWORD *)(a1 + 4);
    v15 = *(_BYTE *)(v14 + a2);
    v16 = (char *)(v14 + a2 + 1);
    v17 = v15 & 0x7F;
    if ( v15 < 0 )
    {
      v18 = 0;
      do
      {
        v19 = *v16++;
        v18 += 7;
        v20 = v19 & 0x7F;
        v17 |= v20 << v18;
        v13 |= (v20 << (v18 - 32)) | (v20 >> (32 - v18));
      }
      while ( v19 < 0 );
    }
    v89 = v17;
    src = (char *)sub_93028(0x40u);
    if ( v17 )
    {
      v88 = 4;
      v86 = v4;
      while ( 1 )
      {
        v21 = v86[5];
        v22 = v86[4];
        if ( (unsigned int)(v21 - v22) <= 0x13 )
        {
          obstack_newchunk(v91, 20);
          v22 = v86[4];
          v21 = v86[5];
        }
        v23 = v22 + 20;
        v24 = v86[3];
        v86[4] = v23;
        v85 = v24;
        if ( v23 == v24 )
          *((_BYTE *)v86 + 44) |= 2u;
        v25 = v86[2];
        v26 = (v23 + v86[7]) & ~v86[7];
        v86[4] = v26;
        if ( v26 - v25 > (unsigned int)(v21 - v25) )
        {
          v86[4] = v21;
          v26 = v21;
        }
        v27 = 0;
        v86[3] = v26;
        *(_DWORD *)(v24 + 4) = 0;
        *(_DWORD *)(v24 + 8) = 0;
        *(_DWORD *)(v24 + 12) = 0;
        *(_DWORD *)(v24 + 16) = 0;
        *(_DWORD *)v24 = v89;
        v28 = 0;
        v30 = *v16;
        v29 = v16 + 1;
        v31 = v30 & 0x7F;
        if ( v30 < 0 )
        {
          do
          {
            v32 = *v29++;
            v27 += 7;
            v33 = v32 & 0x7F;
            v31 |= v33 << v27;
            v28 |= (v33 << (v27 - 32)) | (v33 >> (32 - v27));
          }
          while ( v32 < 0 );
        }
        v34 = *(unsigned __int16 *)(v24 + 10);
        *(_DWORD *)(v24 + 4) = v31;
        v35 = v29 + 1;
        *(_WORD *)(v24 + 8) = (unsigned __int8)*v29;
        while ( 1 )
        {
          v37 = *v35;
          v36 = v35 + 1;
          v38 = 0;
          v39 = v37 & 0x7F;
          if ( v37 < 0 )
          {
            v40 = 0;
            do
            {
              v41 = *v36++;
              v40 += 7;
              v42 = v41 & 0x7F;
              v39 |= v42 << v40;
              v38 |= (v42 << (v40 - 32)) | (v42 >> (32 - v40));
            }
            while ( v41 < 0 );
          }
          v43 = *v36;
          v35 = v36 + 1;
          v44 = 0;
          v45 = v43 & 0x7F;
          if ( v43 < 0 )
          {
            v46 = 0;
            do
            {
              v47 = *v35++;
              v46 += 7;
              v48 = v47 & 0x7F;
              v45 |= v48 << v46;
              v44 |= (v48 << (v46 - 32)) | (v48 >> (32 - v46));
            }
            while ( v47 < 0 );
          }
          if ( v45 == 33 )
            break;
          v49 = -1;
          if ( !v39 )
            goto LABEL_45;
LABEL_37:
          if ( v88 == v34 )
          {
            v83 = 16 * (v88 + 4);
            v88 += 4;
            src = (char *)sub_93050(src, v83);
            v34 = *(unsigned __int16 *)(v85 + 10);
          }
          v50 = 16 * v34;
          v34 = (unsigned __int16)(v34 + 1);
          v51 = &src[v50];
          *(_WORD *)v51 = v39;
          *((_QWORD *)v51 + 1) = v49;
          *((_WORD *)v51 + 1) = v45;
          *(_WORD *)(v85 + 10) = v34;
        }
        v52 = v35;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v56 = v35;
        v57 = 0;
        v58 = v52;
        do
        {
          v60 = *v58++;
          v59 = v60;
          ++v54;
          v61 = v60 & 0x7F;
          v55 |= v61 << v53;
          v62 = (v61 << (v53 - 32)) | (v61 >> (32 - v53));
          v53 += 7;
          v57 |= v62;
        }
        while ( v60 < 0 );
        v63 = v54;
        v49 = __PAIR64__(v57, v55);
        LOWORD(v45) = 33;
        if ( v53 <= 63 && (v59 & 0x40) != 0 )
          v49 |= -__SPAIR64__((1 << (v53 - 32)) | (1u >> (32 - v53)), 1 << v53);
        v35 = &v56[v63];
        if ( v39 )
          goto LABEL_37;
LABEL_45:
        v64 = v86[5];
        v65 = v86[4];
        if ( 16 * v34 > (unsigned int)(v64 - v65) )
        {
          obstack_newchunk(v91, 16 * v34);
          v65 = v86[4];
          v64 = v86[5];
          v66 = 16 * *(unsigned __int16 *)(v85 + 10);
        }
        else
        {
          v66 = 16 * v34;
        }
        v67 = (void *)(v65 + 16 * v34);
        v68 = (void *)v86[3];
        v86[4] = v67;
        if ( v67 == v68 )
          *((_BYTE *)v86 + 44) |= 2u;
        v69 = v86[2];
        v70 = ((unsigned int)v67 + v86[7]) & ~v86[7];
        v86[4] = v70;
        if ( v70 - v69 > (unsigned int)(v64 - v69) )
        {
          v86[4] = v64;
          v70 = v64;
        }
        v86[3] = v70;
        *(_DWORD *)(v85 + 12) = v68;
        memcpy(v68, src, v66);
        v71 = v86[12];
        v72 = &v35[-*(_DWORD *)(a1 + 4)];
        v73 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(v85 + 16) = *(_DWORD *)(v71 + 4 * (v89 % 0x79));
        *(_DWORD *)(v71 + 4 * (v89 % 0x79)) = v85;
        if ( (unsigned int)v72 < v73 )
        {
          v16 = v35 + 1;
          LOBYTE(v74) = *v35 & 0x7F;
          v75 = (unsigned __int8)v74;
          if ( *v35 < 0 )
          {
            v76 = 0;
            v74 = (unsigned __int8)v74;
            v77 = 0;
            do
            {
              v78 = *v16++;
              v76 += 7;
              v79 = v78 & 0x7F;
              v80 = v74 | (v79 << v76);
              v74 = v80;
              v77 |= (v79 << (v76 - 32)) | (v79 >> (32 - v76));
            }
            while ( v78 < 0 );
            v75 = v80;
          }
          v89 = v75;
          v81 = *(_DWORD **)(v71 + 4 * (v75 % 0x79));
          if ( !v81 )
            goto LABEL_62;
          if ( v75 != *v81 )
          {
            while ( 1 )
            {
              v81 = (_DWORD *)v81[4];
              if ( !v81 )
                break;
              if ( v75 == *v81 )
                goto LABEL_63;
            }
LABEL_62:
            if ( v75 )
              continue;
          }
        }
LABEL_63:
        v4 = (char *)v86;
        break;
      }
    }
    free(src);
    return (int)v4;
  }
}
