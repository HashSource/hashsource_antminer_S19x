int __fastcall sub_2B73F8(int a1, int a2, _DWORD *a3, _DWORD *a4, int a5, int a6)
{
  _DWORD *v7; // r4
  _DWORD *v9; // r8
  _DWORD *v10; // r10
  int v11; // r6
  int v12; // r5
  bool v13; // zf
  __int64 v14; // r2
  int v15; // r1
  int v16; // r0
  int v17; // r2
  void (__fastcall *v18)(int, int *, int); // r3
  int v19; // r2
  _BOOL4 v20; // r6
  unsigned int v22; // lr
  int v23; // r5
  int v24; // r11
  int v25; // r11
  int v26; // r2
  unsigned int v27; // r9
  __int64 v28; // r2
  __int64 v29; // r2
  __int64 v30; // r2
  __int64 v31; // r2
  int v32; // r3
  int v33; // r2
  int v34; // r1
  int v35; // r6
  int v36; // r3
  __int64 v37; // r2
  int i; // r6
  int v39; // r0
  int v40; // r0
  bool v41; // zf
  __int64 v42; // r2
  int v43; // r0
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r0
  int v48; // r5
  int v49; // r1
  int v50; // r1
  int v51; // r1
  int v52; // r2
  unsigned int v53; // r6
  __int64 v54; // r2
  unsigned int v55; // r9
  __int64 v56; // r2
  __int64 v57; // r2
  __int64 v58; // r2
  __int64 v59; // r2
  __int64 v60; // r2
  __int64 v61; // r2
  __int64 v62; // r2
  __int64 v63; // r2
  _DWORD *v64; // [sp+0h] [bp-34h]
  unsigned int v65; // [sp+4h] [bp-30h]
  _DWORD *v66; // [sp+4h] [bp-30h]
  _DWORD *v67; // [sp+4h] [bp-30h]
  int v68; // [sp+8h] [bp-2Ch]
  unsigned int v70; // [sp+10h] [bp-24h]
  int v71; // [sp+14h] [bp-20h]
  int v72; // [sp+14h] [bp-20h]
  _DWORD *v73; // [sp+18h] [bp-1Ch]
  _DWORD *v74; // [sp+18h] [bp-1Ch]
  _DWORD *v75; // [sp+18h] [bp-1Ch]
  int v76; // [sp+24h] [bp-10h] BYREF
  int v77; // [sp+28h] [bp-Ch]
  unsigned int v78; // [sp+2Ch] [bp-8h]

  v7 = *(_DWORD **)(a2 + 28);
  if ( v7[11] != 4 )
    v7 = 0;
  if ( a5 != -1 )
  {
    v9 = (_DWORD *)v7[57];
    v64 = (_DWORD *)v7[58];
    v10 = (_DWORD *)v7[55];
    v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 400);
    v12 = v7[103];
    v13 = v64 == 0;
    if ( v64 )
      v13 = v9 == 0;
    if ( !v13 )
      goto LABEL_7;
LABEL_54:
    v66 = a4;
    sub_2A6BBC("elf32-arm.c", 9300);
    a4 = v66;
    goto LABEL_7;
  }
  v11 = 0;
  v9 = (_DWORD *)v7[64];
  v12 = 0;
  v10 = (_DWORD *)v7[63];
  v64 = (_DWORD *)v7[65];
  v41 = v64 == 0;
  if ( v64 )
    v41 = v9 == 0;
  if ( v41 )
    goto LABEL_54;
