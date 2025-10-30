char *__fastcall sub_11603C(int a1, int a2, int a3, int a4, int a5, char *a6, char *a7, int a8, int a9, int a10)
{
  char *v10; // r4
  int v12; // r5
  bool v13; // zf
  char *v14; // r7
  const char *v15; // r0
  __int64 v16; // r0
  char *v17; // r0
  __int64 v19; // r0
  char *v20; // r0
  int v21; // r0
  __int64 v22; // r0
  int v23; // r3
  int v24; // r2
  char *v25; // r0
  __int64 v26; // r0
  int v27; // r2
  int v28; // r3
  char *v29; // r0
  char *v30; // r0
  char *v31; // r5
  const char *v32; // r7
  char *v33; // r0
  char *v34; // r0
  int v35; // r0
  int v36; // r2
  char *v37; // r0
  char *v38; // r0
  char *v39; // r5
  char *v40; // r0
  char *v41; // r0
  int v42; // r0
  int v43; // r3
  char *v44; // r5
  char *v45; // r0
  char *v46; // r4
  int v47; // r5
  int v48; // r7
  char *v49; // r0
  int v50; // r7
  char *v51; // r0
  int v52; // r2
  char *v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r1
  int v57; // r2
  char *v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  const char *v67; // r0
  char *v68; // r7
  const char *v69; // r0
  int v70; // r2
  char *v71; // r5
  const char *v72; // r0
  int v76; // [sp+2Ch] [bp-18h]
  __int64 v77; // [sp+30h] [bp-14h] BYREF
  __int64 v78; // [sp+38h] [bp-Ch] BYREF

  v10 = a6;
  while ( v10 < a7 )
  {
    v12 = (unsigned __int8)*v10;
    if ( !a9 )
    {
      v13 = v12 == 147;
      if ( v12 != 147 )
        v13 = v12 == 157;
      if ( v13 )
        break;
    }
    v14 = v10 + 1;
    v15 = (const char *)sub_322B3C((unsigned __int8)*v10);
    if ( !v15 )
      sub_946E0("Unrecognized DWARF opcode 0x%02x at %ld", v12, &v10[-a5]);
    sub_25A418(a1, "  %*ld: %s", a8 + 4, &v10[-a5], v15);
    switch ( v12 )
    {
      case 3:
        v52 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v53 = v10 + 1;
        v10 = &v14[a3];
        v26 = sub_15C250(v53, a3, v52);
        v27 = a3;
        v77 = v26;
        goto LABEL_18;
      case 8:
        v10 += 2;
        v54 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v19 = sub_15C250(v14, 1, v54);
        v77 = v19;
        goto LABEL_14;
      case 9:
        v10 += 2;
        v55 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v56 = 1;
        v57 = v55;
        v58 = v14;
        goto LABEL_37;
      case 10:
        v10 += 3;
        v59 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v19 = sub_15C250(v14, 2, v59);
        v77 = v19;
        goto LABEL_14;
      case 11:
        v10 += 3;
        v60 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v56 = 2;
        v57 = v60;
        v58 = v14;
        goto LABEL_37;
      case 12:
        v10 += 5;
        v61 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v19 = sub_15C250(v14, 4, v61);
        v77 = v19;
        goto LABEL_14;
      case 13:
        v10 += 5;
        v62 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v56 = 4;
        v57 = v62;
        v58 = v14;
        goto LABEL_37;
      case 14:
        v10 += 9;
        v63 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v19 = sub_15C250(v14, 8, v63);
        v77 = v19;
        goto LABEL_14;
      case 15:
        v10 += 9;
        v64 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v56 = 8;
        v57 = v64;
        v58 = v14;
LABEL_37:
        v16 = sub_15C190(v58, v56, v57);
        v78 = v16;
        goto LABEL_9;
      case 16:
      case 35:
        v10 = sub_11257C(v10 + 1, a7, &v77);
        v19 = v77;
        goto LABEL_14;
      case 17:
      case 145:
        v10 = sub_112620(v10 + 1, a7, (int *)&v78);
        v16 = v78;
LABEL_9:
        v17 = sub_988AC(v16);
        sub_25A418(a1, " %s", v17);
        break;
      case 21:
      case 148:
      case 149:
        v70 = (unsigned __int8)v10[1];
        v10 += 2;
        sub_25A418(a1, " %d", v70);
        break;
      case 40:
        v10 += 3;
        v65 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v78 = sub_15C190(v14, 2, v65);
        sub_25A418(a1, " %ld", &v10[v78 - a5]);
        break;
      case 47:
        v10 += 3;
        v66 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v78 = sub_15C190(v14, 2, v66);
        sub_25A418(a1, " to %ld", &v10[v78 - a5]);
        break;
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
      case 96:
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
        v67 = sub_11600C(a2, v12 - 80);
        ++v10;
        sub_25A418(a1, " [$%s]", v67);
        break;
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
      case 120:
      case 121:
      case 122:
      case 123:
      case 124:
      case 125:
      case 126:
      case 127:
      case 128:
      case 129:
      case 130:
      case 131:
      case 132:
      case 133:
      case 134:
      case 135:
      case 136:
      case 137:
      case 138:
      case 139:
      case 140:
      case 141:
      case 142:
      case 143:
        v10 = sub_112620(v10 + 1, a7, (int *)&v78);
        v68 = sub_988AC(v78);
        v69 = sub_11600C(a2, v12 - 112);
        sub_25A418(a1, " %s [$%s]", v68, v69);
        break;
      case 144:
        v10 = sub_11257C(v10 + 1, a7, &v77);
        v71 = sub_98880(v77, SHIDWORD(v77));
        v72 = sub_11600C(a2, v77);
        sub_25A418(a1, " %s [$%s]", v71, v72);
        break;
      case 146:
        v30 = sub_11257C(v10 + 1, a7, &v77);
        v10 = sub_112620(v30, a7, (int *)&v78);
        v31 = sub_98880(v77, SHIDWORD(v77));
        v32 = sub_11600C(a2, v77);
        v33 = sub_988AC(v78);
        sub_25A418(a1, " register %s [$%s] offset %s", v31, v32, v33);
        break;
      case 147:
        v10 = sub_11257C(v10 + 1, a7, &v77);
        v34 = sub_98880(v77, SHIDWORD(v77));
        sub_25A418(a1, " %s (bytes)", v34);
        break;
      case 152:
        v10 += 3;
        v35 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v22 = sub_15C250(v14, 2, v35);
        v24 = 2;
        goto LABEL_16;
      case 153:
      case 250:
        v10 += 5;
        v21 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v22 = sub_15C250(v14, 4, v21);
        v24 = 4;
        goto LABEL_16;
      case 154:
        v36 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v37 = v10 + 1;
        v10 = &v14[a4];
        v22 = sub_15C250(v37, a4, v36);
        v24 = a4;
LABEL_16:
        v77 = v22;
        v25 = sub_989F0(v22, SHIDWORD(v22), v24, v23);
        sub_25A418(a1, " offset %s", v25);
        break;
      case 157:
        v38 = sub_11257C(v10 + 1, a7, &v77);
        v10 = sub_11257C(v38, a7, &v78);
        v39 = sub_98880(v77, SHIDWORD(v77));
        v40 = sub_98880(v78, SHIDWORD(v78));
        sub_25A418(a1, " size %s offset %s (bits)", v39, v40);
        break;
      case 158:
        v41 = sub_11257C(v10 + 1, a7, &v77);
        v10 = &v41[v77];
        v19 = v77;
        goto LABEL_14;
      case 160:
      case 242:
        v42 = ((int (__fastcall *)(int))loc_165BB8)(a2);
        v77 = sub_15C250(v10 + 1, a4, v42);
        v10 = sub_112620(&v14[a4], a7, (int *)&v78);
        v44 = sub_989F0(v77, SHIDWORD(v77), a4, v43);
        v45 = sub_988AC(v78);
        sub_25A418(a1, " DIE %s offset %s", v44, v45);
        break;
      case 163:
      case 243:
        v46 = sub_11257C(v10 + 1, a7, &v77);
        sub_25A4FC(10, a1);
        sub_11603C(a1, a2, a3, a4, a5, v46, &v46[v77], a8 + 2, a9, a10);
        v10 = &v46[v77];
        continue;
      case 164:
      case 244:
        sub_11257C(v10 + 1, a7, &v77);
        v47 = v77;
        goto LABEL_29;
      case 165:
      case 245:
        v49 = sub_11257C(v10 + 1, a7, &v78);
        sub_11257C(v49, a7, &v77);
        v50 = sub_13228C(v77, a10);
        sub_25A418(a1, (const char *)&word_364FA4);
        sub_255DB0(v50, "", a1, -1);
      case 166:
      case 246:
        sub_11257C(v10 + 2, a7, &v77);
        v76 = sub_13228C(v77, a10);
        sub_25A418(a1, (const char *)&word_364FA4);
        sub_255DB0(v76, "", a1, -1);
      case 168:
      case 169:
      case 247:
      case 249:
        v51 = sub_11257C(v10 + 1, a7, &v77);
        v47 = v77;
        v10 = v51;
        if ( (_DWORD)v77 )
        {
LABEL_29:
          v48 = sub_13228C(v47, a10);
          sub_25A418(a1, (const char *)&word_364FA4);
          sub_255DB0(v48, "", a1, -1);
        }
        sub_25A418(a1, (const char *)&off_39DE30);
        break;
      case 251:
        v10 = sub_11257C(v10 + 1, a7, &v77);
        v26 = (unsigned int)sub_132070(a10, v77);
        v27 = a3;
        v28 = 0;
        v77 = (unsigned int)v26;
LABEL_18:
        v29 = sub_989F0(v26, SHIDWORD(v26), v27, v28);
        sub_25A418(a1, " 0x%s", v29);
        break;
      case 252:
        v10 = sub_11257C(v10 + 1, a7, &v77);
        v19 = (unsigned int)sub_132070(a10, v77);
        v77 = (unsigned int)v19;
LABEL_14:
        v20 = sub_98880(v19, SHIDWORD(v19));
        sub_25A418(a1, " %s", v20);
        break;
      default:
        ++v10;
        break;
    }
    sub_25A418(a1, (const char *)&word_356638);
  }
  return v10;
}
