int __fastcall sub_2DF3C0(int a1, _DWORD *a2)
{
  int v2; // r4
  int *v4; // r5
  int v5; // r8
  int v6; // r0
  int v7; // r3
  int v8; // r3
  int v9; // r10
  int v10; // r3
  int v11; // r9
  int v12; // r1
  char v13; // r2
  int v14; // r8
  char **v16; // r7
  int v17; // r0
  _DWORD *v18; // r2
  char v19; // r3
  int v20; // r1
  int v21; // r0
  int v22; // r3
  int v23; // r2
  int v24; // r1
  int v25; // r3
  int v26; // r2
  char *v27; // r3
  char v28; // r12
  int v29; // r0
  int v30; // r1
  unsigned int v31; // r0
  int v32; // r10
  char v33; // r3
  int v34; // r3
  char *v35; // r0
  int v36; // r3
  int v37; // r3
  int v38; // r0
  int v39; // r10
  int v40; // r11
  int v41; // r8
  __int64 v42; // r0
  int v43; // r3
  int v44; // r1
  int v45; // r2
  int v46; // r10
  int v47; // r3
  int v48; // r3
  int v49; // r2
  _DWORD *v50; // r0
  int *v51; // r0
  int v52; // r5
  int v53; // r0
  char *v54; // r0
  int (__fastcall *v55)(int); // r3
  int v56; // r0
  int i; // r3
  int v58; // r0
  char *v59; // r0
  int v60; // r3
  int v61; // r3
  unsigned __int8 v62; // r3
  int v63; // r2
  int v64; // r3
  int v65; // r2
  char v66; // r12
  int v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r2
  char v71; // r3
  bool v72; // zf
  int v73; // r2
  char v74; // r0
  int v75; // [sp+Ch] [bp-38h]
  int v76; // [sp+Ch] [bp-38h]
  int v77; // [sp+Ch] [bp-38h]
  int v78; // [sp+10h] [bp-34h]
  const char *v79; // [sp+14h] [bp-30h]
  int v80; // [sp+18h] [bp-2Ch] BYREF
  int v81; // [sp+1Ch] [bp-28h]
  int v82; // [sp+20h] [bp-24h]
  unsigned __int8 v83; // [sp+24h] [bp-20h]
  char v84; // [sp+25h] [bp-1Fh]
  char v85; // [sp+26h] [bp-1Eh]
  int v86; // [sp+28h] [bp-1Ch]
  int v87[6]; // [sp+2Ch] [bp-18h] BYREF

  v2 = a1;
  if ( *(_BYTE *)(a1 + 12) == 7 )
  {
    v2 = *(_DWORD *)(a1 + 20);
    if ( !*(_BYTE *)(v2 + 12) )
      return 1;
  }
  if ( a2[1] )
  {
    if ( (*(_BYTE *)(v2 + 52) & 8) == 0 )
      return 1;
  }
  else if ( (*(_BYTE *)(v2 + 52) & 8) != 0 )
  {
    return 1;
  }
  v4 = (int *)a2[3];
  v5 = *(_DWORD *)(*(_DWORD *)(v4[1] + 4) + 444);
  if ( *(_BYTE *)(v2 + 12) == 1 )
  {
    v55 = *(int (__fastcall **)(int))(v5 + 240);
    if ( (!v55 || !v55(v2)) && (*(_BYTE *)(v2 + 51) & 4) != 0 )
    {
      v56 = *v4;
      if ( (*(_BYTE *)(v2 + 51) & 1) == 0 || (*(_BYTE *)v56 & 0x40) != 0 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(v56 + 28) + 40) == 1 )
        {
          if ( sub_2DD208(v56 + 28, v5 + 392, v2) )
            goto LABEL_107;
          v56 = *v4;
        }
        if ( (*(_WORD *)(v56 + 2) & 0x180) != 0x80 )
          (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)(v56 + 24) + 24))(v56, *(_DWORD *)(v2 + 4));
      }
    }
