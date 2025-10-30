int __fastcall sub_2F3374(int *a1, int a2, int a3, int (__fastcall *a4)(int, int *), int *a5)
{
  int *v6; // r8
  unsigned int v9; // r4
  int v10; // r0
  int v11; // r1
  _DWORD *v12; // r11
  int **v13; // r5
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r3
  unsigned int v17; // r2
  int v18; // r0
  _BOOL4 v19; // r0
  unsigned int v20; // r2
  void *v21; // r0
  int v22; // r2
  char v23; // r9
  int v24; // r3
  unsigned int v25; // r5
  int v26; // r8
  unsigned int v27; // r10
  int v28; // r11
  char v29; // r1
  int v30; // r3
  int v31; // r12
  int v32; // r0
  int v33; // r3
  int v34; // r5
  unsigned int v35; // r3
  int v36; // r9
  unsigned int v37; // r3
  int v38; // r2
  int v39; // r3
  int v40; // r5
  unsigned int v41; // r4
  int v42; // r9
  unsigned int v43; // r5
  int v44; // r8
  int v45; // r0
  char v46; // r0
  unsigned int v47; // r0
  int v48; // r1
  int *v49; // r9
  char v50; // r2
  int v51; // r10
  int v52; // r3
  int v53; // r2
  int v54; // r1
  char *v55; // r3
  int v56; // r2
  int i; // r0
  int v58; // r0
  size_t v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  unsigned int v71; // r1
  int v72; // r2
  int v73; // r0
  char *v74; // r0
  int v75; // r1
  char v76; // r2
  char v77; // r3
  int *v78; // r3
  unsigned int v79; // r3
  int v80; // r2
  _DWORD *v81; // r0
  int v82; // r0
  int v83; // r2
  __int64 v84; // r2
  int v88; // [sp+Ch] [bp-20h]
  _DWORD *v89; // [sp+1Ch] [bp-10h]
  char *s; // [sp+20h] [bp-Ch]
  char *sa; // [sp+20h] [bp-Ch]
  int v92; // [sp+24h] [bp-8h]

  if ( (*(_WORD *)(a3 + 24) & 0x380) != 0x180 )
    return 0;
  v6 = *(int **)(*(_DWORD *)(a3 + 140) + 136);
  if ( !v6 )
    return 0;
  v9 = (unsigned int)(v6 + 2);
  v10 = (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 148) + 4) + 444) + 300))();
  v11 = *v6;
  v88 = v10;
  v12 = *(_DWORD **)(a2 + 28);
  if ( v9 >= v9 + 32 * *v6 )
  {
    v21 = (void *)v6[1];
    if ( v21 )
    {
LABEL_19:
      free(v21);
      v22 = *v6;
      v6[1] = 0;
      v20 = v9 + 32 * v22;
      goto LABEL_20;
    }
    goto LABEL_106;
  }
  v13 = (int **)(v6 + 2);
  do
  {
    if ( v13[3] == (int *)4 )
    {
      *((_BYTE *)v13 + 27) = *((_BYTE *)v13 + 27) & 0xFD | (2 * (*(_DWORD *)(a3 + 160) != 0));
      v11 = *v6;
      goto LABEL_17;
    }
    if ( (*((_BYTE *)v13 + 27) & 1) == 0 && *v13 )
    {
      v14 = *a5;
      if ( (*(_DWORD *)(a3 + 20) & 0x100000) != 0 && !v14 )
      {
        v79 = *((unsigned __int8 *)v13 + 24);
        if ( (v79 & 0x60) == 0x60 )
        {
          v80 = *a5;
        }
        else
        {
          v80 = sub_2F18A4(*((_BYTE *)v13 + 24), v88);
          v14 = v80;
        }
        v19 = sub_2F1AF0(a1 + 1, (int)v13[4] + v14 + *(_DWORD *)(a3 + 108) + 8, v80, (v79 >> 3) & 1) != 0;
      }
      else
      {
        v15 = a5[2];
        v16 = 3 * (_DWORD)v13[2];
        v17 = v14 + 12 * (_DWORD)v13[2];
        a5[1] = v17;
        if ( v17 >= v15 || (v18 = (int)(v13[4] + 2), *(_DWORD *)(v14 + 4 * v16) != v18) )
        {
          sub_2A6BBC("elf-eh-frame.c", 1516);
          v18 = (int)(v13[4] + 2);
        }
        v19 = a4(v18, a5) == 0;
      }
      if ( !v19 )
      {
        v11 = *v6;
        goto LABEL_17;
      }
      if ( (*(_BYTE *)a2 & 1) != 0 )
      {
        if ( ((_BYTE)v13[6] & 0x70) != 0 )
        {
          if ( ((_BYTE)v13[6] & 0x70) != 0x50 )
            goto LABEL_71;
        }
        else if ( (*((_BYTE *)v13 + 27) & 8) != 0 )
        {
          goto LABEL_71;
        }
        v12[47] = 0;
        if ( dword_48FD24 > 9 )
        {
          if ( dword_48FD24 == 10 )
          {
            (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))("%P: Further warnings about FDE encoding preventing .eh_frame_hdr generation dropped.\n");
            ++dword_48FD24;
          }
        }
        else
        {
          (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))(
            "%P: FDE encoding in %B(%A) prevents .eh_frame_hdr table being created.\n",
            a1,
            a3);
          ++dword_48FD24;
        }
      }
