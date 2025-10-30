void __fastcall sub_21F504(int **a1, int a2, int a3, char *a4, char *a5, char *s, int a7)
{
  char *v9; // r5
  int v10; // r3
  char *v11; // r12
  char *v12; // r1
  int v13; // r2
  int v14; // r0
  char *v15; // r9
  int v16; // t1
  char *v17; // r6
  int v18; // r10
  char *v19; // r7
  int v20; // r0
  _BOOL4 v21; // r3
  int v22; // r0
  _BYTE *v23; // r0
  _DWORD *v24; // r12
  size_t v25; // r6
  int **v26; // r2
  int v27; // r1
  void *v28; // r2
  int *v29; // r3
  _DWORD *v30; // r10
  int v31; // r6
  _DWORD *v32; // r4
  char *v33; // r11
  int v34; // r4
  int v35; // r0
  char *v36; // r11
  const char *v37; // r5
  int v38; // r3
  size_t v39; // r1
  size_t v40; // r0
  bool v41; // zf
  char *v42; // r5
  char *v43; // r0
  int v44; // t1
  int *v45; // r5
  int *v46; // r10
  int i; // r0
  int v48; // r4
  const char *v49; // r1
  size_t v50; // r2
  int v51; // r5
  size_t v52; // r0
  int j; // r1
  int k; // r1
  int **v55; // r0
  int **v56; // r6
  int v57; // t1
  int **v58; // r0
  char *src; // [sp+14h] [bp-138h]
  char *srca; // [sp+14h] [bp-138h]
  char *v61; // [sp+18h] [bp-134h]
  int v62; // [sp+1Ch] [bp-130h]
  int v63; // [sp+24h] [bp-128h] BYREF
  char *v64[3]; // [sp+2Ch] [bp-120h] BYREF
  int ****v65; // [sp+38h] [bp-114h]
  void (__fastcall *v66)(int, int); // [sp+3Ch] [bp-110h]
  int ***v67; // [sp+40h] [bp-10Ch] BYREF
  int (__fastcall *v68)(int, int); // [sp+44h] [bp-108h]
  char **v69; // [sp+48h] [bp-104h]
  char **v70; // [sp+4Ch] [bp-100h]
  int **v71; // [sp+50h] [bp-FCh] BYREF
  int *v72; // [sp+54h] [bp-F8h]
  int *v73; // [sp+58h] [bp-F4h] BYREF
  char **v74; // [sp+5Ch] [bp-F0h]
  char **v75; // [sp+60h] [bp-ECh]
  int *v76; // [sp+64h] [bp-E8h]
  int v77; // [sp+68h] [bp-E4h] BYREF
  char v78; // [sp+6Ch] [bp-E0h]
  char v79; // [sp+6Dh] [bp-DFh]
  void *ptr; // [sp+70h] [bp-DCh]
  int *v81; // [sp+74h] [bp-D8h]
  _DWORD v82[4]; // [sp+78h] [bp-D4h] BYREF
  void *v83; // [sp+88h] [bp-C4h]
  char v84; // [sp+90h] [bp-BCh] BYREF
  char v85; // [sp+A4h] [bp-A8h]
  void *v86; // [sp+A8h] [bp-A4h]
  char v87; // [sp+B0h] [bp-9Ch] BYREF
  char v88; // [sp+C0h] [bp-8Ch]
  void *v89; // [sp+C4h] [bp-88h]
  char v90; // [sp+CCh] [bp-80h] BYREF
  char v91; // [sp+DCh] [bp-70h]
  void *v92; // [sp+E0h] [bp-6Ch]
  char v93; // [sp+E8h] [bp-64h] BYREF
  char v94; // [sp+F8h] [bp-54h]
  int v95; // [sp+138h] [bp-14h]
  int v96; // [sp+13Ch] [bp-10h]
  _DWORD v97[3]; // [sp+140h] [bp-Ch]

  v9 = a4;
  v63 = a2;
  if ( a2 == 1 )
    goto LABEL_35;
  v10 = (unsigned __int8)*a4;
  if ( !v10 )
    goto LABEL_35;
  v11 = 0;
  v12 = v9;
  v13 = 0;
  do
  {
    v15 = v12 + 1;
    v14 = (unsigned __int8)v12[1];
    if ( v13 )
    {
      if ( v10 != v13 )
      {
        if ( v10 == 92 && v13 == v14 )
        {
          v57 = (unsigned __int8)v12[2];
          v12 += 2;
          v10 = v57;
        }
        else
        {
          ++v12;
          v10 = v14;
        }
        continue;
      }
      if ( !v12[1] )
        goto LABEL_21;
      v10 = (unsigned __int8)v12[2];
      v11 = v12 + 1;
      v13 = (unsigned __int8)v12[1];
      v12 += 2;
    }
    else
    {
      v11 = v12;
      v13 = v10;
      ++v12;
      v10 = v14;
    }
    if ( v13 == 39 || v13 == 34 )
      continue;
    if ( !v10 )
    {
LABEL_20:
      v15 = v12;
LABEL_21:
      if ( v9 < v15 )
      {
        v17 = v9;
        while ( 1 )
        {
          v9 = v15 - 1;
          v18 = (unsigned __int8)*(v15 - 1);
          v19 = v15--;
          v20 = isalnum(v18);
          v21 = v18 == 95;
          if ( !v18 )
            v21 = 1;
          if ( v20 )
            v22 = 1;
          else
            v22 = v21;
          if ( v18 == 58 )
            v22 |= 1u;
          if ( !v22 && !strchr(s, v18) )
            break;
          if ( v17 == v15 )
            goto LABEL_35;
        }
        v9 = v19;
      }
      else
      {
        v9 = v15;
      }
LABEL_35:
      v64[0] = v9;
LABEL_36:
      v71 = &v73;
      if ( !v9 )
        sub_33D0B8("basic_string::_M_construct null not valid");
      v23 = (_BYTE *)strlen(v9);
      v25 = (size_t)v23;
      v77 = (int)v23;
      if ( (unsigned int)v23 > 0xF )
      {
        v58 = (int **)sub_33B2BC(&v71, &v77, 0);
        v71 = v58;
        v73 = (int *)v77;
      }
      else
      {
        if ( v23 == (_BYTE *)1 )
        {
          v26 = &v73;
          LOBYTE(v73) = *v9;
          goto LABEL_40;
        }
        if ( !v23 )
        {
          v26 = &v73;
LABEL_40:
          v72 = (int *)v25;
          *((_BYTE *)v26 + v25) = 0;
          v27 = 1;
          v28 = v71;
          v79 = 0;
          ptr = v82;
          v78 = 1;
          if ( v71 == &v73 )
          {
            v23 = v73;
            v27 = (int)v74;
            v28 = v75;
            v29 = v76;
            v24 = v82;
          }
          else
          {
            v29 = v73;
            ptr = v71;
          }
          v77 = a3;
          if ( v71 == &v73 )
          {
            *v24 = v23;
            v24[1] = v27;
            v24[2] = v28;
            v24[3] = v29;
          }
          else
          {
            v82[0] = v29;
          }
          v85 = 0;
          v30 = *(_DWORD **)(dword_487D2C + 36);
          v97[0] = 0;
          v88 = 0;
          v91 = 0;
          v94 = 0;
          v95 = 0;
          v96 = 0;
          *(_DWORD *)((char *)v97 + 3) = 0;
          v81 = v72;
          if ( a7 )
            goto LABEL_52;
          if ( v30 )
          {
            while ( 2 )
            {
              v31 = *(_DWORD *)(v30[10] + 80);
              if ( *(_DWORD *)v31 )
              {
                do
                {
                  v23 = (_BYTE *)sub_258BD4(v23);
                  if ( v63 == 1 )
                  {
                    switch ( *(_BYTE *)(v31 + 32) & 0xF )
                    {
                      case 1:
                      case 2:
                      case 7:
                      case 8:
                        goto LABEL_56;
                      default:
                        goto LABEL_79;
                    }
                    goto LABEL_79;
                  }
LABEL_56:
                  v33 = a5;
                  v34 = *(_BYTE *)(v31 + 20) & 0x1F;
                  v35 = sub_21B3C4(v31);
                  sub_21F094((int)a1, v34, v35, (int)&v77, v64[0], v33);
                  v36 = v64[0];
                  v61 = a5;
                  v23 = (_BYTE *)sub_21B3C4(v31);
                  v37 = v23;
                  if ( ((*v23 - 43) & 0xFD) == 0 )
                  {
                    if ( *v64[0] == 91 )
                      sub_21F094((int)a1, 3, (int)(v23 + 1), (int)&v77, v64[0], v61);
                    while ( 1 )
                    {
                      v40 = strlen(v37);
                      v39 = dword_4897F4;
                      if ( v40 + 1 < dword_4897F4 )
                        break;
                      if ( dword_4897F4 )
                        v39 = 2 * dword_4897F4;
                      else
                        v38 = 1024;
                      if ( dword_4897F4 )
                      {
                        dword_4897F4 = v39;
                      }
                      else
                      {
                        v39 = v38;
                        dword_4897F4 = v38;
                      }
                      dword_4897F8 = (int)sub_93050((void *)dword_4897F8, v39);
                    }
                    v23 = strchr(v37, 32);
                    if ( v23 )
                    {
                      src = v23 + 1;
                      v23 = strchr(v37, 40);
                      v41 = v23 == 0;
                      if ( v23 )
                        v41 = src == 0;
                      if ( !v41 )
                      {
                        v49 = v37;
                        v50 = v23 - v37;
                        v62 = v23 - v37;
                        v51 = dword_4897F8;
                        memcpy((void *)dword_4897F8, v49, v50);
                        *(_BYTE *)(v51 + v62) = 32;
                        v52 = strlen(src);
                        memcpy((void *)(v51 + v62 + 1), src, v52 + 1);
                        sub_21F094((int)a1, 3, v51, (int)&v77, v36, v61);
                        v42 = (char *)dword_4897F8;
                        if ( *v36 != 91 )
                          goto LABEL_76;
                        sub_21F094((int)a1, 3, dword_4897F8 + 1, (int)&v77, v36, v61);
                      }
                      if ( src )
                      {
                        v42 = (char *)dword_4897F8;
LABEL_76:
                        strcpy(v42, src);
                        v43 = strchr(v42, 93);
                        if ( v43 )
                          *v43 = 0;
                        sub_21F094((int)a1, 3, (int)v42, (int)&v77, v36, v61);
                      }
                    }
                  }
LABEL_79:
                  v44 = *(_DWORD *)(v31 + 48);
                  v31 += 48;
                }
                while ( v44 );
              }
              v30 = (_DWORD *)*v30;
              if ( v30 )
                continue;
              break;
            }
            v30 = *(_DWORD **)(dword_487D2C + 36);
            while ( v30 )
            {
              v32 = (_DWORD *)v30[5];
              if ( v32 )
              {
                do
                {
                  sub_21F1F8((int)v32, (int)a1, v63, (int)&v77, v64[0], a5, a7);
                  v32 = (_DWORD *)*v32;
                }
                while ( v32 );
                v30 = (_DWORD *)*v30;
              }
              else
              {
                v30 = (_DWORD *)*v30;
              }
LABEL_52:
              ;
            }
          }
          v67 = &v71;
          v68 = sub_21F2E4;
          v72 = &v63;
          v64[1] = 0;
          v64[2] = 0;
          v74 = v64;
          v65 = 0;
          v66 = 0;
          v71 = a1;
          v73 = &v77;
          v75 = &a5;
          v76 = &a7;
          sub_2152F8(0, 0, (int)&v77);
          v45 = sub_20F388(0);
          v46 = (int *)sub_C2668((int)v45);
          i = sub_C269C((int)v45);
          srca = (char *)i;
          if ( v46 )
          {
            for ( ; v45 != v46; v45 = (int *)v45[3] )
            {
              sub_258BD4(i);
              for ( i = sub_C28A8(v45, &v71); ; i = sub_C28E4((int)&v71) )
              {
                v48 = i;
                if ( !i )
                  break;
                if ( a7 )
                {
                  if ( (*(_BYTE *)(i + 32) & 7) == 2 && a7 == **(char **)(*(_DWORD *)(i + 24) + 24) )
                    sub_21F1AC((int)a1, i, (int)&v77, v64[0], a5);
                }
                else
                {
                  sub_21F1AC((int)a1, i, (int)&v77, v64[0], a5);
                  if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v48 + 32) >> 3)) == 8 )
                    sub_21F39C((int)a1, v48, (int)&v77, v64[0], a5);
                }
              }
              if ( v45[2] )
              {
                i = sub_C23FC((int)v45);
                if ( i )
                  break;
              }
            }
            if ( a7 )
              goto LABEL_116;
            for ( j = sub_C28A8(v46, &v71); j; j = sub_C28E4((int)&v71) )
            {
              if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(j + 32) >> 3)) == 8 )
                sub_21F39C((int)a1, j, (int)&v77, v64[0], a5);
            }
          }
          else if ( a7 )
          {
LABEL_116:
            if ( v94 )
            {
              v94 = 0;
              if ( v92 != &v93 )
                sub_339E64(v92);
            }
            if ( v91 )
            {
              v91 = 0;
              if ( v89 != &v90 )
                sub_339E64(v89);
            }
            if ( v88 )
            {
              v88 = 0;
              if ( v86 != &v87 )
                sub_339E64(v86);
            }
            if ( v85 )
            {
              v85 = 0;
              if ( v83 != &v84 )
                sub_339E64(v83);
            }
            if ( ptr != v82 )
              sub_339E64(ptr);
            return;
          }
          if ( srca )
          {
            for ( k = sub_C28A8(srca, &v71); k; k = sub_C28E4((int)&v71) )
            {
              if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(k + 32) >> 3)) == 8 )
                sub_21F39C((int)a1, k, (int)&v77, v64[0], a5);
            }
          }
          if ( off_46D5A4[0][6] == (char *)1 && !a7 )
          {
            v67 = (int ***)a1;
            v69 = v64;
            v68 = (int (__fastcall *)(int, int))&v77;
            v70 = &a5;
            v55 = (int **)sub_1A2BB4();
            v56 = v55;
            if ( v55 )
            {
              v65 = &v67;
              v66 = sub_21F454;
              sub_1A3648(*v55, (int)v55[1], (int)&v67, (int)sub_21F454);
              free(v56);
            }
            v65 = &v67;
            v66 = sub_21F454;
            sub_1A3600(dword_487A1C, (int)&v67, (int)sub_21F454);
          }
          goto LABEL_116;
        }
        v58 = &v73;
      }
      v23 = memcpy(v58, v9, v25);
      v25 = v77;
      v26 = v71;
      goto LABEL_40;
    }
    v13 = v10;
    v11 = v12;
    while ( 1 )
    {
      v16 = (unsigned __int8)*++v12;
      v10 = v16;
      if ( v13 == 39 || v13 == 34 )
        break;
      v13 = v10;
      v11 = v12;
      if ( !v10 )
        goto LABEL_20;
    }
  }
  while ( v10 );
  if ( v13 == 39 )
  {
    v9 = v11 + 1;
    v64[0] = v11 + 1;
    goto LABEL_36;
  }
}