LABEL_7:
  if ( !v7[106] )
  {
    if ( !v10 )
    {
      v67 = a4;
      sub_2A6BBC("elf32-arm.c", 9332);
      a4 = v67;
    }
    v22 = a4[3] & 0xFFFFFFFE;
    v71 = *(_DWORD *)(v9[15] + 28) + v9[14] + *a3;
    v70 = v22;
    v23 = v9[27] + *a3;
    v65 = (v22 - v11) >> 2;
    v68 = v22 + v10[14] + *(_DWORD *)(v10[15] + 28);
    if ( !v7[105] )
    {
      if ( v7[107] )
      {
        v24 = 40 - v7[104] - *a3;
        if ( (v24 & 3) != 0 )
        {
          v75 = a4;
          sub_2A6BBC("elf32-arm.c", 9420);
          a4 = v75;
        }
        v25 = v24 >> 2;
        if ( (v25 & 0xFF000000) != 0 && (-v25 & 0xFF000000) != 0 )
        {
          v74 = a4;
          sub_2A6BBC("elf32-arm.c", 9424);
          a4 = v74;
        }
        v26 = *(_DWORD *)(a2 + 28);
        if ( *(_DWORD *)(v26 + 44) != 4 )
          v26 = 0;
        v27 = v68 - v7[104] - v71;
        if ( *a4 || !*(_DWORD *)(v26 + 388) && a4[1] )
          sub_2A6BBC("elf32-arm.c", 9433);
        LODWORD(v28) = v27 & 0xFFF | 0xE300C000 | (16 * v27) & 0xF0000;
        HIDWORD(v28) = v23;
        sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v28);
        HIDWORD(v29) = v23 + 4;
        LODWORD(v29) = HIWORD(v27) & 0xFFF | (v27 >> 12) & 0xF0000 | 0xE340C000;
        sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v29);
        LODWORD(v30) = -527646705;
        HIDWORD(v30) = v23 + 8;
        sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v30);
        HIDWORD(v31) = v23 + 12;
        LODWORD(v31) = v25 & 0xFFFFFF | 0xEA000000;
        sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v31);
      }
      else
      {
        v73 = a4;
        if ( sub_2B640C(v7 + 311) )
        {
          v20 = sub_2B6484(v7 + 311);
          if ( !v20 )
          {
            sub_2A6A5C("%B: Warning: thumb-1 mode PLT generation not currently supported", a1);
            return v20;
          }
          v55 = v68 - 12 - v71;
          HIDWORD(v56) = v23;
          LODWORD(v56) = (v55 << 16) & 0xFF0000
                       | (v55 << 20) & 0x70000000
                       | 0xC00F240
                       | (v55 >> 1) & 0x400
                       | ((unsigned __int16)v55 >> 12);
          sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v56);
          LODWORD(v57) = v55 & 0xFF0000 | (v55 >> 28) | 0xC00F2C0 | (16 * v55) & 0x70000000 | (v55 >> 17) & 0x400;
          HIDWORD(v57) = v23 + 4;
          sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v57);
          LODWORD(v58) = -119782148;
          HIDWORD(v58) = v23 + 8;
          sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v58);
          LODWORD(v59) = -1090457600;
          HIDWORD(v59) = v23 + 12;
          sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v59);
        }
        else
        {
          v52 = *(_DWORD *)(a2 + 28);
          v53 = v68 - 8 - v71;
          if ( *(_DWORD *)(v52 + 44) != 4 )
            v52 = 0;
          if ( *v73 || !*(_DWORD *)(v52 + 388) && v73[1] )
          {
            sub_2B72C4(v7[91], *(_DWORD *)(a1 + 4), 18296, (_BYTE *)(v23 - 4));
            sub_2B72C4(v7[91], *(_DWORD *)(a1 + 4), 18112, (_BYTE *)(v23 - 2));
          }
          v72 = (unsigned __int8)(v53 >> 20);
          if ( dword_48FD14 )
          {
            HIDWORD(v60) = v23;
            LODWORD(v60) = (v53 >> 28) | 0xE28FC200;
            sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v60);
            HIDWORD(v61) = v23 + 4;
            LODWORD(v61) = v72 | 0xE28CC600;
            sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v61);
            HIDWORD(v62) = v23 + 8;
            LODWORD(v62) = (unsigned __int8)(v53 >> 12) | 0xE28CCA00;
            sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v62);
            HIDWORD(v63) = v23 + 12;
            LODWORD(v63) = v53 & 0xFFF | 0xE5BCF000;
            sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v63);
          }
          else
          {
            if ( (v53 & 0xF0000000) != 0 )
              sub_2A6BBC("elf32-arm.c", 9509);
            HIDWORD(v54) = v23;
            LODWORD(v54) = v72 | 0xE28FC600;
            sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v54);
            sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), __SPAIR64__(v23 + 4, (unsigned __int8)(v53 >> 12) | 0xE28CCA00));
            sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), __SPAIR64__(v23 + 8, v53 & 0xFFF | 0xE5BCF000));
          }
        }
      }
