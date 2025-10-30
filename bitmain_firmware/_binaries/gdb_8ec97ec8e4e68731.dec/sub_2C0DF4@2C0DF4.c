int __fastcall sub_2C0DF4(int a1, int a2, int a3, int *a4, int a5, _DWORD *a6, int a7, int a8)
{
  _DWORD *v8; // r9
  unsigned int v11; // r7
  unsigned int v12; // r11
  unsigned int v13; // r4
  int v14; // r8
  unsigned int v15; // r3
  int v16; // r3
  char v17; // r3
  int v18; // r5
  int v19; // r0
  char v20; // r3
  int v21; // r3
  unsigned int v22; // r2
  char **v23; // r3
  int v24; // r0
  int v25; // r4
  char *v26; // r0
  char *s; // r5
  int v28; // r6
  bool v29; // cc
  int v30; // r2
  char *v31; // r0
  bool v32; // cc
  int v33; // r0
  int v34; // r2
  int v35; // r3
  int v36; // r4
  int v37; // r0
  char *v38; // r1
  int v39; // r4
  int v40; // r0
  int v41; // r0
  int v42; // r3
  int v43; // r1
  void (__fastcall *v44)(unsigned int, int); // r2
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r3
  int v49; // r4
  int i; // r3
  int v51; // r3
  _BOOL4 v52; // r2
  int v53; // r2
  bool v54; // zf
  int v55; // r5
  int v56; // r0
  int v57; // r0
  unsigned int v58; // r2
  unsigned int v59; // r1
  int v60; // r0
  int v61; // r2
  _DWORD *v62; // r4
  int v63; // r1
  int v64; // r0
  int v65; // r0
  char *v66; // r5
  int v67; // r5
  unsigned int v68; // r5
  int v69; // r3
  int v70; // r0
  int v71; // r0
  unsigned int v72; // r5
  void (__fastcall *v73)(int, int); // r4
  int v74; // r1
  int v75; // r2
  bool v76; // zf
  int v77; // r8
  int v78; // r0
  int v79; // r2
  int v80; // r3
  int v81; // r3
  int v82; // r0
  int v83; // r2
  bool v84; // zf
  int v85; // r6
  int v86; // r0
  char *v87; // r3
  int v88; // r4
  int v90; // [sp+38h] [bp-4Ch]
  char *v92; // [sp+40h] [bp-44h]
  _DWORD *v93; // [sp+44h] [bp-40h]
  int v94; // [sp+48h] [bp-3Ch]
  int v95; // [sp+4Ch] [bp-38h]
  void (__fastcall *v96)(int, int, int, int *, _DWORD, int); // [sp+4Ch] [bp-38h]
  unsigned int v97; // [sp+50h] [bp-34h]
  _DWORD *v98; // [sp+54h] [bp-30h]
  int v100; // [sp+5Ch] [bp-28h]
  int v101; // [sp+60h] [bp-24h]
  int v102; // [sp+70h] [bp-14h] BYREF
  int v103; // [sp+74h] [bp-10h] BYREF
  char *v104; // [sp+78h] [bp-Ch] BYREF
  int v105; // [sp+7Ch] [bp-8h] BYREF

  v8 = a6;
  v93 = *(_DWORD **)(a2 + 28);
  if ( v93[11] != 4 )
    return 0;
  v98 = *(_DWORD **)(a3 + 160);
  v101 = v98[134];
  v97 = (unsigned int)&a6[3 * a4[19]];
  if ( (unsigned int)a6 >= v97 )
    return 1;
  while ( 1 )
  {
    v11 = v8[1];
    v103 = 0;
    v104 = 0;
    v12 = (unsigned __int8)v11;
    v13 = v11 >> 8;
    if ( (unsigned __int8)v11 == 38 )
    {
      if ( v93[92] )
      {
        v12 = 3;
        v14 = 3;
      }
      else
      {
        v12 = 2;
        v14 = 2;
      }
LABEL_103:
      v92 = (char *)&dword_41530C[13 * v14];
      goto LABEL_10;
    }
    if ( (unsigned __int8)v11 == 41 )
      v12 = v93[93];
    v14 = v12;
    if ( v12 - 100 <= 1 )
      goto LABEL_66;
    if ( v12 <= 0x87 )
      goto LABEL_103;
    v92 = sub_2B5690(v12);
    if ( !v92 )
      return sub_301C58(a3, a4, v12);
LABEL_10:
    v102 = 0;
    v15 = v98[26];
    if ( v15 <= v13 )
    {
      if ( !v101 )
        return 0;
      v28 = *(_DWORD *)(v101 + 4 * (v13 - v15));
      if ( *(_DWORD *)(a2 + 40) && (a4[5] & 0x2000) != 0 )
        v28 = sub_2FCAF4(a2, a3, v28);
      for ( i = *(unsigned __int8 *)(v28 + 12); (unsigned int)(i - 6) <= 1; i = *(unsigned __int8 *)(v28 + 12) )
        v28 = *(_DWORD *)(v28 + 20);
      v103 = 0;
      if ( (unsigned int)(i - 3) <= 1 )
      {
        v102 = *(_DWORD *)(v28 + 20);
        v23 = (char **)v102;
        if ( v102 && (v63 = *(_DWORD *)(v102 + 60)) != 0 )
        {
          v95 = *(_DWORD *)(v28 + 24) + *(_DWORD *)(v102 + 56) + *(_DWORD *)(v63 + 28);
        }
        else
        {
          v95 = 0;
          v103 = 1;
        }
        goto LABEL_120;
      }
      if ( i != 2 )
      {
        v51 = *(_BYTE *)(a2 + 2) & 0x60;
        if ( v51 == 32 )
        {
          v53 = *(_BYTE *)(v28 + 49) & 3;
          if ( (*(_BYTE *)(v28 + 49) & 3) != 0 && (*(_BYTE *)a2 & 3) != 2 )
            goto LABEL_118;
        }
        else if ( (*(_BYTE *)a2 & 3) != 2 )
        {
          if ( v51 == 96 )
          {
            v52 = 1;
LABEL_119:
            v95 = 0;
            (*(void (__fastcall **)(int, _DWORD, int, int *, _DWORD, _BOOL4))(*(_DWORD *)(a2 + 24) + 24))(
              a2,
              *(_DWORD *)(v28 + 4),
              a3,
              a4,
              *v8,
              v52);
            v23 = (char **)v102;
LABEL_120:
            v94 = *(unsigned __int8 *)(v28 + 48);
            v90 = 0;
            goto LABEL_121;
          }
          v53 = *(_BYTE *)(v28 + 49) & 3;
LABEL_118:
          v52 = v53 != 0;
          goto LABEL_119;
        }
      }
      v23 = (char **)v102;
      v95 = 0;
      goto LABEL_120;
    }
    v16 = v12;
    if ( v12 )
      v16 = 1;
    v100 = v16;
    if ( v12 == 40 )
      v17 = 0;
    else
      v17 = v16 & 1;
    v18 = v11 >> 8;
    if ( v13 )
      v18 = 1;
    v19 = a7 + 20 * v13;
    v20 = v17 & v18;
    if ( *(char ***)(a8 + 4 * v13) == &off_4708A8 )
      v21 = v20 & 1;
    else
      v21 = 0;
    v102 = *(_DWORD *)(a8 + 4 * v13);
    v22 = *(unsigned __int8 *)(v19 + 12);
    v90 = a7 + 20 * v13;
    v94 = v22 & 0xF;
    if ( v21 && v22 >> 4 != 2 )
    {
      v96 = *(void (__fastcall **)(int, int, int, int *, _DWORD, int))(*(_DWORD *)(a2 + 24) + 24);
      v65 = sub_2CD844(a3, v98[25], *(_DWORD *)(v19 + 8));
      v96(a2, v65, a3, a4, *v8, 1);
    }
    if ( !v93[108] )
    {
      v28 = 0;
      v56 = sub_2DB204(a1, v90, &v102, v8);
      v23 = (char **)v102;
      v95 = v56;
      goto LABEL_121;
    }
    v23 = (char **)v102;
    v24 = *(_DWORD *)(v102 + 60);
    v95 = *(_DWORD *)(v24 + 28) + *(_DWORD *)(v102 + 56) + *(_DWORD *)(a7 + 20 * v13);
    if ( (*(_BYTE *)a2 & 3) != 2 )
      break;
    if ( (char **)v102 == &off_470950 )
    {
      v62 = v8 + 3;
      goto LABEL_145;
    }
LABEL_136:
    v28 = 0;
    if ( (char **)v24 != &off_470950 )
      goto LABEL_125;
LABEL_137:
    if ( ((((_WORD)v23[6] & 0x380) - 256) & 0xFEFF) != 0 )
    {
      sub_3015A0(v92, a3, a4, a5 + *v8);
      if ( (*(_BYTE *)a2 & 3) == 2
        && (a4[5] & 0x2000) != 0
        && (v57 = sub_2D05DC(a4[15]), v58 = *(_DWORD *)(v57 + 24), v59 = *(_DWORD *)(v57 + 40), v58 > v59) )
      {
        *(_DWORD *)(v57 + 24) = v58 - v59;
        v60 = sub_2D05DC(a4);
        v61 = -1431655765 * ((int)(v97 - (_DWORD)v8) >> 2);
        *(_DWORD *)(v60 + 24) -= *(_DWORD *)(v60 + 40);
        v97 -= 12;
        memmove(v8, v8 + 3, 12 * (v61 - 1));
        --a4[19];
      }
      else
      {
        v8[1] = 0;
        v8[2] = 0;
        v8 += 3;
      }
      goto LABEL_67;
    }
LABEL_125:
    if ( (*(_BYTE *)a2 & 3) == 2 )
    {
      v62 = v8 + 3;
      if ( !v90 )
      {
LABEL_146:
        v8 = v62;
        goto LABEL_67;
      }
LABEL_145:
      if ( (*(_BYTE *)(v90 + 12) & 0xF) == 3 )
      {
        v66 = v23[14];
        if ( v93[108] )
        {
          v75 = *(_DWORD *)(a3 + 4);
          v76 = *(_DWORD *)v92 == 30;
          if ( *(_DWORD *)v92 != 30 )
            v76 = *(_DWORD *)v92 == 10;
          v77 = a5 + *v8;
          if ( v76 )
          {
            v85 = (*(int (__fastcall **)(int))(v75 + 52))(a5 + *v8);
            v8 = v62;
            v86 = (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 52))(v77 + 2);
            v87 = &v66[(v85 << 12) & 0x7FF000 | (2 * v86) & 0xFFE];
            v88 = ((unsigned int)v87 >> 1) & 0x7FF | v86 & 0xF800;
            (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a3 + 4) + 60))(
              ((unsigned int)v87 >> 12) & 0x7FF | v85 & 0xF800,
              v77);
            (*(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 60))(v88, v77 + 2);
          }
          else
          {
            v78 = (*(int (__fastcall **)(int))(v75 + 40))(a5 + *v8);
            v79 = *((_DWORD *)v92 + 10);
            v80 = v78 & v79;
            if ( (v78 & v79 & ((unsigned int)(v79 + 1) >> 1)) != 0 )
              v80 |= ~v79;
            if ( *(_DWORD *)v92 == 1 || *(_DWORD *)v92 && (unsigned int)(*(_DWORD *)v92 - 27) <= 2 )
              v81 = (int)&v66[v80 << *((_DWORD *)v92 + 2)] >> *((_DWORD *)v92 + 1);
            else
              v81 = (int)&v66[v80];
            v8 = v62;
            (*(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 48))(
              v78 ^ (v81 ^ v78) & *((_DWORD *)v92 + 11),
              v77);
          }
        }
        else
        {
          v8[2] += v66;
          v8 = v62;
        }
        goto LABEL_67;
      }
      goto LABEL_146;
    }
    v55 = v12;
    if ( v12 )
      v55 = 1;
    if ( v13 )
      v25 = v55;
    else
      v25 = 0;
    if ( v28 )
    {
      s = *(char **)(v28 + 4);
      if ( v25 && (unsigned int)*(unsigned __int8 *)(v28 + 12) - 3 <= 1 )
        goto LABEL_32;
      goto LABEL_46;
    }