LABEL_71:
      v49 = *v13;
      *((_BYTE *)v13 + 27) &= ~2u;
      v50 = *((_BYTE *)v49 + 27);
      ++v12[46];
      if ( (v50 & 2) == 0 )
        goto LABEL_93;
      v51 = *v49;
      v52 = *((_BYTE *)v49 + 6) & 0x40;
      if ( (*((_BYTE *)v49 + 6) & 0x40) != 0 )
      {
        v49 = (int *)*v49;
        goto LABEL_93;
      }
      *v49 = a3;
      *((_BYTE *)v49 + 27) = v50 & 0xFD | (2 * (v52 & 1));
      if ( !v51 )
        goto LABEL_93;
      if ( *(unsigned __int8 *)(v51 + 60) != 255 )
      {
        v53 = *(_DWORD *)(v51 + 48);
        v54 = *a5;
        *(_DWORD *)(v51 + 48) = v52;
        *(_DWORD *)(v51 + 52) = v52;
        v55 = (char *)(*(_DWORD *)(v54 + 12 * v53 + 4) >> 8);
        if ( (unsigned int)v55 >= a5[5] || (v56 = a5[3] + 20 * (_DWORD)v55, *(unsigned __int8 *)(v56 + 12) >> 4) )
        {
          for ( i = *(_DWORD *)(a5[7] + 4 * (_DWORD)&v55[-a5[6]]);
                (unsigned int)*(unsigned __int8 *)(i + 12) - 6 <= 1;
                i = *(_DWORD *)(i + 20) )
          {
            ;
          }
          *(_DWORD *)(v51 + 48) = i;
          if ( !sub_2E2EE8(i, a2, 0) )
            goto LABEL_85;
        }
        else
        {
          sa = v55;
          v82 = sub_2CFEF4((int)a1, *(_DWORD *)(v56 + 16));
          if ( !v82 )
            goto LABEL_93;
          v83 = *(_DWORD *)(v82 + 124);
          if ( !v83 )
            v83 = v82;
          if ( !*(_DWORD *)(v83 + 60) )
            goto LABEL_93;
          *(_BYTE *)(v51 + 9) = 1;
          LODWORD(v84) = a1[9];
          HIDWORD(v84) = sa;
          *(_QWORD *)(v51 + 48) = v84;
        }
        if ( (*(_BYTE *)a2 & 1) != 0
          && (*(_BYTE *)(v51 + 60) & 0x70) == 0
          && (*(int (**)(void))(*(_DWORD *)(a1[1] + 444) + 304))() )
        {
          *((_BYTE *)v49 + 6) |= 0xCu;
        }
      }
LABEL_85:
      v58 = sub_32426C(v51, 4, 0);
      v92 = sub_32426C(v51 + 8, 1, v58);
      v59 = strlen((const char *)(v51 + 10));
      v60 = sub_32426C(v51 + 10, v59 + 1, v92);
      v61 = sub_32426C(v51 + 32, 4, v60);
      v62 = sub_32426C(v51 + 36, 4, v61);
      v63 = sub_32426C(v51 + 40, 4, v62);
      v64 = sub_32426C(v51 + 44, 4, v63);
      v65 = sub_32426C(v51 + 48, 8, v64);
      v66 = sub_32426C(**(_DWORD **)(v51 + 56) + 60, 4, v65);
      v67 = sub_32426C(v51 + 60, 1, v66);
      v68 = sub_32426C(v51 + 61, 1, v67);
      v69 = sub_32426C(v51 + 62, 1, v68);
      v70 = sub_32426C(v51 + 63, 1, v69);
      v71 = *(unsigned __int8 *)(v51 + 63);
      if ( v71 >= 0x32 )
        v71 = 50;
      v72 = sub_32426C(v51 + 65, v71, v70);
      v73 = v12[45];
      *(_DWORD *)(v51 + 4) = v72;
      if ( !v73 )
      {
        v73 = sub_323B58(1, sub_2F11E0, sub_2F1770, free);
        v12[45] = v73;
        if ( !v73 )
          goto LABEL_93;
        v72 = *(_DWORD *)(v51 + 4);
      }
      v74 = (char *)sub_323E68(v73, v51, v72, 1);
      if ( v74 )
      {
        v75 = *(_DWORD *)v74;
        if ( *(_DWORD *)v74 )
        {
          v76 = *((_BYTE *)v49 + 6) | 0x40;
          v77 = *((_BYTE *)v49 + 27) | 2;
          *((_BYTE *)v49 + 6) = v76;
          *((_BYTE *)v49 + 27) = v77;
          v78 = *(int **)(v75 + 56);
          *v49 = (int)v78;
          if ( (v76 & 2) != 0 )
            *((_BYTE *)v78 + 6) |= 2u;
        }
        else
        {
          s = v74;
          v81 = malloc(0x74u);
          v89 = v81;
          if ( !v81 )
            goto LABEL_93;
          memcpy(v81, (const void *)v51, 0x74u);
          *(_DWORD *)s = v89;
          v78 = (int *)v89[14];
        }
        v49 = v78;
      }
