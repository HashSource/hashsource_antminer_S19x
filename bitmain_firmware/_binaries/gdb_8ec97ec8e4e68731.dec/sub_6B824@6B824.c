void __fastcall sub_6B824(int a1, int a2)
{
  int v2; // r6
  int v3; // r2
  int v4; // r8
  _DWORD *v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r9
  int *v9; // r11
  int v10; // r1
  int v11; // r3
  int *v12; // r7
  int v13; // r10
  int v14; // r0
  int v15; // r7
  int v16; // r0
  char *v17; // r3
  int *v18; // r6
  _DWORD *v19; // r2
  _DWORD *v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // r2
  _DWORD *v24; // r3
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _DWORD *v28; // r0
  void *v29; // r5
  int v30; // r7
  const char *v31; // r0
  int v32; // r0
  _DWORD *v33; // r3
  int v34; // r2
  int v35; // r2
  bool v36; // zf
  int v37; // r3
  int v38; // r0
  int v39; // r1
  int v40; // r1
  unsigned int v41; // r3
  unsigned int v42; // lr
  size_t v43; // r0
  int v44; // r0
  char v45; // r3
  int v46; // r0
  const char *v47; // r4
  int v48; // r0
  const char *v49; // r0
  const char *v50; // r4
  int v51; // r0
  const char *v52; // r0
  const char *v53; // r4
  int v54; // r0
  const char *v55; // r0
  int v57; // [sp+18h] [bp-5Ch]
  int v58; // [sp+18h] [bp-5Ch]
  int v59; // [sp+1Ch] [bp-58h]
  int v60; // [sp+1Ch] [bp-58h]
  int v61; // [sp+20h] [bp-54h]
  _DWORD *v62; // [sp+24h] [bp-50h]
  int v63; // [sp+28h] [bp-4Ch]
  int v64; // [sp+28h] [bp-4Ch]
  int v65; // [sp+2Ch] [bp-48h]
  char *src; // [sp+30h] [bp-44h]
  void *ptr; // [sp+3Ch] [bp-38h] BYREF
  int v68; // [sp+40h] [bp-34h] BYREF
  int v69; // [sp+44h] [bp-30h]
  _BYTE v70[16]; // [sp+48h] [bp-2Ch] BYREF
  void *v71; // [sp+58h] [bp-1Ch] BYREF
  int v72; // [sp+5Ch] [bp-18h]
  _BYTE v73[20]; // [sp+60h] [bp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 36);
  v5 = (_DWORD *)a1;
  v69 = 0;
  if ( (v3 & 0x80) != 0 )
    v2 = v4;
  v68 = 0;
  if ( (v3 & 0x80) == 0 )
  {
    a1 = sub_2ADCFC(v4, sub_6A508, &v68);
    v2 = v5[9];
  }
  if ( dword_48999C )
  {
    v30 = *(_DWORD *)sub_242FC8(a1);
    v31 = (const char *)sub_1B87A8(v5);
    a1 = sub_2594B0(v30, "Reading minimal symbols of objfile %s ...\n", v31);
  }
  if ( (*(_BYTE *)(v5[10] + 92) & 1) == 0 || v68 || v69 )
  {
    sub_1B2570(v70, v5);
    v6 = sub_93094(1, 0x40u);
    sub_1B6B1C(v5, dword_47B26C, v6);
    v7 = (*(int (**)(void))(*(_DWORD *)(v5[9] + 4) + 260))();
    v8 = v7;
    if ( v7 < 0 )
    {
      v47 = *(const char **)v5[9];
      v48 = sub_2A6910(v7);
      v49 = (const char *)sub_2A6920(v48);
      sub_946E0("Can't read symbols from %s: %s", v47, v49);
    }
    if ( v7 )
    {
      v9 = (int *)sub_2ACBF4(v2, v7);
      v46 = (*(int (**)(void))(*(_DWORD *)(v5[9] + 4) + 264))();
      v8 = v46;
      if ( v46 < 0 )
      {
        v53 = *(const char **)v5[9];
        v54 = sub_2A6910(v46);
        v55 = (const char *)sub_2A6920(v54);
        sub_946E0("Can't read symbols from %s: %s", v53, v55);
      }
      sub_6B26C((int)v70, (int)v5, 0, v46, v9, 0);
    }
    else
    {
      v9 = 0;
    }
    v10 = (*(int (**)(void))(*(_DWORD *)(v5[9] + 4) + 420))();
    if ( v10 > 0 )
    {
      v12 = (int *)sub_2ACBF4(v2, v10);
      v25 = (*(int (**)(void))(*(_DWORD *)(v5[9] + 4) + 424))();
      v13 = v25;
      if ( v25 < 0 )
      {
        v50 = *(const char **)v5[9];
        v51 = sub_2A6910(v25);
        v52 = (const char *)sub_2A6920(v51);
        sub_946E0("Can't read symbols from %s: %s", v50, v52);
      }
      sub_6B26C((int)v70, (int)v5, 1, v25, v12, 0);
      v57 = v5[9];
      v59 = *(_DWORD *)(*(_DWORD *)(v57 + 4) + 444);
      v26 = sub_1B7250(v5);
      v27 = sub_1780B4(v26);
      v11 = v5[45];
      if ( v11 )
        goto LABEL_38;
      v65 = *(_DWORD *)(*(_DWORD *)(v27 + 152) + 20);
      v32 = sub_2AD7AC(v57, ".plt");
      if ( v32 )
      {
        v63 = *(_DWORD *)(*(_DWORD *)(v32 + 140) + 92);
        v61 = sub_2AD7AC(v57, ".got.plt");
        if ( v61 || (v61 = sub_2AD7AC(v57, ".got")) != 0 )
        {
          if ( *(_DWORD *)(v57 + 100) )
          {
            v33 = *(_DWORD **)(v57 + 100);
            while ( 1 )
            {
              v34 = v33[35];
              if ( *(_DWORD *)(v34 + 32) == v63 )
              {
                v35 = *(_DWORD *)(v34 + 4);
                v36 = v35 == 9;
                if ( v35 != 9 )
                  v36 = v35 == 4;
                if ( v36 )
                  break;
              }
              v33 = (_DWORD *)v33[3];
              if ( !v33 )
                goto LABEL_74;
            }
            v62 = v33;
            if ( (*(int (__fastcall **)(int, _DWORD *, int *, int))(*(_DWORD *)(v59 + 392) + 40))(v57, v33, v12, 1) )
            {
              v73[0] = 0;
              v37 = v62[35];
              v38 = v62[9];
              v72 = 0;
              v39 = *(_DWORD *)(v37 + 40);
              v71 = v73;
              v60 = sub_347418(v38, v39);
              if ( v60 )
              {
                v58 = 0;
                do
                {
                  v40 = v62[17];
                  v41 = *(_DWORD *)(v61 + 28);
                  v42 = *(_DWORD *)(v40 + 16 * v58 + 4);
                  if ( v42 >= v41 )
                  {
                    v64 = *(_DWORD *)(v40 + 16 * v58 + 4);
                    if ( v42 < v41 + *(_DWORD *)(v61 + 36) )
                    {
                      src = *(char **)(**(_DWORD **)(v40 + 16 * v58) + 4);
                      v43 = strlen(src);
                      sub_33BC54((int)&v71, 0, v72, src, v43);
                      sub_33BC54((int)&v71, v72, 0, "@got.plt", 8u);
                      v44 = sub_6A570((int)v70, (char *)v71, v72, 1, v64, 3u, v61, (int)v5);
                      if ( v44 )
                      {
                        v45 = *(_BYTE *)(v44 + 32) | 0x80;
                        *(_DWORD *)(v44 + 24) = v65;
                        *(_BYTE *)(v44 + 32) = v45;
                      }
                    }
                  }
                  v36 = v60 == ++v58;
                }
                while ( !v36 );
                if ( v71 != v73 )
                  sub_339E64(v71);
              }
            }
          }
        }
      }
LABEL_74:
      v11 = v5[45];
    }
    else
    {
      v11 = v5[45];
      v12 = 0;
      v13 = 0;
    }
    if ( !v11 )
    {
LABEL_16:
      v14 = (*(int (__fastcall **)(int, int, int *, int, int *, void **))(*(_DWORD *)(v2 + 4) + 428))(
              v2,
              v8,
              v9,
              v13,
              v12,
              &ptr);
      v15 = v14;
      if ( v14 > 0 )
      {
        if ( v14 > 536870910 )
          sub_33A004();
        v16 = sub_98450(4 * v14);
        v17 = (char *)ptr;
        v18 = (int *)v16;
        v19 = (_DWORD *)v16;
        v20 = (_DWORD *)(4 * v15 + v16);
        do
        {
          *v19++ = v17;
          v17 += 24;
        }
        while ( v20 != v19 );
        sub_6B26C((int)v70, (int)v5, 2, v15, v18, 1u);
        if ( ptr )
          free(ptr);
        ptr = 0;
        sub_33AC00(v18);
      }
      v21 = sub_1B2CF4(v70);
      if ( dword_48999C )
      {
        v22 = (_DWORD *)sub_242FC8(v21);
        sub_2594B0(*v22, "Done reading minimal symbols.\n");
      }
      sub_1B2584(v70);
      v23 = v69;
      goto LABEL_26;
    }
LABEL_38:
    v2 = *(_DWORD *)(v11 + 36);
    goto LABEL_16;
  }
  if ( !dword_48999C )
    goto LABEL_32;
  v28 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v28, "... minimal symbols previously read\n");
  v23 = v69;