LABEL_29:
      v32 = 0;
      v78 = 0;
      if ( a5 == -1 )
        v32 = 160;
      v76 = v68;
      if ( a5 == -1 )
      {
        v77 = v32;
      }
      else
      {
        v33 = v9[14];
        v34 = *(_DWORD *)(v9[15] + 28);
        v77 = (a5 << 8) + 22;
        a6 = v34 + v33;
      }
      (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)(a1 + 4) + 48))(a6, v10[27] + v70);
      if ( a5 != -1 )
        goto LABEL_11;
      goto LABEL_35;
    }
    v35 = *(_BYTE *)a2 & 1;
    v36 = v7[104] >> 2;
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_29;
      LODWORD(v37) = -442515456;
      for ( i = 0; i != 2; LODWORD(v37) = dword_413C10[i] )
      {
        HIDWORD(v37) = v23;
        if ( i == 5 )
        {
          if ( v7[108] )
            v39 = 8;
          else
            v39 = 12;
          v40 = v65 * v39;
          goto LABEL_45;
        }
        sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v37);
LABEL_46:
        ++i;
        v23 += 4;
        if ( i == v7[104] >> 2 )
          goto LABEL_29;
      }
      v40 = v68 - *(_DWORD *)(v10[15] + 28);
LABEL_45:
      (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 4) + 48))(v40, v23);
      goto LABEL_46;
    }
    if ( !v36 )
    {
LABEL_71:
      v45 = 2 * v65 + 1;
      v46 = *(_DWORD *)(v7[113] + 108);
      v47 = (*(_DWORD *)(v7[29] + 28) << 8) + 2;
      if ( v7[108] )
      {
        v48 = v46 + 8 * v45;
        v76 = v71 + 8;
        v77 = v47;
        v78 = v70;
        sub_2C8528(a1, &v76, v48);
      }
      else
      {
        v76 = v71 + 8;
        v48 = v46 + 12 * v45;
        v77 = v47;
        v78 = v70;
        sub_2C8564(a1, &v76, v48);
      }
      if ( v7[108] )
      {
        v49 = *(_DWORD *)(v7[30] + 28);
        v76 = v68;
        v78 = 0;
        v77 = (v49 << 8) + 2;
        sub_2C8528(a1, &v76, v48 + 8);
      }
      else
      {
        v50 = v7[30];
        v78 = 0;
        v51 = *(_DWORD *)(v50 + 28);
        v76 = v68;
        v77 = (v51 << 8) + 2;
        sub_2C8564(a1, &v76, v48 + 12);
      }
      goto LABEL_29;
    }
    for ( LODWORD(v42) = -442515456; ; LODWORD(v42) = dword_413C28[v35] )
    {
      switch ( v35 )
      {
        case 2:
          v43 = v68;
          break;
        case 4:
          LODWORD(v42) = -((unsigned int)(*a3 + 24) >> 2) & 0xFFFFFF | 0xEA000000;
LABEL_59:
          HIDWORD(v42) = v23;
          sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v42);
          goto LABEL_60;
        case 5:
          if ( v7[108] )
            v44 = 8;
          else
            v44 = 12;
          v43 = (v65 * v44) | v42;
          break;
        default:
          goto LABEL_59;
      }
      (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)(a1 + 4) + 48))(v43, v23, v42);
LABEL_60:
      ++v35;
      v23 += 4;
      if ( v35 == v7[104] >> 2 )
        goto LABEL_71;
    }
  }
  if ( a5 < 0 )
    sub_2A6BBC("elf32-arm.c", 9305);
  LODWORD(v14) = -450891772;
  HIDWORD(v14) = v9[27] + *a3;
  sub_2B73D0(v7[91], *(_DWORD *)(a1 + 4), v14);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 48))(0, v9[27] + *a3 + 4);
  v15 = v7[104];
  v16 = *a3 - v12;
  v76 = *a3 + 4 + v9[14] + *(_DWORD *)(v9[15] + 28);
  v77 = (a5 << 8) + 21;
  v65 = sub_347418(v16, v15);
  if ( a5 != -1 )
  {
LABEL_11:
    v17 = v64[27];
    if ( v7[108] )
    {
      v18 = (void (__fastcall *)(int, int *, int))sub_2C8528;
      v19 = v17 + 8 * v65;
    }
    else
    {
      v18 = (void (__fastcall *)(int, int *, int))sub_2C8564;
      v19 = v17 + 12 * v65;
    }
    v20 = 1;
    v18(a1, &v76, v19);
    return v20;
  }
LABEL_35:
  sub_2B67D8(a1, *(_DWORD **)(a2 + 28), v64, (int)&v76);
  return 1;
}
