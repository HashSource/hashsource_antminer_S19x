bool __fastcall sub_2AA0C0(int a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // r11
  char v7; // r3
  char **v8; // r1
  int v9; // r3
  char ***v10; // r5
  char **v11; // r3
  char **v12; // r10
  int v13; // r7
  char **v14; // t1
  unsigned int v15; // r3
  int v16; // r0
  char **v17; // r8
  int v18; // r10
  bool v19; // cc
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r11
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // lr
  char v29; // r3
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  char **v38; // r6
  int v39; // r5
  int *v40; // r0
  char **v41; // t1
  char *v42; // r2
  int v43; // r3
  char **v44; // t1
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r7
  char v52; // r3
  _DWORD *v53; // r3
  _DWORD *v54; // t1
  unsigned int v55; // r1
  bool v56; // zf
  int v57; // r3
  bool v58; // cc
  bool v59; // zf
  int v60; // r3
  char *v61; // r2
  int v62; // t1
  int v63; // [sp+8h] [bp-74h]
  _DWORD *ptr; // [sp+Ch] [bp-70h]
  int v65; // [sp+10h] [bp-6Ch]
  int v66; // [sp+20h] [bp-5Ch]
  char **v67; // [sp+24h] [bp-58h]
  char **v68; // [sp+28h] [bp-54h]
  char **v69; // [sp+2Ch] [bp-50h]
  _DWORD *v70; // [sp+30h] [bp-4Ch]
  int v71; // [sp+3Ch] [bp-40h]
  int v72; // [sp+40h] [bp-3Ch]
  int v73; // [sp+44h] [bp-38h]
  int v74; // [sp+48h] [bp-34h]
  int v75; // [sp+4Ch] [bp-30h]
  int v76; // [sp+50h] [bp-2Ch]
  int v77; // [sp+54h] [bp-28h]
  int v78; // [sp+58h] [bp-24h] BYREF
  int v79; // [sp+5Ch] [bp-20h]
  int v80; // [sp+60h] [bp-1Ch]
  int v81; // [sp+64h] [bp-18h]
  int v82; // [sp+68h] [bp-14h]
  int v83; // [sp+6Ch] [bp-10h]
  int v84; // [sp+70h] [bp-Ch]
  int v85; // [sp+74h] [bp-8h]

  v4 = a3;
  if ( a3 )
    a4 = 0;
  if ( a3 )
    *a3 = a4;
  v7 = *(_BYTE *)(a1 + 40);
  if ( (v7 & 8) == 0 || (v7 & 7u) > 3 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 40) & 7) != 0 )
    return (v7 & 7) == a2;
  if ( a3 || *off_470AAC )
  {
    ptr = (_DWORD *)sub_2AB368(96, a2);
    if ( !ptr )
      return 0;
  }
  else
  {
    ptr = 0;
  }
  v71 = 0;
  v8 = *(char ***)(a1 + 4);
  v9 = *(_BYTE *)(a1 + 43) & 4;
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a1 + 40) & 0xF8 | a2 & 7;
  v69 = v8;
  if ( v9 )
  {
LABEL_11:
    v10 = off_470AA0;
    v66 = 12;
    v11 = *off_470AA0;
    if ( *off_470AA0 )
    {
      v12 = 0;
      v65 = 0;
      v68 = 0;
      v13 = 256;
      v63 = 0;
      v67 = 0;
      v70 = v4;
      do
      {
        if ( v11 != &off_412560
          && ((v69 == v11) & ((*(unsigned __int8 *)(a1 + 43) ^ 4u) >> 2)) == 0
          && *((unsigned __int8 *)v11 + 27) <= v13 )
        {
          v15 = *(_DWORD *)(a1 + 40);
          *(_DWORD *)(a1 + 160) = 0;
          *(_DWORD *)(a1 + 132) = &unk_4115CC;
          *(_DWORD *)(a1 + 40) = v15 & 0xFE00001F | (32 * ((unsigned int)&loc_FD800 & (v15 >> 5) & 0xFFFFF));
          sub_2AD778(a1);
          *(_DWORD *)(a1 + 4) = *v10;
          if ( sub_2A8A04(a1, 0, 0) )
            goto LABEL_37;
          ((void (__fastcall *)(int))loc_2A6C48)(3);
          v16 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 4 * (*(_BYTE *)(a1 + 40) & 7) + 100))(a1);
          v17 = (char **)v16;
          if ( v16 )
          {
            v18 = *(unsigned __int8 *)(v16 + 27);
            if ( *v10 == &off_41D038 )
              v18 = 255;
            if ( v71 )
              sub_2AAA1C(&v78);
            if ( (*(_BYTE *)(a1 + 40) & 7) == 2 && (*(char *)(a1 + 43) >= 0 || sub_2A6910() == 4) )
            {
              if ( off_470AA4 != v68 )
                v68 = *v10;
              if ( ptr )
                ptr[v66] = *v10;
              ++v66;
            }
            else
            {
              if ( v17 == off_470AA4 )
                goto LABEL_76;
              v67 = v17;
              if ( ptr )
                ptr[v63] = v17;
              v19 = v18 < v13;
              if ( v18 < v13 )
                v13 = v18;
              ++v63;
              if ( v19 )
                v20 = 1;
              else
                v20 = v65 + 1;
              v65 = v20;
            }
            v21 = *(_DWORD *)(a1 + 76);
            v22 = *(_DWORD *)(a1 + 80);
            v23 = *(_DWORD *)(a1 + 84);
            v73 = (*(_DWORD *)(a1 + 40) >> 5) & 0xFFFFF;
            v78 = *(_DWORD *)(a1 + 72);
            v79 = v21;
            v80 = v22;
            v81 = v23;
            v24 = *(_DWORD *)(a1 + 100);
            v25 = *(_DWORD *)(a1 + 92);
            v26 = *(_DWORD *)(a1 + 96);
            v27 = *(_DWORD *)(a1 + 160);
            v28 = *(_DWORD *)(a1 + 132);
            v82 = *(_DWORD *)(a1 + 88);
            v83 = v25;
            v84 = v26;
            v72 = v27;
            v74 = v28;
            v75 = v24;
            v76 = *(_DWORD *)(a1 + 104);
            v77 = *(_DWORD *)(a1 + 108);
            v71 = sub_2ACBF4(a1, 1);
            v85 = *(_DWORD *)(a1 + 172);
            if ( !v71 || !sub_2AAA0C(a1 + 72, sub_2AD6C0, 184) )
              goto LABEL_37;
            v12 = v17;
          }
          else if ( sub_2A6910() != 3 )
          {
            goto LABEL_37;
          }
        }
        v14 = v10[1];
        ++v10;
        v11 = v14;
      }
      while ( v14 );
      v38 = v67;
      v4 = v70;
      if ( v65 == 1 )
        goto LABEL_55;
      if ( v63 )
        goto LABEL_46;
    }
    else
    {
      v12 = 0;
      v13 = 256;
      v68 = 0;
      v65 = 0;
    }
    if ( off_470AA4 == v68 )
    {
      v38 = v68;
      v65 = 1;
LABEL_55:
      if ( v71 )
      {
        sub_2AAA1C(a1 + 72);
        v45 = v78;
        v46 = v79;
        v47 = v80;
        v48 = v81;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFE00001F | (32 * (v73 & 0xFFFFF));
        *(_DWORD *)(a1 + 132) = v74;
        *(_DWORD *)(a1 + 160) = v72;
        *(_DWORD *)(a1 + 72) = v45;
        *(_DWORD *)(a1 + 76) = v46;
        *(_DWORD *)(a1 + 80) = v47;
        *(_DWORD *)(a1 + 84) = v48;
        v49 = v83;
        v50 = v84;
        v51 = v85;
        *(_DWORD *)(a1 + 88) = v82;
        *(_DWORD *)(a1 + 92) = v49;
        *(_DWORD *)(a1 + 96) = v50;
        *(_DWORD *)(a1 + 108) = v77;
        *(_DWORD *)(a1 + 100) = v75;
        *(_DWORD *)(a1 + 104) = v76;
        *(_DWORD *)(a1 + 172) = v51;
        sub_2AD1F0(a1, v71);
        v71 = 0;
      }
      if ( v65 != 1 )
      {
        if ( v65 )
        {
          v52 = *(_BYTE *)(a1 + 40) & 0xF8;
          *(_DWORD *)(a1 + 4) = v69;
          *(_BYTE *)(a1 + 40) = v52;
          ((void (__fastcall *)(int))loc_2A6C48)(13);
          if ( v4 )
          {
            *v4 = ptr;
            v53 = &ptr[v65];
            *v53 = 0;
            if ( v65 > 0 )
            {
              do
              {
                v54 = (_DWORD *)*--v53;
                *v53 = *v54;
              }
              while ( ptr != v53 );
            }
          }
          return 0;
        }
        goto LABEL_87;
      }
      *(_DWORD *)(a1 + 4) = v38;
      if ( v38 != v12 )
      {
        v55 = *(_DWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 132) = &unk_4115CC;
        *(_DWORD *)(a1 + 160) = 0;
        *(_DWORD *)(a1 + 40) = v55 & 0xFE00001F | (32 * ((v55 >> 5) & 0xFD800));
        sub_2AD778(a1);
        if ( sub_2A8A04(a1, 0, 0) )
          goto LABEL_37;
        if ( !(*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 4 * (*(_BYTE *)(a1 + 40) & 7) + 100))(a1) )
          sub_2A6BBC("format.c", 453);
      }
      goto LABEL_76;
    }
    v57 = v66 - 12;
    v58 = (int)ptr <= 0;
    if ( ptr )
      v58 = v57 <= 1;
    v63 = v66 - 12;
    if ( !v58 )
    {
      v39 = v57;
      memcpy(ptr, ptr + 12, 4 * v57);
      goto LABEL_48;
    }
    v38 = v68;
