int __fastcall sub_379E0(int a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r10
  int v8; // r6
  _BOOL4 v10; // r3
  int v11; // r0
  int v12; // r0
  unsigned __int64 v13; // r2
  unsigned __int64 v14; // kr10_8
  bool v15; // cc
  unsigned __int64 v16; // r4
  int v17; // r0
  int v18; // r0
  const char *v19; // r0
  _DWORD *v20; // r8
  int v21; // r0
  int v22; // r1
  unsigned __int64 v23; // r4
  int v24; // r0
  bool v25; // cc
  int v26; // r2
  int v27; // r5
  int v28; // r0
  __int64 v29; // r0
  int v30; // r3
  __int64 v31; // r0
  int v32; // r2
  int v33; // r0
  int v34; // r3
  int v35; // r2
  int v36; // r0
  int v37; // r0
  int v38; // r3
  int v39; // r0
  int v40; // r0
  int v41; // r2
  unsigned __int64 v42; // r4
  int v43; // r0
  int v44; // r2
  int v45; // r0
  int *v46; // r0
  unsigned __int64 v47; // r4
  int v48; // r8
  int v49; // r0
  int v50; // r0
  const char *v51; // r0
  int v52; // r2
  int v53; // r0
  int *v54; // r0
  unsigned __int64 v55; // r4
  int v56; // r8
  int v57; // r0
  int v58; // r0
  const char *v59; // r0
  const char *v60; // r0
  int v61; // r2
  int v62; // r8
  int v63; // r0
  int v64; // r7
  int *v65; // r0
  __int64 v66; // r4
  int v67; // r6
  int v68; // r0
  int v69; // r0
  const char *v70; // r0
  unsigned __int64 v71; // r4
  int v72; // r0
  int v73; // r0
  const char *v74; // r0
  char *v75; // r4
  int v76; // r6
  char *v77; // r4
  int v78; // r5
  char *v79; // r4
  int v80; // r7
  int v81; // r4
  int v82; // r0
  int v83; // r0
  const char *v84; // r0
  int v85; // r8
  int v86; // r0
  int v87; // r0
  const char *v88; // r0
  int v89; // r0
  __int64 v90; // r0
  int v91; // r3
  __int64 v92; // r0
  __int64 v93; // r0
  int v94; // r0
  int v95; // r4
  const char *v96; // r0
  int *v97; // r0
  unsigned __int64 v98; // r4
  int v99; // r6
  int v100; // r0
  int v101; // r0
  const char *v102; // r0
  int *v103; // r0
  unsigned __int64 v104; // r4
  int v105; // r6
  int v106; // r0
  int v107; // r0
  const char *v108; // r0
  int v109; // r0
  int v110; // r4
  int v111; // r0
  int v112; // r0
  _DWORD v113[2]; // [sp+8h] [bp-5Ch] BYREF
  unsigned __int64 v114; // [sp+10h] [bp-54h]
  __int64 v115; // [sp+18h] [bp-4Ch]
  unsigned __int64 v116; // [sp+20h] [bp-44h]
  unsigned __int64 v117; // [sp+28h] [bp-3Ch] BYREF
  __int64 v118; // [sp+30h] [bp-34h] BYREF
  unsigned __int64 v119; // [sp+38h] [bp-2Ch] BYREF

  v6 = sub_1DD58C(a2);
  v7 = ((int (__fastcall *)(int))loc_165BB8)(v6);
  switch ( a1 )
  {
    case 0:
    case 2:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 14:
    case 15:
    case 16:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 27:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 56:
    case 57:
    case 58:
    case 60:
    case 61:
    case 63:
    case 64:
    case 65:
    case 66:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 74:
    case 75:
    case 79:
    case 81:
    case 83:
    case 86:
    case 87:
    case 90:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 101:
    case 103:
    case 110:
    case 111:
    case 112:
    case 113:
    case 115:
    case 118:
    case 119:
    case 120:
    case 121:
    case 125:
    case 127:
    case 128:
    case 129:
    case 130:
    case 132:
    case 133:
    case 134:
    case 136:
    case 137:
    case 138:
    case 139:
    case 143:
    case 144:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
    case 163:
    case 164:
    case 166:
    case 167:
    case 170:
    case 173:
    case 178:
    case 179:
    case 181:
    case 182:
    case 185:
    case 188:
    case 189:
    case 190:
    case 192:
    case 193:
    case 194:
    case 198:
    case 199:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 206:
    case 207:
    case 208:
    case 210:
    case 212:
    case 213:
    case 214:
    case 215:
    case 216:
    case 217:
    case 219:
    case 222:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 235:
    case 236:
    case 237:
    case 238:
    case 240:
    case 241:
    case 246:
    case 250:
    case 251:
    case 254:
    case 255:
    case 257:
    case 258:
    case 262:
    case 263:
    case 264:
    case 270:
    case 271:
    case 272:
    case 273:
    case 274:
    case 276:
    case 277:
    case 278:
    case 279:
    case 281:
    case 283:
    case 285:
    case 286:
    case 287:
    case 289:
    case 290:
    case 291:
    case 292:
    case 293:
    case 294:
    case 295:
    case 296:
    case 297:
    case 298:
    case 299:
    case 301:
    case 302:
    case 303:
    case 304:
    case 306:
    case 307:
    case 310:
    case 311:
    case 314:
    case 315:
    case 316:
    case 324:
    case 328:
    case 329:
    case 330:
    case 332:
    case 500:
    case 501:
    case 503:
    case 505:
    case 507:
    case 508:
    case 509:
    case 513:
    case 520:
    case 523:
    case 524:
    case 527:
    case 528:
    case 529:
    case 532:
      return 0;
    case 1:
      return sub_25A3B0("The next instruction is syscall exit.  It will make the program exit.  Do you want to stop the program?") != 0;
    case 3:
    case 85:
    case 141:
    case 220:
    case 515:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v117);
      return -(sub_37614(a2, a3[137], v117) != 0);
    case 7:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      return -(sub_1DC3D4(v117, a3[20]) != 0);
    case 13:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( !v117 )
        return 0;
      return -(sub_1DC3D4(v117, a3[66]) != 0);
    case 18:
    case 28:
    case 84:
      return -(sub_37614(a2, a3[137], a3[1]) != 0);
    case 26:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      v116 = v117 - 1;
      if ( v117 - 1 <= 2 )
        return -(sub_37614(a2, a3[139], 4) != 0);
      return 0;
    case 42:
    case 331:
      return -(sub_37614(a2, a3[136], 2 * a3[20]) != 0);
    case 43:
      return -(sub_37614(a2, a3[136], a3[2]) != 0);
    case 54:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      v16 = v117;
      if ( a3[116] == v117
        || v117 == a3[115]
        || v117 == a3[100]
        || v117 == a3[117]
        || v117 == a3[68]
        || v117 == a3[69]
        || v117 == a3[70]
        || v117 == a3[72]
        || v117 == a3[73]
        || v117 == a3[74]
        || v117 == a3[75]
        || v117 == a3[76]
        || v117 == a3[77]
        || v117 == a3[78]
        || v117 == a3[79]
        || v117 == a3[80]
        || v117 == a3[82]
        || v117 == a3[84]
        || v117 == a3[86]
        || v117 == a3[88]
        || v117 == a3[89]
        || v117 == a3[90]
        || v117 == a3[92]
        || v117 == a3[96]
        || v117 == a3[98]
        || v117 == a3[99]
        || v117 == a3[101]
        || v117 == a3[102]
        || v117 == a3[104]
        || v117 == a3[105]
        || v117 == a3[106]
        || v117 == a3[107]
        || v117 == a3[110]
        || v117 == a3[111]
        || v117 == a3[112]
        || v117 == a3[114]
        || v117 == a3[118]
        || v117 == a3[119]
        || v117 == a3[120]
        || v117 == a3[122]
        || v117 == a3[125]
        || v117 == a3[126]
        || v117 == a3[127]
        || v117 == a3[130] )
      {
        return 0;
      }
      if ( v117 == a3[67] || v117 == a3[71] || v117 == a3[121] )
        return -(sub_37614(a2, a3[138], a3[57]) != 0);
      if ( v117 == a3[81] || v117 == a3[108] )
        return -(sub_37614(a2, a3[138], a3[59]) != 0);
      if ( v117 == a3[83]
        || v117 == a3[87]
        || v117 == a3[91]
        || v117 == a3[93]
        || v117 == a3[94]
        || v117 == a3[103]
        || v117 == a3[113]
        || v117 == a3[124] )
      {
        return -(sub_37614(a2, a3[138], a3[20]) != 0);
      }
      if ( v117 == a3[85] )
        return -(sub_37614(a2, a3[138], a3[60]) != 0);
      if ( v117 == a3[95] )
        return -(sub_37614(a2, a3[138], 1) != 0);
      if ( v117 == a3[97] )
        return -(sub_37614(a2, a3[138], a3[61]) != 0);
      if ( v117 == a3[109] )
        return -(sub_37614(a2, a3[138], a3[58]) != 0);
      if ( v117 == a3[131] )
        return -(sub_37614(a2, a3[138], a3[3]) != 0);
      if ( v117 == a3[128] )
        return -(sub_37614(a2, a3[138], a3[62]) != 0);
      if ( v117 == a3[129] )
        return -(sub_37614(a2, a3[138], a3[63]) != 0);
      v8 = 1;
      if ( v117 == a3[123] )
      {
        sub_259858("Process record and replay target doesn't support ioctl request TIOCSERGSTRUCT\n");
      }
      else
      {
        v17 = sub_1DD58C(a2);
        v18 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v17, a3[137]);
        v19 = (const char *)sub_989F0(v16, HIDWORD(v16), *(_DWORD *)(v18 + 20));
        sub_259858("Process record and replay target doesn't support ioctl request 0x%s.\n", v19);
      }
      return v8;
    case 55:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      v13 = v117;
      goto LABEL_70;
    case 59:
      return -(sub_37614(a2, a3[136], a3[5]) != 0);
    case 62:
      return -(sub_37614(a2, a3[137], a3[6]) != 0);
    case 67:
      return -(sub_37614(a2, a3[138], a3[7]) != 0);
    case 73:
      return -(sub_37614(a2, a3[136], a3[8]) != 0);
    case 76:
    case 191:
      return -(sub_37614(a2, a3[137], a3[9]) != 0);
    case 77:
      return -(sub_37614(a2, a3[137], a3[10]) != 0);
    case 78:
      if ( sub_37614(a2, a3[136], a3[11]) )
        return -1;
      return -(sub_37614(a2, a3[137], a3[12]) != 0);
    case 80:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[136],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, a3[13] * v119);
      if ( v8 )
        return -1;
      return v8;
    case 82:
      v27 = a3[21] + 4 * *a3;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( !v117 )
        return 0;
      v28 = sub_230020(v117, v113, v27);
      if ( v28 )
      {
        if ( !dword_487D4C )
          return -1;
        v8 = -1;
        v85 = *(_DWORD *)sub_242FC8(v28);
        v116 = v117;
        v86 = sub_1DD58C(a2);
        v87 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v86, a3[136]);
        v88 = (const char *)sub_989F0(v116, HIDWORD(v116), *(_DWORD *)(v87 + 20));
        sub_2594B0(v85, "Process record: error reading memory at addr = 0x%s len = %lu.\n", v88, v27);
      }
      else
      {
        v75 = (char *)v113 + a3[21];
        v76 = sub_15C250(v75, *a3, v7);
        v77 = &v75[*a3];
        v78 = sub_15C250(v77, *a3, v7);
        v79 = &v77[*a3];
        v80 = sub_15C250(v79, *a3, v7);
        v81 = sub_15C250(&v79[*a3], *a3, v7);
        if ( v76 && sub_1DC3D4(v76, a3[15]) || v78 && sub_1DC3D4(v78, a3[15]) || v80 && sub_1DC3D4(v80, a3[15]) )
          return -1;
        if ( !v81 )
          return 0;
        return -(sub_1DC3D4(v81, a3[11]) != 0);
      }
      return v8;
    case 88:
      return sub_25A3B0(
               "The next instruction is syscall reboot.  It will restart the computer.  Do you want to stop the program?") != 0;
    case 89:
      return -(sub_37614(a2, a3[137], a3[16]) != 0);
    case 91:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v119);
      v8 = 0;
      if ( dword_4886C4 )
      {
        v71 = v117;
        v72 = sub_1DD58C(a2);
        v73 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v72, a3[136]);
        v74 = (const char *)sub_989F0(v71, HIDWORD(v71), *(_DWORD *)(v73 + 20));
        if ( sub_25A3B0(
               "The next instruction is syscall munmap.\n"
               "It will free the memory addr = 0x%s len = %u.\n"
               "It will make record target cannot record some memory change.\n"
               "Do you want to stop the program?",
               v74,
               (_DWORD)v119) )
        {
          return 1;
        }
      }
      return v8;
    case 99:
    case 100:
      return -(sub_37614(a2, a3[137], a3[17]) != 0);
    case 102:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      v14 = v117;
      LODWORD(v115) = v117 - 1;
      HIDWORD(v115) = v117 - 1;
      v15 = (_DWORD)v117 != 1;
      if ( (_DWORD)v117 == 1 )
        v15 = (unsigned int)v115 > 0x10;
      if ( v15 )
      {
LABEL_357:
        v8 = -1;
        v82 = sub_1DD58C(a2);
        v83 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v82, a3[136]);
        v84 = (const char *)sub_989F0(v14, HIDWORD(v14), *(_DWORD *)(v83 + 20));
        sub_259858("Process record and replay target doesn't support socketcall call 0x%s\n", v84);
      }
      else
      {
        switch ( (int)v115 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 8:
          case 10:
          case 12:
          case 13:
          case 15:
            return 0;
          case 4:
          case 5:
          case 6:
            ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
            if ( !v117 )
              return 0;
            v44 = a3[22];
            v45 = v117 + v44;
            v117 += v44;
            v37 = sub_230020(v45, v113, 2 * v44);
            if ( !v37 )
            {
              v90 = sub_15C250(v113, a3[22], v7);
              v91 = a3[22];
              v117 = v90;
              v92 = sub_15C250((char *)v113 + v91, v91, v7);
              return -(sub_3763C(a2, a3, v117, v92, SHIDWORD(v92)) != 0);
            }
            if ( !dword_487D4C )
              return -1;
            goto LABEL_327;
          case 7:
            ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
            if ( !v117 )
              return 0;
            v52 = a3[22];
            v53 = v117 + 3 * v52;
            v117 += 3 * v52;
            v33 = sub_230020(v53, v113, v52);
            if ( !v33 )
            {
              v109 = sub_15C250(v113, a3[22], v7);
              return -(sub_1DC3D4(v109, a3[20]) != 0);
            }
            if ( !dword_487D4C )
              return -1;
            goto LABEL_331;
          case 9:
            goto LABEL_308;
          case 11:
            ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
            if ( !v117 )
              goto LABEL_308;
            v38 = a3[22];
            v39 = v117 + 4 * v38;
            v117 += 4 * v38;
            v37 = sub_230020(v39, v113, 2 * v38);
            if ( v37 )
            {
              if ( !dword_487D4C )
                return -1;
              goto LABEL_327;
            }
            v29 = sub_15C250(v113, a3[22], v7);
            v30 = a3[22];
            v117 = v29;
            v31 = sub_15C250((char *)v113 + v30, v30, v7);
            if ( sub_3763C(a2, a3, v117, v31, SHIDWORD(v31)) )
              return -1;
LABEL_308:
            ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
            if ( !v117 )
              return 0;
            v32 = a3[22];
            v117 += v32;
            v33 = sub_230020(v117, v113, v32);
            if ( v33 )
            {
              if ( !dword_487D4C )
                return -1;
              goto LABEL_331;
            }
            v117 = sub_15C250(v113, a3[22], v7);
            if ( !v117 )
              return 0;
            v89 = sub_15C250((char *)v113 + a3[22], a3[22], v7);
            return -(sub_1DC3D4(v117, v89) != 0);
          case 14:
            ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
            if ( !v117 )
              return 0;
            v34 = a3[22];
            v35 = 2 * v34;
            v34 *= 3;
            v36 = v117 + v34;
            v117 += v34;
            v37 = sub_230020(v36, v113, v35);
            if ( v37 )
            {
              if ( !dword_487D4C )
                return -1;
LABEL_327:
              v46 = (int *)sub_242FC8(v37);
              v47 = v117;
              v8 = -1;
              v48 = *v46;
              v49 = sub_1DD58C(a2);
              v50 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v49, a3[137]);
              v51 = (const char *)sub_989F0(v47, HIDWORD(v47), *(_DWORD *)(v50 + 20));
              sub_2594B0(v48, "Process record: error reading memory at addr = 0x%s len = %d.\n", v51, 2 * a3[22]);
            }
            else
            {
              v93 = sub_15C250((char *)v113 + a3[22], a3[22], v7);
              v117 = v93;
              if ( !v93 )
                return 0;
              v94 = sub_230020(v93, v113, a3[20]);
              if ( v94 )
              {
                if ( !dword_487D4C )
                  return -1;
                v95 = *(_DWORD *)sub_242FC8(v94);
                v8 = -1;
                v96 = (const char *)sub_989F0(v117, HIDWORD(v117), a3[22]);
                sub_2594B0(v95, "Process record: error reading memory at addr = 0x%s len = %d.\n", v96, a3[20]);
              }
              else
              {
                v110 = sub_15C250(v113, a3[22], v7);
                v111 = sub_15C250(v113, a3[20], v7);
                if ( sub_1DC3D4(v110, v111) )
                  return -1;
                v112 = sub_15C250((char *)v113 + a3[22], a3[22], v7);
                return -(sub_1DC3D4(v112, a3[20]) != 0);
              }
            }
            return v8;
          case 16:
            ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
            if ( !v117 )
              return 0;
            v40 = a3[22];
            v41 = v40;
            v42 = v117 + v40;
            v43 = v117 + v40;
            v117 = v42;
            v33 = sub_230020(v43, v113, v41);
            if ( v33 )
            {
              if ( !dword_487D4C )
                return -1;
LABEL_331:
              v54 = (int *)sub_242FC8(v33);
              v55 = v117;
              v8 = -1;
              v56 = *v54;
              v57 = sub_1DD58C(a2);
              v58 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v57, a3[137]);
              v59 = (const char *)sub_989F0(v55, HIDWORD(v55), *(_DWORD *)(v58 + 20));
              sub_2594B0(v56, "Process record: error reading memory at addr = 0x%s len = %d.\n", v59, a3[22]);
            }
            else
            {
              v117 = sub_15C250(v113, a3[22], v7);
              v8 = -(sub_37744(a2, a3, v117) != 0);
            }
            break;
          default:
            goto LABEL_357;
        }
      }
      return v8;
    case 104:
      return -(sub_37614(a2, a3[138], a3[24]) != 0);
    case 105:
      return -(sub_37614(a2, a3[137], a3[24]) != 0);
    case 106:
    case 107:
    case 108:
      return -(sub_37614(a2, a3[137], a3[25]) != 0);
    case 109:
      return -(sub_37614(a2, a3[136], a3[26]) != 0);
    case 114:
      if ( sub_37614(a2, a3[137], a3[20]) )
        return -1;
      return -(sub_37614(a2, a3[139], a3[10]) != 0);
    case 116:
      return -(sub_37614(a2, a3[136], a3[27]) != 0);
    case 117:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      v117 = (unsigned __int16)v117;
      v114 = (unsigned __int16)v117 - 1LL;
      if ( v114 > 0x17 )
      {
LABEL_332:
        v60 = (const char *)sub_98880((unsigned __int16)v117, 0);
        v8 = 0;
        sub_259858("Process record and replay target doesn't support ipc number %s\n", v60);
      }
      else
      {
        switch ( (int)v114 )
        {
          case 0:
          case 1:
          case 3:
          case 10:
          case 12:
          case 21:
          case 22:
            return 0;
          case 11:
            sub_1DF9A0(a2, a3[138], &v119);
            v8 = sub_37614(a2, a3[140], v119 + a3[21]);
            if ( v8 )
              v8 = -1;
            break;
          case 13:
            v8 = -(sub_37614(a2, a3[140], a3[28]) != 0);
            break;
          case 20:
            v8 = -(sub_37614(a2, a3[139], a3[22]) != 0);
            break;
          case 23:
            v8 = -(sub_37614(a2, a3[140], a3[29]) != 0);
            break;
          default:
            goto LABEL_332;
        }
      }
      return v8;
    case 122:
      return -(sub_37614(a2, a3[136], a3[30]) != 0);
    case 123:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( v117 & 0xFFFFFFFD | HIDWORD(v117) )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v119);
      v8 = sub_37614(a2, a3[137], v119);
      if ( v8 )
        return -1;
      return v8;
    case 124:
      return -(sub_37614(a2, a3[136], a3[31]) != 0);
    case 126:
      return -(sub_37614(a2, a3[138], a3[8]) != 0);
    case 131:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( v117 == 8388612 )
        return -(sub_37614(a2, a3[139], 4) != 0);
      if ( v117 > 0x800004 )
      {
        if ( v117 == 8388613 )
          return -(sub_37614(a2, a3[139], a3[32]) != 0);
        if ( v117 != 8388615 )
          return 0;
        return -(sub_37614(a2, a3[139], a3[33]) != 0);
      }
      if ( v117 == 13059 || v117 == 13573 )
        return -(sub_37614(a2, a3[139], a3[34]) != 0);
      return 0;
    case 135:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( v117 != 2 )
        return 0;
      return -(sub_37614(a2, a3[138], 10) != 0);
    case 140:
      return -(sub_37614(a2, a3[139], a3[3]) != 0);
    case 142:
      if ( sub_37614(a2, a3[137], a3[15]) || sub_37614(a2, a3[138], a3[15]) || sub_37614(a2, a3[139], a3[15]) )
        return -1;
      return -(sub_37614(a2, a3[140], a3[11]) != 0);
    case 145:
      ((void (__fastcall *)(int, _DWORD, __int64 *))loc_1DF9FC)(a2, a3[137], &v118);
      if ( !v118 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v119);
      v117 = 0;
      if ( !v119 )
        return 0;
      v61 = a3[65];
      LODWORD(v116) = v113;
      v115 = v118;
      LODWORD(v114) = a2;
      while ( 2 )
      {
        if ( sub_230020(v115, v116, v61) )
        {
          v64 = v114;
          if ( dword_487D4C )
          {
            v65 = (int *)sub_242FC8(v116);
            v66 = v118;
            v67 = *v65;
            v68 = sub_1DD58C(v64);
            v69 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v68, a3[137]);
            v70 = (const char *)sub_989F0(v66, HIDWORD(v66), *(_DWORD *)(v69 + 20));
            sub_2594B0(v67, "Process record: error reading memory at addr = 0x%s len = %d.\n", v70, a3[65]);
          }
        }
        else
        {
          v62 = sub_15C250(v116, *a3, v7);
          v63 = sub_15C250((int)v116 + *a3, a3[64], v7);
          if ( !sub_1DC3D4(v62, v63) )
          {
            v61 = a3[65];
            v115 = v118 + v61;
            v118 = v115;
            if ( v119 <= ++v117 )
              return 0;
            continue;
          }
        }
        break;
      }
      return -1;
    case 155:
      return -(sub_37614(a2, a3[137], a3[20]) != 0);
    case 161:
    case 162:
    case 265:
    case 266:
      return -(sub_37614(a2, a3[137], a3[35]) != 0);
    case 165:
      if ( sub_37614(a2, a3[136], a3[14]) || sub_37614(a2, a3[137], a3[14]) )
        return -1;
      return -(sub_37614(a2, a3[138], a3[14]) != 0);
    case 168:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[137],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, a3[36] * v119);
      if ( v8 )
        return -1;
      return v8;
    case 169:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      v113[0] = v117 - 7;
      v113[1] = v117 - 7;
      v25 = (_DWORD)v117 != 7;
      if ( (_DWORD)v117 == 7 )
        v25 = v113[0] > 1u;
      if ( v25 )
        return 0;
      v26 = a3[38];
      if ( v117 == 7 )
        v26 = a3[37];
      return -(sub_37614(a2, a3[138], v26) != 0);
    case 171:
      if ( sub_37614(a2, a3[136], a3[13]) || sub_37614(a2, a3[137], a3[13]) )
        return -1;
      return -(sub_37614(a2, a3[138], a3[13]) != 0);
    case 172:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( v117 == 2 )
        return -(sub_37614(a2, a3[137], a3[20]) != 0);
      if ( v117 == 16 )
        return -(sub_37614(a2, a3[137], a3[39]) != 0);
      return 0;
    case 174:
      return -(sub_37614(a2, a3[138], a3[40]) != 0);
    case 175:
      return -(sub_37614(a2, a3[138], a3[41]) != 0);
    case 176:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[137],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 177:
      return -(sub_37614(a2, a3[137], a3[42]) != 0);
    case 180:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[138],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 183:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[137],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 184:
      return -(sub_37614(a2, a3[137], a3[43]) != 0);
    case 186:
      return -(sub_37614(a2, a3[137], a3[44]) != 0);
    case 187:
      return -(sub_37614(a2, a3[138], a3[45]) != 0);
    case 195:
    case 196:
    case 197:
      return -(sub_37614(a2, a3[137], a3[46]) != 0);
    case 205:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[136],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, a3[47] * v119);
      if ( v8 )
        return -1;
      return v8;
    case 209:
      if ( sub_37614(a2, a3[136], a3[48]) || sub_37614(a2, a3[137], a3[48]) )
        return -1;
      return -(sub_37614(a2, a3[138], a3[48]) != 0);
    case 211:
      if ( sub_37614(a2, a3[136], a3[47]) || sub_37614(a2, a3[137], a3[47]) )
        return -1;
      return -(sub_37614(a2, a3[138], a3[47]) != 0);
    case 218:
      return -(sub_37614(a2, a3[138], a3[49]) != 0);
    case 221:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      v13 = v117;
      if ( a3[133] == v117 )
        return -(sub_37614(a2, a3[138], a3[50]) != 0);
      if ( v117 == a3[134] || v117 == a3[135] )
        return 0;