LABEL_28:
    v26 = (char *)sub_2CD844(a3, v98[25], *(_DWORD *)(v90 + 8));
    s = v26;
    if ( v26 && *v26 )
    {
      if ( v25 )
        goto LABEL_31;
    }
    else
    {
      s = *(char **)v102;
      if ( v25 )
      {
LABEL_31:
        v28 = 0;
LABEL_32:
        if ( v12 - 104 <= 2 || v12 - 17 <= 2 || (unsigned int)(v14 - 107) <= 1 || (unsigned int)(v14 - 90) <= 1 )
        {
          v30 = 1;
        }
        else
        {
          v29 = v12 > 0x81;
          if ( v12 != 129 )
            v29 = v12 - 92 > 1;
          v30 = !v29;
        }
        if ( (v94 == 6) != v30 )
        {
          v31 = "%B(%A+%#Lx): %s used with TLS symbol %s";
          if ( v94 != 6 )
            v31 = "%B(%A+%#Lx): %s used with non-TLS symbol %s";
          sub_2A6A5C(v31, a3, a4, *v8, *((_DWORD *)v92 + 8), s);
        }
        goto LABEL_46;
      }
    }
    v28 = v25;
LABEL_46:
    if ( sub_2B5768((_BYTE *)a2, v12, v28) == v14 )
    {
      if ( (unsigned int)(v14 - 90) <= 1 )
        goto LABEL_51;
      v32 = v12 > 0x81;
      if ( v12 != 129 )
        v32 = v12 - 92 > 1;
      if ( v32 )
      {
LABEL_83:
        if ( v28 )
        {
LABEL_84:
          v48 = *(_BYTE *)(v28 + 50) & 3;
LABEL_85:
          v49 = sub_2BCB08(v92, a3, a1, a4, a5, v8, v95, a2, (char **)v102, s, v94, v48, v28, &v103, &v104);
          if ( v103 && ((a4[5] & 0x2000) == 0 || (*(_BYTE *)(v28 + 51) & 8) == 0) && sub_2DB2EC(a1, a2, a4, *v8) != -1 )
          {
            sub_2A6A5C(
              "%B(%A+%#Lx): unresolvable %s relocation against symbol `%s'",
              a3,
              a4,
              *v8,
              *((_DWORD *)v92 + 8),
              *(_DWORD *)(v28 + 4));
            return 0;
          }
          if ( v49 != 2 )
          {
            switch ( v49 )
            {
              case 3:
                if ( !v28 || *(_BYTE *)(v28 + 12) != 1 )
                  (*(void (__fastcall **)(int, int, char *, _DWORD, _DWORD, int, int *, _DWORD))(*(_DWORD *)(a2 + 24)
                                                                                               + 28))(
                    a2,
                    v28,
                    s,
                    *((_DWORD *)v92 + 8),
                    0,
                    a3,
                    a4,
                    *v8);
                break;
              case 4:
                v38 = "out of range";
                v104 = "out of range";
                goto LABEL_93;
              case 6:
                goto LABEL_61;
              case 8:
                (*(void (__fastcall **)(int, char *, int, int *, _DWORD, int))(*(_DWORD *)(a2 + 24) + 24))(
                  a2,
                  s,
                  a3,
                  a4,
                  *v8,
                  1);
                break;
              case 9:
                v38 = v104;
                if ( !v104 )
                {
                  sub_2A6BBC("elf32-arm.c", 12581);
                  v38 = v104;
                }
                goto LABEL_93;
              default:
                v38 = "unknown error";
                v104 = "unknown error";
                goto LABEL_93;
            }
          }
          goto LABEL_66;
        }
      }
      else
      {
LABEL_51:
        if ( v28 )
        {
          if ( (*(_BYTE *)(v28 + 92) & 8) == 0 )
          {
            switch ( *((_BYTE *)v8 + 4) )
            {
              case 0x5A:
                goto LABEL_79;
              case 0x5B:
                goto LABEL_74;
              case 0x5C:
                goto LABEL_69;
              case 0x5D:
                goto LABEL_62;
              case 0x81:
                goto LABEL_54;
              default:
                goto LABEL_60;
            }
          }
          goto LABEL_84;
        }
        if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a3 + 160) + 2352) + (v11 >> 8)) & 8) == 0 )
        {
          switch ( *((_BYTE *)v8 + 4) )
          {
            case 0x5A:
              goto LABEL_201;
            case 0x5B:
              goto LABEL_194;
            case 0x5C:
              goto LABEL_69;
            case 0x5D:
              goto LABEL_195;
            case 0x81:
              goto LABEL_54;
            default:
              goto LABEL_60;
          }
        }
      }
      v48 = *(_BYTE *)(v90 + 14) & 3;
      goto LABEL_85;
    }
    switch ( *((_BYTE *)v8 + 4) )
    {
      case 0x5A:
        if ( v28 )
        {
LABEL_79:
          v46 = (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 40))(a5 + *v8);
          if ( (v46 & 1) != 0 )
            v47 = v46 - 5;
          else
            v47 = v46 - 8;
        }
        else
        {
LABEL_201:
          v47 = 0;
        }
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 48))(v47, a5 + *v8);
        v103 = 0;
        goto LABEL_83;
      case 0x5B:
LABEL_74:
        if ( v28 )
          v45 = -409010176;
        else
LABEL_194:
          v45 = -509607936;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 48))(v45, a5 + *v8);
        break;
      case 0x5C:
LABEL_69:
        v41 = (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 40))(a5 + *v8);
        if ( (v41 & 0xFFFF0FF0) == 0xE08F0000 )
        {
          if ( !v28 )
            (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a3 + 4) + 48))(
              (unsigned __int16)v41 | 0xE1A00000,
              a5 + *v8);
        }
        else
        {
          v42 = *v8;
          if ( (v41 & 0xFFF00FFF) == 0xE5900004 )
          {
            v43 = a5 + v42;
            v44 = *(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a3 + 4) + 48);
            if ( v28 )
            {
              v44(v41 & 0xFFFFF000, v43);
              break;
            }
            goto LABEL_207;
          }
          if ( (v41 & 0xFFFFFFF0) == 0xE12FFF30 )
          {
            v43 = a5 + v42;
            v44 = *(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a3 + 4) + 48);
            if ( v28 )
            {
              v44(v41 & 0xF | 0xE1A00000, v43);
              break;
            }
LABEL_207:
            v44(-509607936u, v43);
            break;
          }
          sub_2A6A5C("%B(%A+%#Lx): unexpected ARM instruction '%#lx' in TLS trampoline", a3, a4, v42, v41);
