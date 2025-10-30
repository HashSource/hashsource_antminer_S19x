int __fastcall sub_200B4(_DWORD *a1, unsigned int a2, size_t n)
{
  int v6; // r5
  unsigned int v7; // r6
  __int64 v8; // r0
  int v9; // r0
  const char *v10; // r0
  int v12; // r8
  unsigned int v13; // r7
  int v14; // r9
  int v15; // r3
  int v16; // r12
  bool v17; // zf
  int v18; // r3
  unsigned int v19; // r2
  unsigned int v21; // r3
  int v22; // r0
  int v23; // r0
  void *v24; // r0
  int v25; // r2
  int v26; // r9
  unsigned int v27; // r8
  int v28; // r1
  int v29; // r3
  void *v30; // r0
  int v31; // r2
  int v32; // r3
  int v33; // r0
  void *v34; // r0
  int v35; // r2
  unsigned int v36; // r11
  int v37; // r10
  unsigned int v38; // r3
  bool v39; // zf
  int v40; // r2
  bool v41; // zf
  int v43; // r9
  int v44; // r0
  void *v45; // r0
  int v46; // r2
  _BOOL4 v47; // r3
  int v48; // r6
  int v49; // r3
  int v50; // r2
  int v51; // r3
  int v52; // r1
  int v53; // r7
  bool v54; // zf
  void *v55; // r0
  int v56; // r2
  int v57; // r1
  bool v58; // zf
  int v59; // r2
  int v60; // r3
  int v61; // lr
  int v62; // r12
  bool v63; // zf
  int v64; // r1
  int v65; // r3
  int v66; // [sp+8h] [bp-5Ch]
  unsigned int v67; // [sp+Ch] [bp-58h]
  _DWORD v68[2]; // [sp+10h] [bp-54h] BYREF
  int v69; // [sp+18h] [bp-4Ch] BYREF
  int v70; // [sp+20h] [bp-44h] BYREF
  int v71; // [sp+24h] [bp-40h]
  int v72; // [sp+28h] [bp-3Ch]
  int src; // [sp+40h] [bp-24h] BYREF
  int v74; // [sp+44h] [bp-20h]
  int v75; // [sp+48h] [bp-1Ch]
  int v76; // [sp+4Ch] [bp-18h]

  v6 = sub_20044(a1, n);
  if ( v6 )
  {
    if ( dword_487D4C )
    {
      v10 = (const char *)sub_25AC8C(*a1, a1[2]);
      sub_259858("Process record: error reading memory at addr %s len = %d.\n", v10, n);
      return -1;
    }
    return -1;
  }
  v7 = a1[3];
  if ( a2 == 1 )
  {
    HIDWORD(v8) = (v7 >> 25) & 7;
    a1[4] = v7 >> 28;
    if ( v7 >> 28 != 15 )
    {
      v9 = ((int (__fastcall *)(_DWORD *))(&off_349348)[HIDWORD(v8) + 371])(a1);
      goto LABEL_12;
    }
    v15 = a1[8];
    LODWORD(v8) = a1[1];
    v68[0] = 0;
    v68[1] = 0;
    if ( v15 || (a2 = a1[7]) != 0 )
    {
LABEL_186:
      v8 = sub_94700(
             "arm-tdep.c",
             9974,
             "%s: Assertion `%s' failed.",
             "int arm_record_extension_space(insn_decode_record*)",
             "!INSN_RECORDED(arm_insn_r)");
    }
    else
    {
      v16 = (unsigned __int8)v7 >> 4;
      v17 = v16 == 9;
      if ( v16 == 9 )
        v17 = (v7 & 0xF000000) == 0;
      v18 = v17;
      if ( HIDWORD(v8) == 5 )
      {
        v19 = v7 >> 23;
        v47 = ((v7 >> 23) & 3) == 2 && (v7 & 0xC000000) == 0;
        v70 = 25;
        v71 = 14;
        a1[8] = 2;
        if ( !v47 )
        {
          if ( ((v7 >> 23) & 0x1F) != 0x18 )
            goto LABEL_59;
          goto LABEL_112;
        }
      }
      else
      {
        if ( HIDWORD(v8) == 3 )
          a2 = (int)(v7 >> 4 << 31) >> 31;
        if ( v18 )
        {
          if ( ((v7 >> 20) & 0xF) > 3 )
          {
            v71 = (unsigned __int16)v7 >> 12;
            v70 = HIWORD(v7) & 0xF;
            v72 = 25;
            a1[8] = 3;
          }
          else
          {
            v70 = (unsigned __int16)v7 >> 12;
            v71 = 25;
            a1[8] = 2;
          }
        }
        v19 = v7 >> 23;
        if ( ((v7 >> 23) & 3) != 2 || (v7 & 0xC000000) != 0 )
          goto LABEL_55;
      }
      if ( (v7 & 0x100000) != 0 || a1[8] )
        goto LABEL_55;
      v21 = (v7 >> 21) & 3;
      if ( (v7 & 0x2000000) != 0 )
      {
LABEL_151:
        if ( v21 != 1 )
        {
          if ( v21 == 3 )
            goto LABEL_13;
          goto LABEL_55;
        }
LABEL_183:
        v70 = 25;
        a1[8] = 1;
        goto LABEL_55;
      }
      if ( !((unsigned __int8)v7 >> 4) )
      {
        if ( ((v7 >> 21) & 1) == 0 )
        {
          v70 = (unsigned __int16)v7 >> 12;
          a1[8] = 1;
          goto LABEL_55;
        }
        goto LABEL_151;
      }
      switch ( v16 )
      {
        case 1:
          if ( v21 != 1 )
          {
            if ( v21 == 3 )
            {
              a1[8] = 1;
              v70 = (unsigned __int16)v7 >> 12;
            }
            goto LABEL_55;
          }
          goto LABEL_183;
        case 3:
          v70 = 25;
          v71 = 14;
          a1[8] = 2;
          goto LABEL_55;
        case 5:
          v70 = 25;
          v71 = (unsigned __int16)v7 >> 12;
          a1[8] = 2;
          goto LABEL_55;
        case 7:
          a1[8] = 2;
          goto LABEL_13;
      }
      v61 = (v7 >> 4) & 9;
      if ( v61 != 8 )
      {
LABEL_55:
        if ( !HIDWORD(v8) && (v7 & 0x90) == 0x90 && !a1[8] )
        {
          v51 = (v7 >> 5) & 3;
          if ( v51 )
          {
            v52 = v7 & 0x100000;
            if ( v51 == 1 )
            {
              if ( !v52 )
              {
LABEL_177:
                sub_1CDAC((int)a1, &v70, (int)&src, v51);
                v7 = a1[3];
                v19 = v7 >> 23;
                goto LABEL_57;
              }
            }
            else
            {
              if ( v51 == 2 )
              {
                if ( !v52 )
                {
                  a1[8] = 2;
                  v70 = (unsigned __int16)v7 >> 12;
                  v71 = v70 + 1;
                  goto LABEL_57;
                }
                goto LABEL_174;
              }
              if ( !v52 )
              {
                v51 = 2;
                goto LABEL_177;
              }
            }
LABEL_174:
            v70 = (unsigned __int16)v7 >> 12;
            a1[8] = 1;
            goto LABEL_57;
          }
          ((void (__fastcall *)(_DWORD, unsigned int, _DWORD *))loc_1DF9FC)(v8, HIWORD(v7) & 0xF, v68);
          v7 = a1[3];
          v64 = v68[0];
          if ( a1[5] == 8 )
            v65 = 4;
          else
            v65 = 1;
          src = v65;
          v70 = (unsigned __int16)v7 >> 12;
          a1[7] = 1;
          v19 = v7 >> 23;
          a1[8] = 1;
          v74 = v64;
        }
LABEL_57:
        if ( (v19 & 0x1F) != 0x18 )
        {
LABEL_58:
          if ( a2 == -1 )
            goto LABEL_13;
LABEL_59:
          v22 = a1[8];
          if ( !v22 )
            goto LABEL_60;
          goto LABEL_120;
        }
LABEL_112:
        if ( (v7 & 0x200000) != 0 )
        {
          v22 = a1[8];
          if ( !v22 )
          {
            v23 = a1[7];
            if ( !v23 || a2 == -1 )
              goto LABEL_13;
            goto LABEL_61;
          }
          if ( a2 == -1 )
            goto LABEL_13;
LABEL_120:
          v44 = 4 * v22;
          goto LABEL_99;
        }
        goto LABEL_58;
      }
      v62 = (unsigned __int16)v7 >> 12;
      if ( v21 > 1 )
      {
        v63 = v21 == 2;
        if ( v21 == 2 )
          v61 = HIWORD(v7) & 0xF;
        else
          v21 = 1;
        v70 = (unsigned __int16)v7 >> 12;
        a1[8] = v21;
        if ( v63 )
          v71 = v61;
        goto LABEL_55;
      }
    }
    v70 = v62;
    v71 = 25;
    a1[8] = 2;
    goto LABEL_55;
  }
  if ( a2 != 2 )
  {
    v7 = __ROR4__(v7, 16);
    a1[4] = -1;
    v12 = (v7 >> 27) & 3;
    a1[3] = v7;
    v13 = v7 >> 20;
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
      {
        if ( v12 != 3 )
          goto LABEL_13;
        if ( (v13 & 0x71) != 0 )
        {
          if ( ((v7 >> 20) & 0x71) == 0x10 )
          {
            v9 = sub_1D210(a1);
            goto LABEL_12;
          }
          if ( ((v7 >> 20) & 0x65) == 1 )
          {
            v9 = sub_1AD8C(a1);
            goto LABEL_12;
          }
          if ( ((v7 >> 20) & 0x67) != 5 )
          {
            if ( ((v7 >> 20) & 0x70) != 0x20 && ((v7 >> 20) & 0x78) != 0x30 )
            {
              if ( ((v7 >> 20) & 0x78) == 0x38 )
              {
                if ( (v13 & 5) == 0 )
                  goto LABEL_140;
                v53 = (v7 >> 20) & 7;
                if ( (unsigned int)(v53 - 4) <= 2 )
                  goto LABEL_140;
                v54 = v53 == 1;
                if ( v53 != 1 )
                  v54 = (unsigned __int8)v7 >> 4 == 3;
                if ( v54 )
                {
LABEL_140:
                  a1[8] = 3;
                  src = HIWORD(v7) & 0xF;
                  v75 = 25;
                  v74 = (unsigned __int16)v7 >> 12;
                  v55 = (void *)sub_93028(12);
                  v56 = a1[8];
                  a1[9] = v55;
                  memcpy(v55, &src, 4 * v56);
                  v9 = 0;
                }
                else
                {
                  v9 = 1;
                }
                goto LABEL_12;
              }
LABEL_24:
              if ( (v13 & 0x40) == 0 )
                goto LABEL_13;
              v9 = sub_1DEB4(a1);
LABEL_12:
              if ( v9 )
                goto LABEL_13;
              return v6;
            }
LABEL_28:
            v9 = sub_1ADF0(a1);
            goto LABEL_12;
          }
          a1[8] = 2;
          v33 = 8;
          src = (unsigned __int16)v7 >> 12;
          v74 = 25;
LABEL_74:
          v34 = (void *)sub_93028(v33);
          v35 = a1[8];
          a1[9] = v34;
          memcpy(v34, &src, 4 * v35);
          return v6;
        }
        v26 = a1[1];
        a2 = HIWORD(v7) & 0xF;
        v27 = (v7 >> 21) & 7;
        ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v26, a2, v68);
        v28 = a1[3];
        if ( (v28 & 0x800000) != 0 )
        {
          v29 = (a1[3] & 0xFFF) + v68[0];
        }
        else if ( v27 > 2 || (v7 & 0x800) != 0 )
        {
          v29 = v68[0];
          if ( (v28 & 0x400) != 0 )
          {
            if ( (v28 & 0x200) != 0 )
              v29 = v68[0] + (unsigned __int8)v28;
            else
              v29 = v68[0] - (unsigned __int8)v28;
          }
        }
        else
        {
          ((void (__fastcall *)(int, int, int *))loc_1DF9FC)(v26, a1[3] & 0xF, &v69);
          v29 = v68[0] + (v69 << ((a1[3] >> 4) & 3));
        }
        switch ( v27 )
        {
          case 0u:
          case 4u:
            src = 1;
            break;
          case 1u:
          case 5u:
            src = 2;
            break;
          case 2u:
          case 6u:
            src = 4;
            break;
          default:
            sub_94700(
              "arm-tdep.c",
              12501,
              "%s: %s",
              "int thumb2_record_str_single_data(insn_decode_record*)",
              "no decoding pattern found");
            goto LABEL_186;
        }
        a1[7] = 1;
        a1[8] = 1;
        v70 = HIWORD(v7) & 0xF;
        v74 = v29;
        v30 = (void *)sub_93028(4);
        v31 = a1[8];
        a1[9] = v30;
        memcpy(v30, &v70, 4 * v31);
        goto LABEL_60;
      }
      if ( (v7 & 0x8000) != 0 )
      {
        if ( ((((v7 >> 20) & 0x7F) == 56) & ((v7 ^ 0x2000) >> 13)) != 0 )
        {
          if ( (v7 & 0x300) != 0 )
          {
            sub_1AB90(a1);
            goto LABEL_13;
          }
          src = 25;
          v33 = 4;
          a1[8] = 1;
        }
        else if ( ((v7 >> 12) & 5) - 4 <= 1 )
        {
          a1[8] = 2;
          v33 = 8;
          src = 25;
          v74 = 14;
        }
        else
        {
          v32 = a1[8];
          if ( !v32 )
            return v6;
          v33 = 4 * v32;
        }
        goto LABEL_74;
      }
      if ( (v13 & 0x20) != 0 )
        goto LABEL_28;
LABEL_32:
      v9 = sub_1AD00(a1);
      goto LABEL_12;
    }
    v14 = (v7 >> 20) & 0x64;
    if ( (v13 & 0x64) == 0 )
    {
      v9 = sub_1D014(a1);
      goto LABEL_12;
    }
    if ( v14 != 4 )
    {
      if ( ((v7 >> 20) & 0x60) != 0x20 )
        goto LABEL_24;
      goto LABEL_32;
    }
    v36 = v7 >> 23;
    v37 = (v7 >> 20) & 3;
    v38 = (unsigned __int8)v7 >> 4;
    v66 = (v7 >> 23) & 3;
    if ( (v7 & 0x100000) != 0 )
    {
      v39 = v37 == 1;
      if ( v37 == 1 )
        v39 = ((v7 >> 23) & 3) == 1;
      v40 = !v39;
      if ( v38 > 1 )
        v40 |= 1u;
      if ( v40 )
      {
        v70 = (unsigned __int16)v7 >> 12;
        v71 = 25;
        a1[8] = 2;
        if ( v37 == 3 )
          goto LABEL_117;
      }
      if ( (v36 & 2) != 0 )
        goto LABEL_117;
      v41 = v66 == 1;
      if ( v66 == 1 )
        v41 = v37 == 1;
      LOBYTE(v37) = v41;
      if ( v38 == 7 ? v37 : 0 )
      {
LABEL_117:
        v72 = (v7 >> 8) & 0xF;
        v14 = 12;
        a1[8] = 3;
      }
      else
      {
        v43 = a1[8];
        if ( !v43 )
          goto LABEL_60;
        v14 = 4 * v43;
      }
    }
    else
    {
      v48 = HIWORD(v7) & 0xF;
      v67 = v38;
      ((void (__fastcall *)(_DWORD, int, _DWORD *))loc_1DF9FC)(a1[1], v48, v68);
      if ( (((unsigned __int8)v13 | (unsigned __int8)v36) & 3) != 0 )
      {
        v57 = v68[0];
        v58 = v66 == 1;
        if ( v66 == 1 )
          v58 = v37 == 0;
        v59 = a1[3];
        if ( v58 )
        {
          v70 = a1[3] & 0xF;
          a1[8] = 1;
          v74 = v57;
          switch ( v67 )
          {
            case 4u:
              v14 = 4;
              src = 1;
              a1[7] = 1;
              break;
            case 5u:
              src = 2;
              a1[7] = 1;
              break;
            case 7u:
              v76 = v57 + 4;
              src = 4;
              v75 = 4;
              a1[7] = 2;
              break;
          }
        }
        else
        {
          if ( (v59 & 0x1000000) != 0 )
          {
            v60 = 4 * (unsigned __int8)v59;
            if ( (v59 & 0x800000) != 0 )
              v57 = v68[0] + v60;
            else
              v57 = v68[0] - v60;
          }
          v74 = v57;
          v76 = v57 + 4;
          v70 = v48;
          src = 4;
          v75 = 4;
          a1[7] = 2;
          a1[8] = 1;
        }
      }
      else
      {
        v49 = a1[3];
        v50 = v68[0];
        src = 4;
        a1[7] = 1;
        a1[8] = 1;
        v70 = v49 & 0xF;
        v74 = v50 + 4 * (unsigned __int8)v49;
      }
    }
    v44 = v14;
LABEL_99:
    v45 = (void *)sub_93028(v44);
    v46 = a1[8];
    a1[9] = v45;
    memcpy(v45, &v70, 4 * v46);
LABEL_60:
    v23 = a1[7];
    if ( !v23 )
      return v6;
LABEL_61:
    v24 = (void *)sub_93028(8 * v23);
    v25 = a1[7];
    a1[10] = v24;
    memcpy(v24, &src, 8 * v25);
    return v6;
  }
  a1[4] = -1;
  if ( !((int (__fastcall *)(_DWORD *))(&off_349348)[((unsigned __int16)v7 >> 13) + 379])(a1) )
    return 0;
LABEL_13:
  sub_1AB90(a1);
  return -1;
}