LABEL_70:
      if ( a3[132] != v13 )
        return 0;
      return -(sub_37614(a2, a3[138], a3[4]) != 0);
    case 229:
    case 230:
    case 231:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[139],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 232:
    case 233:
    case 234:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[138],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 239:
      return -(sub_37614(a2, a3[138], a3[3]) != 0);
    case 242:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[137],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 243:
      return -(sub_37614(a2, a3[136], a3[20]) != 0);
    case 244:
      return -(sub_37614(a2, a3[136], a3[51]) != 0);
    case 245:
      return -(sub_37614(a2, a3[137], a3[21]) != 0);
    case 247:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[139], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[138],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, a3[52] * v119);
      if ( v8 )
        return -1;
      return v8;
    case 248:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[137],
        &v119,
        v117 | HIDWORD(v117));
      v20 = v113;
      v21 = sub_230020(v117, v113, *a3 * v119);
      v8 = v21;
      if ( v21 )
      {
        if ( dword_487D4C )
        {
          v103 = (int *)sub_242FC8(v21);
          v104 = v117;
          v105 = *v103;
          v106 = sub_1DD58C(a2);
          v107 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v106, a3[137]);
          v108 = (const char *)sub_989F0(v104, HIDWORD(v104), *(_DWORD *)(v107 + 20));
          sub_2594B0(v105, "Process record: error reading memory at addr = 0x%s len = %u.\n", v108, *a3 * (_DWORD)v119);
        }
      }
      else
      {
        if ( !v119 )
          return v8;
        v22 = *a3;
        v23 = 0;
        while ( 1 )
        {
          v24 = sub_15C250(v20, v22, v7);
          if ( sub_1DC3D4(v24, a3[53]) )
            break;
          ++v23;
          v22 = *a3;
          v20 = (_DWORD *)((char *)v20 + *a3);
          if ( v119 <= v23 )
            return v8;
        }
      }
      return -1;
    case 249:
      return -(sub_37614(a2, a3[138], a3[52]) != 0);
    case 252:
      return sub_25A3B0(
               "The next instruction is syscall exit_group.  It will make the program exit.  Do you want to stop the program?") != 0;
    case 253:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[138],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 256:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[138],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, a3[54] * v119);
      if ( v8 )
        return -1;
      return v8;
    case 259:
      return -(sub_37614(a2, a3[138], a3[20]) != 0);
    case 260:
      return -(sub_37614(a2, a3[139], a3[55]) != 0);
    case 261:
      return -(sub_37614(a2, a3[137], a3[55]) != 0);
    case 267:
      return -(sub_37614(a2, a3[139], a3[35]) != 0);
    case 268:
    case 269:
      return -(sub_37614(a2, a3[138], a3[18]) != 0);
    case 275:
      if ( sub_37614(a2, a3[136], a3[20]) )
        return -1;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[138],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, a3[21] * v119);
      if ( v8 )
        return -1;
      return v8;
    case 280:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( v117
        && (((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
              a2,
              a3[138],
              &v119,
              v117 | HIDWORD(v117)),
            sub_1DC3D4(v117, v119)) )
      {
        return -1;
      }
      else
      {
        return -(sub_37614(a2, a3[139], a3[20]) != 0);
      }
    case 282:
      return -(sub_37614(a2, a3[138], a3[56]) != 0);
    case 284:
      if ( sub_37614(a2, a3[138], a3[42]) )
        return -1;
      return -(sub_37614(a2, a3[140], a3[10]) != 0);
    case 288:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      v10 = v117 == 6;
      if ( v117 == 11 )
        v10 = 1;
      if ( !v10 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[139],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 300:
      return -(sub_37614(a2, a3[138], a3[46]) != 0);
    case 305:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[139],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, v119);
      if ( v8 )
        return -1;
      return v8;
    case 308:
      if ( sub_37614(a2, a3[137], a3[15]) || sub_37614(a2, a3[138], a3[15]) || sub_37614(a2, a3[139], a3[15]) )
        return -1;
      return -(sub_37614(a2, a3[140], a3[35]) != 0);
    case 309:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[136], &v117);
      if ( v117
        && (((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
              a2,
              a3[137],
              &v119,
              v117 | HIDWORD(v117)),
            sub_1DC3D4(v117, a3[36] * v119)) )
      {
        return -1;
      }
      else
      {
        return -(sub_37614(a2, a3[138], a3[35]) != 0);
      }
    case 312:
      if ( sub_37614(a2, a3[137], a3[20]) )
        return -1;
      return -(sub_37614(a2, a3[138], a3[20]) != 0);
    case 313:
      if ( sub_37614(a2, a3[137], a3[3]) )
        return -1;
      return -(sub_37614(a2, a3[139], a3[3]) != 0);
    case 317:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[140], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[137],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, a3[20] * v119);
      if ( v8 )
        return -1;
      return v8;
    case 318:
      if ( sub_37614(a2, a3[136], a3[20]) || sub_37614(a2, a3[137], a3[20]) )
        return -1;
      return -(sub_37614(a2, a3[138], 2 * a3[22]) != 0);
    case 319:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      if ( !v117 )
        return 0;
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *, _DWORD))loc_1DF9FC)(
        a2,
        a3[138],
        &v119,
        v117 | HIDWORD(v117));
      v8 = sub_1DC3D4(v117, a3[54] * v119);
      if ( v8 )
        return -1;
      return v8;
    case 502:
    case 510:
    case 511:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v119);
      v8 = sub_3763C(a2, a3, v117, v119, SHIDWORD(v119));
      if ( v8 )
        return -1;
      return v8;
    case 504:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[139], &v117);
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[140], &v119);
      v8 = sub_3763C(a2, a3, v117, v119, SHIDWORD(v119));
      if ( v8 )
        return -1;
      return v8;
    case 506:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[137], &v117);
      return -(sub_37744(a2, a3, v117) != 0);
    case 512:
      return -(sub_37614(a2, a3[139], a3[20]) != 0);
    case 514:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[140], &v117);
      if ( !v117 )
        return 0;
      v11 = sub_230020(v117, v113, a3[20]);
      if ( v11 )
      {
        if ( dword_487D4C )
        {
          v97 = (int *)sub_242FC8(v11);
          v98 = v117;
          v99 = *v97;
          v100 = sub_1DD58C(a2);
          v101 = ((int (__fastcall *)(int, _DWORD))loc_1678C8)(v100, a3[140]);
          v102 = (const char *)sub_989F0(v98, HIDWORD(v98), *(_DWORD *)(v101 + 20));
          sub_2594B0(v99, "Process record: error reading memory at addr = 0x%s len = %d.\n", v102, a3[20]);
        }
        return -1;
      }
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[139], &v119);
      v12 = sub_15C190(v113, a3[20], v7);
      if ( sub_1DC3D4(v119, v12) )
        return -1;
      v8 = sub_1DC3D4(v117, a3[20]);
      if ( v8 )
        return -1;
      return v8;
    case 521:
      return -(sub_37614(a2, a3[138], a3[22]) != 0);
    case 522:
      return -(sub_37614(a2, a3[138], a3[29]) != 0);
    case 530:
      sub_1DF9A0(a2, a3[138], &v119);
      v8 = sub_37614(a2, a3[137], v119 + a3[21]);
      if ( v8 )
        return -1;
      return v8;
    case 531:
      return -(sub_37614(a2, a3[138], a3[28]) != 0);
    case 540:
      ((void (__fastcall *)(int, _DWORD, unsigned __int64 *))loc_1DF9FC)(a2, a3[138], &v117);
      return -(sub_1DC3D4(v117, a3[25]) != 0);
    default:
      v8 = -1;
      sub_259858("Process record and replay target doesn't support syscall number %d\n", a1);
      return v8;
  }
}
