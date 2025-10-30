int __fastcall sub_2BAB34(int a1, char *a2, int a3, _DWORD *a4)
{
  int v7; // r3
  _DWORD *v8; // r8
  _DWORD *v10; // r4
  int v11; // r5
  _DWORD *v12; // r7
  const char *v13; // r11
  _DWORD *v14; // r3
  int v15; // r1
  unsigned int v16; // r10
  int v17; // r5
  unsigned int v18; // r7
  int v19; // r5
  int v20; // r2
  int v21; // r2
  unsigned int v22; // r11
  int i; // r4
  _DWORD *v24; // r3
  unsigned int v25; // r2
  bool v26; // cc
  int v27; // r3
  int v28; // r11
  char v29; // r1
  int v30; // r3
  _DWORD **v31; // r4
  _DWORD *v32; // r0
  int v33; // r2
  int v34; // r3
  int v35; // r0
  int v36; // r0
  const char *v37; // r1
  int v38; // r0
  unsigned int v39; // r2
  _DWORD *v40; // r0
  _DWORD *v41; // r4
  bool v42; // zf
  const char *v43; // r3
  int v44; // r2
  int v45; // r0
  char *v46; // r0
  int v47; // r2
  int v48; // r3
  bool v49; // zf
  int v50; // r3
  int v51; // r0
  int v52; // r0
  int v53; // r2
  int v54; // r0
  int v55; // [sp+8h] [bp-34h]
  unsigned int v57; // [sp+10h] [bp-2Ch]
  _DWORD *v58; // [sp+14h] [bp-28h]
  _DWORD *v59; // [sp+1Ch] [bp-20h]
  int v60; // [sp+20h] [bp-1Ch]
  int v61; // [sp+24h] [bp-18h]
  int v62; // [sp+28h] [bp-14h]
  int v63; // [sp+2Ch] [bp-10h]

  if ( (*a2 & 3) == 2 )
    return 1;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) != 5
    || (v7 = *(_DWORD *)(a1 + 160)) == 0
    || (*(_BYTE *)(v7 + 2340) & 0x3F) != 4 )
  {
    sub_2A6BBC("elf32-arm.c", 14321);
  }
  v8 = (_DWORD *)*((_DWORD *)a2 + 7);
  if ( v8[11] != 4 )
    return 0;
  if ( v8[13] && !v8[12] )
  {
    if ( !sub_2E03E8(a1, a2) )
      return 0;
    v48 = v8[14];
    v10 = (_DWORD *)*((_DWORD *)a2 + 7);
    v49 = v48 == 0;
    if ( !v48 )
      v47 = a1;
    v50 = v10[11];
    if ( v49 )
      v8[14] = v47;
    if ( v50 != 4 )
      __und(0);
  }
  else
  {
    v10 = (_DWORD *)*((_DWORD *)a2 + 7);
    if ( !v8[14] )
      v8[14] = a1;
  }
  v11 = v10[14];
  v12 = *(_DWORD **)(*(_DWORD *)(v11 + 4) + 444);
  v13 = (const char *)v12[7];
  if ( !v10[64] )
  {
    v52 = sub_2ADB48(v10[14], ".iplt", (const char *)((unsigned int)v13 | 0x18));
    if ( !v52 )
      return 0;
    *(_DWORD *)(v52 + 64) = (v12[116] >> 13) & 0xF;
    v10[64] = v52;
  }
  if ( !v10[65] )
  {
    v37 = ".rela.iplt";
    if ( v10[108] )
      v37 = ".rel.iplt";
    v38 = sub_2ADB48(v11, v37, (const char *)((unsigned int)v13 | 8));
    if ( !v38 )
      return 0;
    *(_DWORD *)(v38 + 64) = *(unsigned __int8 *)(v12[98] + 11);
    v10[65] = v38;
  }
  if ( !v10[63] )
  {
    v51 = sub_2ADB48(v11, ".igot.plt", v13);
    if ( !v51 )
      return 0;
    *(_DWORD *)(v51 + 64) = *(unsigned __int8 *)(v12[98] + 11);
    v10[63] = v51;
  }
  v14 = *(_DWORD **)(a1 + 160);
  v62 = v8[14];
  v15 = v14[28];
  v59 = v14;
  v60 = v14[134];
  v57 = v15 ? sub_347418(v14[24], v15) : 0;
  v58 = &a4[3 * *(_DWORD *)(a3 + 76)];
  if ( a4 >= v58 )
    return 1;
  v61 = 0;
  v55 = a3;
  while ( 2 )
  {
    v16 = a4[1];
    v17 = (unsigned __int8)v16;
    v18 = v16 >> 8;
    if ( (unsigned __int8)v16 == 38 )
    {
      if ( v8[92] )
        v17 = 3;
      else
        v17 = 2;
    }
    else if ( (unsigned __int8)v16 == 41 )
    {
      v17 = v8[93];
    }
    if ( v18 >= v57 )
    {
      if ( !(v18 | v57) )
      {
        v19 = sub_2B5768(a2, v17, 0);
        v20 = v19;
        switch ( v19 )
        {
          case 1:
          case 10:
          case 27:
          case 28:
          case 29:
          case 30:
          case 42:
          case 51:
            v28 = 0;
            goto LABEL_113;
          case 2:
          case 55:
            v28 = 0;
            i = 0;
            v30 = *a2 & 1;
            goto LABEL_70;
          case 3:
          case 45:
          case 46:
          case 49:
          case 50:
          case 56:
            i = 0;
            goto LABEL_83;
          case 6:
            v28 = 0;
            goto LABEL_62;
          case 24:
          case 25:
            goto LABEL_50;
          case 26:
          case 90:
          case 91:
          case 92:
          case 93:
          case 96:
          case 104:
          case 107:
          case 129:
            goto LABEL_26;
          case 43:
          case 44:
          case 47:
          case 48:
            v28 = *a2 & 1;
            if ( (*a2 & 1) == 0 )
              goto LABEL_90;
            goto LABEL_128;
          case 100:
            goto LABEL_103;
          case 101:
            goto LABEL_53;
          case 105:
            goto LABEL_56;
          default:
            goto LABEL_51;
        }
      }
      sub_2A6A5C("%B: bad symbol index: %d", a1, v16 >> 8);
      return 0;
    }
    v39 = v59[26];
    if ( v18 < v39 )
    {
      v28 = sub_2CFE38((int)(v8 + 118), a1, v16 >> 8);
      if ( !v28 )
        return 0;
      v19 = sub_2B5768(a2, v17, 0);
      v20 = v19;
      switch ( v19 )
      {
        case 1:
        case 10:
        case 27:
        case 28:
        case 29:
        case 30:
        case 42:
        case 51:
          goto LABEL_113;
        case 2:
        case 3:
        case 45:
        case 46:
        case 49:
        case 50:
        case 55:
        case 56:
          i = 0;
          v30 = *a2 & 1;
          goto LABEL_70;
        case 6:
LABEL_62:
          v19 = v8[105];
          if ( v19 )
          {
            i = 0;
            goto LABEL_65;
          }
          v20 = 6;
          goto LABEL_114;
        case 24:
        case 25:
          goto LABEL_50;
        case 26:
        case 90:
        case 91:
        case 92:
        case 93:
        case 96:
        case 104:
        case 107:
        case 129:
LABEL_26:
          v21 = v19 - 90;
          if ( (unsigned int)(v19 - 90) <= 0x27 )
          {
            i = 0;
LABEL_29:
            v24 = dword_41336C;
            v22 = *((char *)&dword_41336C[603] + v21);
            if ( (*a2 & 3u) > 1 && (v22 & 4) != 0 )
              *((_DWORD *)a2 + 28) |= 0x10u;
            if ( i )
            {
LABEL_33:
              v25 = *(unsigned __int8 *)(i + 92);
              ++*(_DWORD *)(i + 36);
              goto LABEL_34;
            }
          }
          else
          {
            v22 = 1;
            i = 0;
          }
          if ( !sub_2B34F8(a1) )
            return 0;
          v24 = (_DWORD *)a1;
          v53 = *(_DWORD *)(a1 + 160);
          v54 = *(_DWORD *)(v53 + 2352);
          ++*(_DWORD *)(*(_DWORD *)(v53 + 540) + 4 * v18);
          v25 = *(unsigned __int8 *)(v54 + (v16 >> 8));
LABEL_34:
          if ( (v25 & 0xA) != 0 && (v22 & 0xA) != 0 )
            v22 |= v25;
          v26 = v22 > 1;
          if ( v22 != 1 )
            v26 = v25 > 1;
          if ( v26 )
            v22 |= v25;
          if ( (v22 & 0xC) == 0xC )
            v22 &= ~8u;
          if ( v25 != v22 )
          {
            if ( i )
              *(_BYTE *)(i + 92) = v22;
            else
              v24 = (_DWORD *)a1;
            if ( !i )
              *(_BYTE *)(*(_DWORD *)(v24[40] + 2352) + (v16 >> 8)) = v22;
          }
          if ( v19 == 105 )
          {
LABEL_56:
            ++v8[117];
            if ( v8[54] )
              goto LABEL_51;
          }
          else
          {
LABEL_50:
            if ( v8[54] )
              goto LABEL_51;
          }
          v27 = *((_DWORD *)a2 + 7);
          if ( *(_DWORD *)(v27 + 44) != 4 || !*(_DWORD *)(v27 + 424) && !sub_2E02C4(v8[14], a2) )
            return 0;
          goto LABEL_51;
        case 43:
        case 44:
        case 47:
        case 48:
          if ( (*a2 & 1) != 0 )
          {
LABEL_128:
            v43 = "a local symbol";
            v44 = dword_41530C[13 * v19 + 8];
            goto LABEL_129;
          }
LABEL_90:
          v34 = v8[13];
          if ( v34 )
          {
            v34 = *(_DWORD *)(v55 + 20) & 1;
            if ( v34 )
            {
              i = 0;
              goto LABEL_93;
            }
          }
          v19 = v34;
          break;
        case 100:
          goto LABEL_103;
        case 101:
LABEL_53:
          i = 0;
          goto LABEL_54;
        case 105:
          goto LABEL_56;
        default:
          goto LABEL_51;
      }
      goto LABEL_114;
    }
    for ( i = *(_DWORD *)(v60 + 4 * (v18 - v39));
          (unsigned int)*(unsigned __int8 *)(i + 12) - 6 <= 1;
          i = *(_DWORD *)(i + 20) )
    {
      ;
    }
    v45 = sub_2B5768(a2, v17, i);
    v19 = v45;
    v20 = v45;
    switch ( v45 )
    {
      case 1:
      case 10:
      case 27:
      case 28:
      case 29:
      case 30:
      case 42:
      case 51:
        v19 = 1;
        *(_BYTE *)(i + 51) |= 0x80u;
        goto LABEL_137;
      case 2:
      case 55:
        v29 = *a2;
        v28 = 0;
        v30 = *a2 & 1;
        goto LABEL_69;
      case 3:
      case 45:
      case 46:
      case 49:
      case 50:
      case 56:
LABEL_83:
        v28 = 0;
        if ( (*a2 & 1) == 0 )
          goto LABEL_84;
        goto LABEL_71;
      case 6:
        if ( !v8[105] )
        {
          v20 = 6;
          goto LABEL_87;
        }
        v28 = 0;
LABEL_65:
        v29 = *a2;
        if ( !i )
        {
          v20 = 6;
          v19 = 6;
        }
        v30 = v29 & 1;
        if ( !i )
          goto LABEL_70;
        v19 = 6;
        v20 = 6;
LABEL_69:
        if ( (v29 & 3u) > 1 )
          goto LABEL_70;
        goto LABEL_144;
      case 24:
      case 25:
        goto LABEL_50;
      case 26:
      case 90:
      case 91:
      case 92:
      case 93:
      case 96:
      case 104:
      case 107:
      case 129:
        v21 = v45 - 90;
        if ( (unsigned int)(v45 - 90) <= 0x27 )
          goto LABEL_29;
        v22 = 1;
        goto LABEL_33;
      case 43:
      case 44:
      case 47:
      case 48:
        v30 = *a2 & 1;
        if ( (*a2 & 1) == 0 )
        {
          if ( (*a2 & 3u) <= 1 )
          {
            v28 = 0;
LABEL_144:
            *(_BYTE *)(i + 53) |= 2u;
LABEL_70:
            if ( !v30 )
            {
LABEL_84:
              if ( !v8[13] )
                goto LABEL_85;
            }
          }
          else
          {
            if ( !v8[13] )
            {
LABEL_87:
              v19 = 0;
              *(_BYTE *)(i + 52) |= 0x40u;
LABEL_137:
              v40 = (_DWORD *)(i + 40);
              v41 = (_DWORD *)(i + 76);
LABEL_117:
              if ( *v40 != -1 )
                ++*v40;
              if ( !v19 )
                ++v41[2];
              if ( v20 == 10 )
              {
                ++v41[1];
              }
              else
              {
                v42 = v20 == 51;
                if ( v20 != 51 )
                  v42 = v20 == 30;
                if ( v42 )
                  ++*v41;
              }
              goto LABEL_51;
            }
            v28 = 0;
          }
LABEL_71:
          if ( (*(_DWORD *)(v55 + 20) & 1) != 0 )
          {
            if ( i )
            {
              if ( v61 )
              {
LABEL_74:
                v31 = (_DWORD **)(i + 72);
LABEL_75:
                v32 = *v31;
                if ( *v31 && v55 == v32[1] )
                {
                  v33 = v32[2] + 1;
                }
                else
                {
                  v32 = (_DWORD *)sub_2ACBF4(v8[14], 16);
                  if ( !v32 )
                    return 0;
                  v33 = 1;
                  *v32 = *v31;
                  *v31 = v32;
                  v32[3] = 0;
                  v32[1] = v55;
                  v32[2] = 0;
                }
                if ( dword_41530C[13 * v19 + 4] )
                  ++v32[3];
                v32[2] = v33;
                goto LABEL_51;
              }
            }
            else
            {
LABEL_93:
              if ( dword_41530C[13 * v19 + 4] )
              {
LABEL_113:
                v19 = 1;
                goto LABEL_114;
              }
              if ( v61 )
                goto LABEL_99;
            }
            v35 = sub_2EEE08(v55, v62, 2, a1, v8[108] == 0);
            v61 = v35;
            if ( !v35 )
              return 0;
            if ( v8[106] )
              sub_2ADCD8(v62, v35, *(_DWORD *)(v35 + 20) & 0xFFFFFFFC);
            if ( i )
              goto LABEL_74;
LABEL_99:
            if ( (*(_BYTE *)(v28 + 12) & 0xF) == 0xA )
            {
              v46 = (char *)sub_2B3564(a1, v16 >> 8);
              if ( !v46 )
                return 0;
              v31 = (_DWORD **)(v46 + 20);
            }
            else
            {
              v36 = sub_2CFEF4(a1, *(_DWORD *)(v28 + 16), v20);
              if ( !v36 )
                sub_2A6BF0((int)"elf32-arm.c", 3435, (int)"elf32_arm_get_local_dynreloc_list");
              v31 = (_DWORD **)(*(_DWORD *)(v36 + 140) + 108);
              if ( *(_DWORD *)(v36 + 140) == -108 )
                return 0;
            }
            goto LABEL_75;
          }
LABEL_85:
          if ( i )
            goto LABEL_87;
          v19 = 0;
LABEL_114:
          if ( (*(_BYTE *)(v28 + 12) & 0xF) == 0xA )
          {
            v63 = v20;
            v40 = sub_2B3564(a1, v16 >> 8);
            if ( !v40 )
              return 0;
            v20 = v63;
            v41 = v40 + 1;
            goto LABEL_117;
          }
LABEL_51:
          a4 += 3;
          if ( v58 <= a4 )
            return 1;
          continue;
        }
        v43 = *(const char **)(i + 4);
        v44 = dword_41530C[13 * v45 + 8];
LABEL_129:
        sub_2A6A5C(
          "%B: relocation %s against `%s' can not be used when making a shared object; recompile with -fPIC",
          a1,
          v44,
          v43);
        ((void (__fastcall *)(int))loc_2A6C48)(17);
        return 0;
      case 100:
        if ( i )
        {
          if ( !sub_2EE1B4(a1, v55, i, *a4) )
            return 0;
        }
        else
        {
LABEL_103:
          sub_2A6BBC("elf32-arm.c", 14579);
        }
        goto LABEL_51;
      case 101:
LABEL_54:
        if ( !sub_2EE0B4(a1, v55, i, *a4) )
          return 0;
        goto LABEL_51;
      case 105:
        goto LABEL_56;
      default:
        goto LABEL_51;
    }
  }
}