LABEL_46:
    if ( v63 <= 1 )
    {
LABEL_97:
      v65 = v63;
      goto LABEL_55;
    }
    v39 = v63;
LABEL_48:
    v40 = off_470AAC;
    while ( 1 )
    {
      v41 = (char **)*v40++;
      v38 = v41;
      if ( !v41 )
        break;
      v42 = (char *)&ptr[v39];
      v43 = v63;
      while ( --v43 >= 0 )
      {
        v44 = (char **)*((_DWORD *)v42 - 1);
        v42 -= 4;
        if ( v44 == v38 && *((unsigned __int8 *)v38 + 27) <= v13 )
          goto LABEL_54;
      }
    }
    v59 = v65 == v63;
    if ( v65 != v63 )
      v59 = ptr == 0;
    if ( !v59 )
    {
      v60 = 0;
      v61 = (char *)(ptr - 1);
      do
      {
        v62 = *((_DWORD *)v61 + 1);
        v61 += 4;
        v38 = (char **)v62;
        ++v60;
      }
      while ( *(unsigned __int8 *)(v62 + 27) > v13 && v60 < v63 );
LABEL_54:
      v65 = 1;
      goto LABEL_55;
    }
    goto LABEL_97;
  }
  if ( sub_2A8A04(a1, 0, 0) )
    goto LABEL_37;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 4 * (*(_BYTE *)(a1 + 40) & 7) + 100))(a1) )
  {
    v56 = v69 == &off_412560;
    if ( v69 == &off_412560 )
      v56 = a2 == 2;
    if ( v56 )
    {
LABEL_87:
      ((void (__fastcall *)(int))loc_2A6C48)(12);
LABEL_37:
      v29 = *(_BYTE *)(a1 + 40) & 0xF8;
      *(_DWORD *)(a1 + 4) = v69;
      *(_BYTE *)(a1 + 40) = v29;
      if ( ptr )
        free(ptr);
      if ( v71 )
      {
        sub_2AAA1C(a1 + 72);
        v30 = v78;
        v31 = v79;
        v32 = v80;
        v33 = v81;
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFE00001F | (32 * (v73 & 0xFFFFF));
        *(_DWORD *)(a1 + 132) = v74;
        *(_DWORD *)(a1 + 160) = v72;
        *(_DWORD *)(a1 + 72) = v30;
        *(_DWORD *)(a1 + 76) = v31;
        *(_DWORD *)(a1 + 80) = v32;
        *(_DWORD *)(a1 + 84) = v33;
        v34 = v83;
        v35 = v84;
        v36 = v85;
        *(_DWORD *)(a1 + 88) = v82;
        *(_DWORD *)(a1 + 92) = v34;
        *(_DWORD *)(a1 + 96) = v35;
        *(_DWORD *)(a1 + 100) = v75;
        *(_DWORD *)(a1 + 104) = v76;
        *(_DWORD *)(a1 + 108) = v77;
        *(_DWORD *)(a1 + 172) = v36;
        sub_2AD1F0(a1, v71);
        return 0;
      }
      return 0;
    }
    goto LABEL_11;
  }
LABEL_76:
  if ( (*(_BYTE *)(a1 + 40) & 0x18) == 0x18 )
    *(_BYTE *)(a1 + 43) |= 0x40u;
  if ( ptr )
    free(ptr);
  return 1;
}