LABEL_60:
          v103 = 0;
LABEL_61:
          v38 = "unsupported relocation";
          v104 = "unsupported relocation";
LABEL_93:
          (*(void (__fastcall **)(int, char *, int, int *, _DWORD))(*(_DWORD *)(a2 + 24) + 32))(a2, v38, a3, a4, *v8);
        }
        break;
      case 0x5D:
LABEL_62:
        if ( v28 )
        {
          v39 = 26624;
          v40 = 17528;
        }
        else
        {
LABEL_195:
          v40 = sub_2B6484(v93 + 311);
          v84 = v40 == 0;
          if ( v40 )
          {
            v39 = 0x8000;
            v40 = 62383;
          }
          else
          {
            v39 = 48896;
          }
          if ( v84 )
            v40 = v39;
        }
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 60))(v40, a5 + *v8);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 60))(v39, a5 + *v8 + 2);
        break;
      case 0x81:
LABEL_54:
        v33 = (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 52))(a5 + *v8);
        v34 = v33;
        if ( (v33 & 0xFF78) == 0x4478 )
        {
          if ( !v28 )
            (*(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 60))(18112, a5 + *v8);
        }
        else
        {
          v35 = *v8;
          if ( (v33 & 0xFFC0) == 0x6840 )
          {
            v73 = *(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 60);
            v74 = a5 + v35;
            if ( v28 )
            {
              v73(v33 & 0xF83F, v74);
              break;
            }
LABEL_210:
            v73(18112, v74);
            break;
          }
          if ( (v33 & 0xFF87) != 0x4780 )
          {
            if ( (v33 & 0xF000) == 0xF000 || (v33 & 0xF800) == 0xE800 )
            {
              v36 = v33 << 16;
              v37 = (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 52))(a5 + v35 + 2);
              v35 = *v8;
              v34 = v36 | v37;
            }
            sub_2A6A5C("%B(%A+%#Lx): unexpected Thumb instruction '%#lx' in TLS trampoline", a3, a4, v35, v34);
            goto LABEL_60;
          }
          v73 = *(void (__fastcall **)(int, int))(*(_DWORD *)(a3 + 4) + 60);
          v74 = a5 + v35;
          if ( !v28 )
            goto LABEL_210;
          v73(v33 & 0x78 | 0x4600, v74);
        }
        break;
      default:
        goto LABEL_60;
    }