LABEL_107:
    if ( *(_DWORD *)(v2 + 28) == -3 )
      return 1;
  }
  v6 = *v4;
  if ( (*(_BYTE *)*v4 & 3u) > 1
    || (*(_BYTE *)(v2 + 52) & 8) == 0
    || (*(_BYTE *)(v2 + 51) & 6) != 6
    || (*(_WORD *)(v2 + 52) & 0x180) != 0x100
    || *(_DWORD *)(*(_DWORD *)(v6 + 28) + 40) == 1 && sub_2DD208(v6 + 28, v5 + 392, v2) )
  {
    if ( *(_DWORD *)(v2 + 28) == -2 )
    {
      v11 = 0;
      v9 = *(unsigned __int8 *)(v2 + 48);
      v10 = *(unsigned __int8 *)(v2 + 12) - 1;
      goto LABEL_15;
    }
    if ( ((*(_BYTE *)(v2 + 51) & 0xC) != 0 || !*(_BYTE *)(v2 + 12)) && (*(_BYTE *)(v2 + 51) & 3) == 0
      || (v7 = *(_BYTE *)(*v4 + 1) & 0x60, v7 == 96)
      || v7 == 64 && !sub_2AAC2C(*(_DWORD **)(*v4 + 32), *(const char **)(v2 + 4), 0, 0) )
    {
      v9 = *(unsigned __int8 *)(v2 + 48);
      goto LABEL_63;
    }
    v8 = *(unsigned __int8 *)(v2 + 12);
    v9 = *(unsigned __int8 *)(v2 + 48);
    if ( (unsigned int)(v8 - 3) <= 1 )
    {
      v67 = *(_DWORD *)(v2 + 20);
      if ( (*(_BYTE *)(*v4 + 1) & 4) != 0
        && (char **)v67 != &off_470950
        && *(char ***)(v67 + 60) == &off_470950
        && (((*(_WORD *)(v67 + 24) & 0x380) - 256) & 0xFEFF) != 0 )
      {
        goto LABEL_63;
      }
      if ( (*(_DWORD *)(v67 + 20) & 0x100000) == 0 )
      {
        v68 = *(_DWORD *)(v67 + 148);
        if ( v68 )
        {
          if ( (*(_DWORD *)(v68 + 40) & 0x200000) != 0 )
            goto LABEL_63;
        }
      }
    }
    v10 = v8 - 1;
    if ( (unsigned __int8)v10 > 1u )
    {
      v11 = 0;
      goto LABEL_15;
    }
    v69 = *(_DWORD *)(v2 + 20);
    if ( v69 )
    {
      if ( (*(_DWORD *)(v69 + 40) & 0x200000) != 0 )
      {
LABEL_63:
        if ( *(_DWORD *)(v2 + 32) == -1 && v9 != 10 && (*(_BYTE *)(v2 + 52) & 8) == 0 )
          return 1;
        v11 = 1;
        v10 = *(unsigned __int8 *)(v2 + 12) - 1;
LABEL_15:
        v12 = *(_DWORD *)(v2 + 44);
        v13 = *(_BYTE *)(v2 + 49);
        v80 = 0;
        v81 = v12;
        v84 = v13;
        switch ( v10 )
        {
          case 0:
          case 1:
            goto LABEL_36;
          case 2:
          case 3:
            v16 = *(char ***)(v2 + 20);
            v20 = (int)v16[15];
            if ( !v20 )
            {
              v27 = v16[37];
              if ( v27 && (*((_DWORD *)v27 + 10) & 0x800) == 0 )
                sub_2A6BBC("elflink.c", 9757);
              goto LABEL_36;
            }
            v86 = sub_2D4B7C(v4[1], v20);
            if ( v86 == -257 )
            {
              v14 = 0;
              sub_2A6A5C("%B: could not find output section %A for input section %A", v4[1], v16[15], v16);
              ((void (__fastcall *)(int))loc_2A6C48)(15);
              *a2 = 1;
              return v14;
            }
            v21 = *v4;
            v22 = (int)&v16[14][*(_DWORD *)(v2 + 24)];
            v23 = *(_BYTE *)*v4 & 3;
            v80 = v22;
            if ( v23 != 2 )
            {
              v24 = *(unsigned __int8 *)(v2 + 48);
              v25 = v22 + *((_DWORD *)v16[15] + 7);
              v80 = v25;
              if ( v24 == 6 )
              {
                v26 = *(_DWORD *)(*(_DWORD *)(v21 + 28) + 204);
                if ( v26 )
                  v80 = v25 - *(_DWORD *)(v26 + 28);
              }
            }
LABEL_24:
            if ( (v9 & 0xFFFFFFFB) == 1 )
              goto LABEL_25;
            goto LABEL_37;
          case 4:
            v16 = *(char ***)(*(_DWORD *)(v2 + 20) + 4);
            v17 = (*(int (__fastcall **)(char **))(v5 + 344))(v16);
            v18 = *(_DWORD **)(v2 + 20);
            v86 = v17;
            v80 = 1 << *v18;
            goto LABEL_24;
          case 5:
            return 1;
          default:
            sub_2A6BF0((int)"elflink.c", 9710, (int)"elf_link_output_extsym");
        }
      }
    }
    v70 = *(_DWORD *)(v2 + 44);
    v11 = 0;
    v71 = *(_BYTE *)(v2 + 49);
    v80 = 0;
    v81 = v70;
    v84 = v71;
LABEL_36:
    v16 = &off_4708A8;
    v86 = 0;
    if ( (v9 & 0xFFFFFFFB) == 1 )
    {
LABEL_25:
      v19 = *(_BYTE *)(v2 + 12);
      switch ( v19 )
      {
        case 1:
        case 2:
          v19 = v9;
          goto LABEL_38;
        case 3:
        case 4:
          if ( !(*(int (__fastcall **)(int *))(v5 + 340))(&v80) )
            goto LABEL_144;
          if ( (*(_BYTE *)*v4 & 3) != 2 )
LABEL_207:
            sub_2A6BF0((int)"elflink.c", 9532, (int)"elf_link_convert_common_type");
          v64 = (*(unsigned __int8 *)(*v4 + 2) >> 1) & 3;
          if ( v64 == 1 )
          {
            v19 = 5;
            goto LABEL_38;
          }
          if ( v64 == 2 )
          {
LABEL_144:
            v19 = 1;
            goto LABEL_38;
          }
          break;
        case 5:
          if ( (*(_BYTE *)*v4 & 3) != 2 )
            goto LABEL_207;
          v63 = (*(unsigned __int8 *)(*v4 + 2) >> 1) & 3;
          if ( v63 == 1 )
            goto LABEL_38;
          if ( v63 == 2 )
            goto LABEL_144;
          break;
        default:
          sub_2A6BF0((int)"elflink.c", 9797, (int)"elf_link_output_extsym");
      }
    }
LABEL_37:
    v19 = v9 & 0xF;
LABEL_38:
    v28 = *(_BYTE *)(v2 + 52);
    if ( (v28 & 8) != 0 )
    {
      v83 = v19;
      v84 &= 0xFCu;
    }
    else if ( (*(_BYTE *)(v2 + 53) & 4) != 0 && (*(_BYTE *)(v2 + 51) & 2) != 0 )
    {
      v83 = v19 - 96;
    }
    else
    {
      if ( ((*(_BYTE *)(v2 + 12) - 2) & 0xFD) != 0 )
        v62 = v19 + 16;
      else
        v62 = v19 + 32;
      v83 = v62;
    }
    v29 = *(_DWORD *)(v2 + 48);
    v85 = *(_BYTE *)(v2 + 50);
    v30 = *v4;
    v72 = (v29 & 0x20000FF) == 33554442;
    v31 = *(_BYTE *)*v4 & 3;
    if ( v72 )
    {
      if ( v31 != 2 )
      {
LABEL_45:
        if ( !(*(int (__fastcall **)(int, int, int, int *))(v5 + 152))(v4[1], v30, v2, &v80) )
          goto LABEL_98;
        v30 = *v4;
        v31 = *(_BYTE *)*v4 & 3;
LABEL_47:
        v32 = v86;
        if ( !v86 )
        {
          v33 = *(_BYTE *)(v2 + 51);
          if ( (v33 & 1) != 0 && (v83 >> 4) - 1 <= 1u )
          {
            v65 = v83 & 0xF;
            if ( v65 == 10 )
              LOBYTE(v65) = 2;
            if ( (*(_BYTE *)(v2 + 51) & 0x10) != 0 )
              v66 = 16;
            else
              v66 = 32;
            v83 = v66 + v65;
          }
          if ( (v33 & 0xA) == 8 )
            v81 = 0;
        }
        if ( v31 != 2 )
        {
          v34 = v84 & 3;
          if ( (v84 & 3) != 0 && v83 >> 4 != 2 && *(_BYTE *)(v2 + 12) == 1 && (*(_BYTE *)(v2 + 51) & 2) == 0 )
          {
            if ( v34 == 3 )
            {
              v35 = "%B: protected symbol `%s' isn't defined";
            }
            else
            {
              v35 = "%B: internal symbol `%s' isn't defined";
              if ( v34 != 1 )
                v35 = "%B: hidden symbol `%s' isn't defined";
            }
            v14 = 0;
            sub_2A6A5C(v35, v4[1], *(_DWORD *)(v2 + 4));
            ((void (__fastcall *)(int))loc_2A6C48)(17);
            *a2 = 1;
            return v14;
          }
        }
        v36 = *(_DWORD *)(v30 + 28);
        if ( *(_DWORD *)(v36 + 268) && *(_DWORD *)(v2 + 32) != -1 && *(_DWORD *)(v36 + 48) )
        {
          v37 = v4[1];
          if ( !*(_DWORD *)(v2 + 64) && (v31 > 1 || (*(_BYTE *)(v2 + 51) & 6) != 2) )
          {
            v78 = v4[1];
            v79 = *(const char **)(v2 + 4);
            v54 = strrchr(v79, 64);
            v37 = v78;
            if ( v54 )
            {
              if ( v54[1] )
              {
                sub_2A6A5C("%B: No symbol version section for versioned symbol `%s'", v78, v79);
                goto LABEL_98;
              }
            }
          }
          v38 = *(_DWORD *)(v5 + 392);
          v82 = *(_DWORD *)(v2 + 56);
          if ( (unsigned int)(v32 - 65280) < 0xFFFF0000 )
          {
            if ( !sub_2DCC1C(v37) )
              goto LABEL_98;
            v38 = *(_DWORD *)(v5 + 392);
            v37 = v4[1];
          }
          (*(void (__fastcall **)(int, int *))(v38 + 36))(v37, &v80);
          v39 = v4[3];
          if ( v39 )
          {
            v40 = *(_DWORD *)(*(_DWORD *)(v39 + 140) + 40);
            v41 = *(_DWORD *)(*(_DWORD *)(*v4 + 28) + 100);
            v42 = sub_347674(*(_DWORD *)(v2 + 60), v41);
            v43 = 8 * v40;
            v44 = v40 * (HIDWORD(v42) + 2);
            v45 = *(_DWORD *)(v39 + 108);
            v46 = v45 + v44;
            if ( 8 * v40 == 8 )
            {
              v74 = *(_BYTE *)(v45 + v44);
              *(_BYTE *)(v45 + v44) = *(_DWORD *)(v2 + 32);
              *(_BYTE *)(*(_DWORD *)(v4[3] + 108) + v40 * (v41 + 2 + *(_DWORD *)(v2 + 32))) = v74;
            }
            else
            {
              switch ( v43 )
              {
                case 16:
                  v75 = (*(int (__fastcall **)(int))(*(_DWORD *)(v4[1] + 4) + 52))(v45 + v44);
                  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(v4[1] + 4) + 60))(*(_DWORD *)(v2 + 32), v46);
                  (*(void (__fastcall **)(int, int))(*(_DWORD *)(v4[1] + 4) + 60))(
                    v75,
                    *(_DWORD *)(v4[3] + 108) + v40 * (v41 + 2 + *(_DWORD *)(v2 + 32)));
                  break;
                case 32:
                  v76 = (*(int (__fastcall **)(int))(*(_DWORD *)(v4[1] + 4) + 40))(v45 + v44);
                  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(v4[1] + 4) + 48))(*(_DWORD *)(v2 + 32), v46);
                  (*(void (__fastcall **)(int, int))(*(_DWORD *)(v4[1] + 4) + 48))(
                    v76,
                    *(_DWORD *)(v4[3] + 108) + v40 * (v41 + 2 + *(_DWORD *)(v2 + 32)));
                  break;
                case 64:
                  v77 = (*(int (__fastcall **)(int))(*(_DWORD *)(v4[1] + 4) + 28))(v45 + v44);
                  (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)(v4[1] + 4) + 36))(
                    *(_DWORD *)(v2 + 32),
                    *(int *)(v2 + 32) >> 31,
                    v46);
                  (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)(v4[1] + 4) + 36))(
                    v77,
                    0,
                    *(_DWORD *)(v4[3] + 108) + v40 * (v41 + 2 + *(_DWORD *)(v2 + 32)));
                  break;
                default:
                  sub_2A6BF0((int)"elflink.c", 9955, (int)"elf_link_output_extsym");
              }
            }
          }
          v47 = v4[4];
          if ( v47 )
          {
            v48 = *(_DWORD *)(v47 + 108);
            if ( v48 )
            {
              v49 = *(_DWORD *)(v2 + 64);
              if ( (*(_BYTE *)(v2 + 51) & 2) != 0 )
              {
                v72 = v49 == 0;
                if ( v49 )
                  v73 = *(_DWORD *)(v49 + 8);
                else
                  LOWORD(v73) = 1;
                if ( !v72 )
                  LOWORD(v73) = v73 + 1;
                LOWORD(v87[0]) = v73;
                if ( (*(_BYTE *)*v4 & 0x20) != 0 )
                  ++LOWORD(v87[0]);
                if ( (*(_BYTE *)(v2 + 52) & 6) == 6 )
                  LOWORD(v87[0]) = ~((unsigned int)~(LOWORD(v87[0]) << 17) >> 17);
              }
              else if ( !v49
                     || ((*(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v49 + 20) + 160) + 2340) >> 6) & 0xB) != 0 )
              {
                LOWORD(v87[0]) = 0;
              }
              else
              {
                LOWORD(v87[0]) = *(_WORD *)(v49 + 36) + 1;
              }
              sub_2CD6E0(v4[1], (unsigned __int16 *)v87, v48 + 2 * *(_DWORD *)(v2 + 32));
            }
          }
        }
        else if ( v16 == &off_4708A8
               && *(_DWORD *)(v2 + 28) != -2
               && ((*(_BYTE *)(v2 + 52) & 0x20) == 0 || v83 >> 4 != 1)
               && v31 != 2 )
        {
          return 1;
        }
        if ( !v11 && ((unsigned int)v16[5] & 0x8000) == 0 )
        {
          if ( a2[1] )
          {
            v14 = a2[2];
            if ( !v14 )
            {
              v50 = (_DWORD *)a2[3];
              if ( v50[14] )
              {
                v87[3] = 4;
                memset(v87, 0, 12);
                v87[4] = -15;
                if ( !sub_2DCC48(v50, 0, v87, (int)&off_4708A8, 0) )
                  return v14;
                a2[2] = 1;
              }
            }
          }
          v51 = v4;
          v52 = *(_DWORD *)(v4[1] + 124);
          v53 = sub_2DCC48(v51, *(_BYTE **)(v2 + 4), &v80, (int)v16, v2);
          v14 = v53;
          if ( v53 )
          {
            if ( v53 == 1 )
            {
              *(_DWORD *)(v2 + 28) = v52;
              return v14;
            }
            if ( *(_DWORD *)(v2 + 28) == -2 )
              sub_2A6BF0((int)"elflink.c", 10049, (int)"elf_link_output_extsym");
            return 1;
          }
LABEL_98:
          v14 = 0;
          *a2 = 1;
          return v14;
        }
        return 1;
      }
      if ( *(_DWORD *)(v2 + 32) != -1 )
        goto LABEL_133;
    }
    else if ( *(_DWORD *)(v2 + 32) != -1 )
    {
      if ( (*(_BYTE *)*v4 & 1) == 0 )
        goto LABEL_133;
      goto LABEL_43;
    }
    if ( (v28 & 8) == 0 || (*(_BYTE *)*v4 & 1) == 0 )
      goto LABEL_47;