LABEL_26:
  if ( v23 && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 444) + 328) )
    sub_1AE6E0(v5);
  if ( v68 )
  {
    v24 = (_DWORD *)sub_2AD7AC(v4, ".stabstr");
    if ( v24 )
      sub_10931C(v5, v68, v24[20], v24[21], v24[9]);
  }
LABEL_32:
  if ( sub_12AFCC(v5, 0) )
  {
    if ( sub_1B7A54(v5) || !sub_13B0A8(v5, &v71) )
    {
      ((void (__fastcall *)(_DWORD *, int (**)()))loc_21775C)(v5, off_35CFD0);
    }
    else if ( v71 )
    {
      if ( v71 == (void *)1 )
        ((void (__fastcall *)(_DWORD *, int (**)()))loc_21775C)(v5, off_35D028);
    }
    else
    {
      ((void (__fastcall *)(_DWORD *, int (**)()))loc_21775C)(v5, off_35CFFC);
    }
  }
  else if ( !sub_1B7A54(v5) && !v5[44] && !v5[45] )
  {
    v29 = (void *)sub_E4674(v5);
    if ( v29 || (v29 = (void *)sub_21258C(v5)) != 0 )
    {
      sub_21278C(&v71, v29);
      sub_213778(v71, v29, a2, v5);
      if ( v71 )
        ((void (*)(void))loc_1625A8)();
      free(v29);
    }
  }
}