LABEL_66:
    v8 += 3;
LABEL_67:
    if ( v97 <= (unsigned int)v8 )
      return 1;
  }
  if ( (*(_DWORD *)(v102 + 20) & 0x800000) == 0 || (*(_BYTE *)(v90 + 12) & 0xF) != 3 )
  {
    if ( (char **)v102 == &off_470950 )
    {
      v25 = v100 & v18;
      goto LABEL_28;
    }
    goto LABEL_136;
  }
  v64 = *v8;
  switch ( v12 )
  {
    case '+':
    case ',':
      v68 = (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 40))(a5 + v64);
      v69 = (((v68 >> 4) & 0xF000 | v68 & 0xFFF) ^ 0x8000) - 0x8000;
      goto LABEL_168;
    case '/':
    case '0':
      v67 = (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 52))(a5 + v64) << 16;
      v68 = v67 | (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 52))(a5 + *v8 + 2);
      v69 = (((v68 >> 4) & 0xF700 | (v68 >> 15) & 0x800 | (unsigned __int8)v68) ^ 0x8000) - 0x8000;
      goto LABEL_168;
    default:
      if ( !*((_DWORD *)v92 + 1) && ((*((_DWORD *)v92 + 10) + 1) & *((_DWORD *)v92 + 10)) == 0 )
      {
        v82 = (*(int (__fastcall **)(int))(*(_DWORD *)(a3 + 4) + 40))(a5 + v64);
        v68 = v82;
        v83 = *((_DWORD *)v92 + 10);
        v69 = v83 & v82;
        if ( (v83 & v82 & ((unsigned int)(v83 + 1) >> 1)) != 0 )
          v69 = ~v83 | v82;
LABEL_168:
        v105 = v102;
        v70 = sub_2DB2B8(a1, v90, &v105, v69);
        v71 = *(_DWORD *)(*(_DWORD *)(v105 + 60) + 28) + *(_DWORD *)(v105 + 56) - v95 + v70;
        switch ( v12 )
        {
          case '+':
          case ',':
            (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a3 + 4) + 48))(
              (16 * v71) & 0xF0000 | v68 & 0xFFF0F000 | v71 & 0xFFF,
              a5 + *v8);
            break;
          case '/':
          case '0':
            v72 = (v71 << 15) & 0x4000000 | v68 & 0xFBF08F00 | (unsigned __int8)v71 | (16 * v71) & 0xF7000;
            (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a3 + 4) + 60))(HIWORD(v72), a5 + *v8);
            (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a3 + 4) + 60))(v72, a5 + *v8 + 2);
            break;
          default:
            (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a3 + 4) + 48))(
              (v71 ^ v68) & *((_DWORD *)v92 + 11) ^ v68,
              a5 + *v8);
            break;
        }
        v23 = (char **)v102;
        v28 = 0;
LABEL_121:
        v54 = v23 == &off_470950;
        if ( v23 != &off_470950 )
          v54 = v23 == 0;
        if ( v54 || v23[15] != (char *)&off_470950 )
          goto LABEL_125;
        goto LABEL_137;
      }
      sub_2A6A5C("%B(%A+%#Lx): %s relocation against SEC_MERGE section", a3, a4, *v8, *((_DWORD *)v92 + 8));
      return 0;
  }
}