LABEL_43:
    if ( (*(_BYTE *)(v2 + 49) & 3) == 0 || *(_BYTE *)(v2 + 12) != 2 )
    {
LABEL_44:
      if ( !*(_DWORD *)(*(_DWORD *)(v30 + 28) + 48) )
        goto LABEL_47;
      goto LABEL_45;
    }
LABEL_133:
    if ( (v28 & 8) != 0 )
      goto LABEL_47;
    goto LABEL_44;
  }
  for ( i = v2; *(_BYTE *)(i + 12) == 6; i = *(_DWORD *)(i + 20) )
    ;
  v58 = *(_BYTE *)(v2 + 49) & 3;
  if ( v58 == 1 )
  {
    v59 = "%B: internal symbol `%s' in %B is referenced by DSO";
  }
  else if ( v58 == 2 )
  {
    v59 = "%B: hidden symbol `%s' in %B is referenced by DSO";
  }
  else
  {
    v59 = "%B: local symbol `%s' in %B is referenced by DSO";
  }
  v60 = *(_DWORD *)(i + 20);
  v14 = 0;
  if ( (char **)v60 == &off_470950 )
    v61 = v4[1];
  else
    v61 = *(_DWORD *)(v60 + 148);
  sub_2A6A5C(v59, v4[1], *(_DWORD *)(v2 + 4), v61);
  ((void (__fastcall *)(int))loc_2A6C48)(17);
  *a2 = 1;
  return v14;
}