LABEL_93:
      v11 = *v6;
      *v13 = v49;
    }
LABEL_17:
    v20 = v9 + 32 * v11;
    v13 += 8;
  }
  while ( v20 > (unsigned int)v13 );
  v21 = (void *)v6[1];
  if ( v21 )
    goto LABEL_19;
LABEL_20:
  if ( v9 < v20 )
  {
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      v25 = *(unsigned __int8 *)(v9 + 27);
      if ( (v25 & 2) == 0 )
        break;
LABEL_40:
      v9 += 32;
      if ( v9 >= v20 )
      {
        v36 = v23 & 1;
        v37 = (v24 + 3) & 0xFFFFFFFC;
        goto LABEL_42;
      }
    }
    v26 = *(_DWORD *)(v9 + 12);
    v27 = *(_DWORD *)(v9 + 16);
    if ( v26 == 4 )
    {
      v35 = (v24 + 3) & 0xFFFFFFFC;
      *(_DWORD *)(v9 + 20) = v35;
      if ( v35 != v27 )
        v23 = 1;
    }
    else
    {
      v28 = v25 & 1;
      if ( (v25 & 1) != 0 )
      {
        v29 = *(_BYTE *)(v9 + 6);
        v30 = v24 - 1;
        if ( (v29 & 0x10) != 0 )
          v31 = 8;
        else
          v31 = 4;
        if ( (*(_BYTE *)(v9 + 6) & 0x10) != 0 )
          v32 = -8;
        else
          v32 = -4;
        v33 = (v30 + v31) & v32;
        *(_DWORD *)(v9 + 20) = v33;
        if ( v33 != v27 )
        {
          v34 = (v25 >> 2) & 1;
          v27 = v33;
          v23 = 1;
          goto LABEL_34;
        }
LABEL_100:
        v34 = (v25 >> 2) & 1;
        if ( v28 )
        {
          v29 = *(_BYTE *)(v9 + 6);
LABEL_34:
          if ( (v29 & 0x20) == 0 )
          {
            v26 += v34;
            goto LABEL_36;
          }
          ++v34;
          v35 = v27;
          v26 += v34;
        }
        else
        {
LABEL_36:
          v35 = v27;
        }
      }
      else
      {
        v46 = *(_BYTE *)(v9 + 24);
        if ( (v46 & 0x60) == 0x60 )
        {
          v48 = -4;
          v47 = 4;
        }
        else
        {
          v47 = sub_2F18A4(v46, v88);
          if ( v47 < 4 )
            v47 = 4;
          v48 = -v47;
        }
        v35 = (v24 - 1 + v47) & v48;
        *(_DWORD *)(v9 + 20) = v35;
        if ( v35 == v27 )
          goto LABEL_100;
        v34 = (v25 >> 2) & 1;
        v23 = 1;
      }
      v26 += v34;
    }
    v24 = v26 + v35;
    goto LABEL_40;
  }
LABEL_106:
  v37 = 0;
  v36 = 0;
LABEL_42:
  v38 = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a3 + 36) = v37;
  if ( v38 == v37 )
    v39 = v36;
  else
    v39 = v36 | 1;
  *(_DWORD *)(a3 + 40) = v38;
  if ( !v39 )
    return 0;
  v40 = a5[3];
  v41 = v40 + 20;
  v42 = *(_DWORD *)(*(_DWORD *)(a3 + 140) + 92);
  v43 = v40 + 20 * a5[5];
  if ( v43 <= v41 )
    return 1;
  v44 = 0;
  do
  {
    while ( *(unsigned __int8 *)(v41 + 12) > 1u || v42 != *(_DWORD *)(v41 + 16) )
    {
      v41 += 20;
      if ( v43 <= v41 )
        goto LABEL_55;
    }
    v45 = sub_2F18E8(*(_DWORD *)v41, (_DWORD *)a3);
    v41 += 20;
    if ( v45 )
    {
      v44 = 1;
      *(_DWORD *)(v41 - 20) += v45;
    }
  }
  while ( v43 > v41 );
LABEL_55:
  if ( !v44 )
    return 1;
  *(_DWORD *)(a1[40] + 120) = a5[3];
  return v44;
}
