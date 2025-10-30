int __fastcall sub_26833C(_DWORD *a1, signed int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  char *v12; // r3
  _DWORD *v13; // r4
  __int64 v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r7
  const char *v19; // r2
  int v20; // r7
  int v21; // r0
  int v22; // r1
  int v23; // r3
  int v24; // r2
  int v25; // r9
  bool v26; // zf
  int v27; // r11
  int v28; // r7
  int v29; // r9
  int v30; // r4
  char *v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r1
  int v35; // r7
  int v36; // r10
  int v37; // r0
  int v38; // r6
  char *v39; // r1
  int v40; // r0
  int v41; // r0
  int v42; // r1
  int v43; // r9
  int v44; // r0
  __int64 v45; // r0
  int v46; // r0
  __int64 v47; // r0
  int v48; // r7
  int v49; // r9
  int v50; // r3
  int v51; // r0
  int v52; // r0
  int v53; // r3
  int v54; // r7
  bool v55; // zf
  int v56; // r9
  int v57; // r1
  int v58; // r0
  unsigned int v59; // r0
  _DWORD *v60; // r9
  int v61; // r0
  __int64 v62; // r0
  int v63; // r0
  int v64; // r1
  int v65; // r7
  int v66; // r0
  __int64 v67; // r0
  _DWORD *v68; // r0
  int v69; // r1
  int v70; // r7
  int v71; // r0
  __int64 v72; // kr00_8
  int v73; // r11
  int v74; // r0
  int i; // r8
  int v76; // r1
  int v77; // r3
  int v78; // r10
  int v79; // r6
  unsigned int v80; // r1
  unsigned int v81; // r1
  char v82; // r6
  char v83; // r12
  char v84; // r0
  unsigned int v85; // r3
  unsigned int v86; // r6
  int v87; // r3
  _DWORD *v88; // r0
  int v89; // r0
  int v90; // r0
  _DWORD *v91; // r4
  int v92; // r0
  int v93; // r10
  _DWORD *v94; // r7
  int v95; // r0
  int v96; // r0
  int v97; // [sp+1Ch] [bp-78h]
  int v98; // [sp+1Ch] [bp-78h]
  int v99; // [sp+20h] [bp-74h]
  __int64 v100; // [sp+38h] [bp-5Ch] BYREF
  _QWORD dest[10]; // [sp+40h] [bp-54h] BYREF

  LODWORD(v14) = sub_171258(a1);
  v12 = *(char **)(v14 + 24);
  v13 = (_DWORD *)v14;
  HIDWORD(v14) = *v12;
  switch ( *v12 )
  {
    case 0:
      sub_25A418(a4, "<incomplete type>");
      return sub_25680C(a4);
    case 1:
      v51 = sub_170040(v14);
      v52 = ((int (__fastcall *)(int))loc_16EA14)(v51);
      v53 = a7[10];
      v54 = v52;
      v55 = v53 == 115;
      if ( v53 != 115 )
        v55 = v53 == 0;
      if ( !v55 )
        goto LABEL_3;
      v56 = sub_171258(*(_DWORD **)(v13[6] + 20));
      v58 = sub_26E718(a6, v57);
      v59 = sub_26D230(v13, v58 + v54 * a2);
      sub_267EA8((int)v13, (_BYTE **)(v56 + 24), v59, a4, (int)a7);
      return sub_25680C(a4);
    case 2:
      v60 = (_DWORD *)*((_DWORD *)v12 + 5);
      v61 = sub_171258(v60);
      if ( v13[5] && v60[5] )
      {
        if ( sub_171B30((int)v13, &v100, dest) )
        {
          if ( a7[1] )
            sub_25A7A0(2 * (a5 + 1), a4);
          sub_25A6BC(*(_BYTE **)(a8 + 24), a4);
          sub_267F74((int)v13, a2, a3, a4, a5, a6, a7, 0);
          sub_25A6BC(*(_BYTE **)(a8 + 28), a4);
          return sub_25680C(a4);
        }
LABEL_107:
        sub_946E0("Could not determine the array high bound", HIDWORD(v62));
      }
      sub_267EA8((int)v13, (_BYTE **)(v61 + 24), a2 + a3, a4, (int)a7);
      return sub_25680C(a4);
    case 5:
      v63 = sub_170040(v14);
      v65 = ((int (__fastcall *)(int))loc_16EA14)(v63);
      if ( a7[10] )
        goto LABEL_3;
      v66 = sub_26E718(a6, v64);
      v67 = sub_26D134(v13, v66 + v65 * a2);
      sub_267064((int)(v13 + 6), v67, a4);
      return sub_25680C(a4);
    case 6:
      v70 = a7[10];
      if ( v70 )
        goto LABEL_3;
      v71 = sub_26E718(a6, HIDWORD(v14));
      v72 = sub_26D134(v13, v71 + a2);
      v73 = *(__int16 *)(v13[6] + 4);
      sub_170040((int)v13);
      sub_1780B4();
      v99 = *(_DWORD *)(v74 + 64);
      sub_25A6BC("[", a4);
      if ( v73 > 0 )
      {
        for ( i = 0; i != v73; ++i )
        {
          v76 = *(_DWORD *)(v13[6] + 24);
          v77 = v76 + v70;
          if ( **(_BYTE **)(v76 + v70 + 16) )
          {
            v78 = *(_DWORD *)(v77 + 12);
            v79 = *(_DWORD *)(v76 + v70);
            v80 = *(_DWORD *)(v77 + 8);
            if ( v99 == v78 && (v80 & 0xFFFFFFF0) == 0x10 )
            {
              if ( ((((unsigned int)v72 >> v79) | (HIDWORD(v72) << (32 - v79)) | (HIDWORD(v72) >> (v79 - 32))) & 1) != 0 )
                sub_25A418(a4, " %s");
            }
            else
            {
              v81 = v80 >> 4;
              v82 = v79 + 1 - v81;
              v83 = 32 - v82;
              v84 = v82 - 32;
              v85 = (unsigned int)v72 >> v82;
              v86 = HIDWORD(v72) >> v82;
              v87 = v85 | (HIDWORD(v72) << v83) | (HIDWORD(v72) >> v84);
              if ( v81 <= 0x3F )
              {
                v87 &= ~(-1 << v81);
                v86 &= ~((unsigned __int64)(-1LL << v81) >> 32);
              }
              v97 = v87;
              sub_25A418(a4, " %s=");
              if ( **(_BYTE **)(v78 + 24) == 5 )
                sub_267064(v78 + 24, __SPAIR64__(v86, v97), a4);
              else
                sub_266EA4(a4, 100, 0, v97, __SPAIR64__(v86, v97));
            }
          }
          v70 += 24;
        }
      }
      sub_25A6BC(" ]", a4);
      return sub_25680C(a4);
    case 7:
    case 15:
      sub_170040(v14);
      if ( !a7[10] )
      {
        sub_25A418(a4, "{");
        sub_255DB0((int)v13, (int)"");
      }
      goto LABEL_3;
    case 8:
    case 12:
      v68 = memcpy(dest, a7, 0x4Cu);
      v69 = a7[10];
      if ( !v69 )
        v69 = a7[9];
      LODWORD(dest[5]) = v69;
      sub_266D40(v13, v69, a2, a2 >> 31, a6, v68, 0, a4);
      return sub_25680C(a4);
    case 9:
    case 25:
      v15 = sub_170040(v14);
      v17 = ((int (__fastcall *)(int))loc_16EA14)(v15);
      if ( a7[10] )
        goto LABEL_3;
      v89 = sub_26E718(a6, v16);
      sub_26727C(v89 + v17 * a2, (int)v13, a4);
      return sub_25680C(a4);
    case 10:
      sub_25A6BC(*(_BYTE **)(a8 + 20), a4);
      return sub_25680C(a4);
    case 14:
      v19 = (const char *)*((_DWORD *)v12 + 2);
      if ( !v19 )
        v19 = "<error type>";
      sub_25A418(a4, "%s", v19);
      return sub_25680C(a4);
    case 17:
LABEL_3:
      sub_266D40(v13, 0, a2, a2 >> 31, a6, a7, 0, a4);
      return sub_25680C(a4);
    case 18:
    case 19:
      v20 = sub_171258(*((_DWORD **)v12 + 5));
      v21 = sub_26BFB8(a6, 8 * v13[5], 8 * a2, (8 * a2) >> 31, 8 * v13[5], 0);
      v23 = a7[5];
      v24 = v21;
      if ( v21 )
        v24 = 1;
      v25 = v21;
      v26 = v23 == 0;
      if ( v23 )
        v26 = v21 == 0;
      if ( v26 )
      {
        v22 = a7[13];
        v93 = **(char **)(v20 + 24);
        if ( !v22 )
        {
          v98 = v24;
          v90 = sub_26E718(a6, 0);
          v28 = a7[5];
          v27 = v90;
          if ( !v28 )
            goto LABEL_24;
          if ( v93 )
            v28 = v98;
          else
            v28 = 0;
          if ( !v28 )
            goto LABEL_20;
          goto LABEL_87;
        }
      }
      else
      {
        v93 = **(char **)(v20 + 24);
      }
      v27 = sub_26E718(a6, v22);
      if ( !v93 )
      {
        if ( !a7[5] )
        {
          if ( !a7[13] )
            return sub_25680C(a4);
          goto LABEL_26;
        }
        v28 = 0;
        goto LABEL_20;
      }
      v28 = sub_26DED4(a6);
      if ( v28 )
      {
        if ( a2 )
        {
          v62 = sub_94700(
                  (int)"valprint.c",
                  550,
                  "%s: Assertion `%s' failed.",
                  "void generic_val_print_ref(type*, int, ui_file*, int, value*, const value_print_options*)",
                  "embedded_offset == 0");
          goto LABEL_107;
        }
      }
      else
      {
        v94 = *(_DWORD **)(v13[6] + 20);
        v95 = sub_26D230(v13, v27 + a2);
        v28 = sub_260F7C(v94, v95);
      }
      if ( !a7[5] )
      {
        if ( !a7[13] )
          return sub_25680C(a4);
        goto LABEL_96;
      }
      if ( !v25 )
        goto LABEL_20;
      if ( !v28 )
      {
LABEL_87:
        v14 = sub_94700(
                (int)"valprint.c",
                513,
                "%s: Assertion `%s' failed.",
                "const gdb_byte* get_value_addr_contents(value*)",
                "deref_val != NULL");
LABEL_88:
        sub_946E0("Unhandled type code %d in symbol table.", HIDWORD(v14));
      }
      if ( sub_26C094(v28) == 1 )
      {
        v96 = sub_2616BC(v28);
        v27 = ((int (__fastcall *)(int))loc_26BD48)(v96);
LABEL_20:
        v29 = sub_170040((int)v13);
        if ( v27 )
        {
          v30 = sub_15AEA8(v27 + a2, (int)v13);
          sub_25A418(a4, "@");
          v31 = sub_25AC8C(v29, v30);
          sub_25A6BC(v31, a4);
        }
        goto LABEL_22;
      }
      sub_170040((int)v13);
LABEL_22:
      if ( !a7[13] )
        return sub_25680C(a4);
      sub_25A6BC(&word_3B6A00, a4);
LABEL_24:
      if ( a7[13] )
      {
        if ( !v93 )
        {
LABEL_26:
          sub_25A6BC("???", a4);
          return sub_25680C(a4);
        }
LABEL_96:
        sub_266BC4(v28, a4, a5, a7, (int)off_46D5A4[0]);
      }
      return sub_25680C(a4);
    case 20:
      v32 = sub_170040(v14);
      v33 = ((int (__fastcall *)(int))loc_16EA14)(v32);
      v35 = a7[10];
      v36 = v33;
      if ( v35 )
        goto LABEL_78;
      v35 = a7[9];
      if ( v35 )
        goto LABEL_78;
      v37 = sub_26E718(a6, v34);
      v38 = sub_26D134(v13, v37 + v36 * a2);
      if ( (*(_BYTE *)(v13[6] + 1) & 1) != 0 )
        LOWORD(v39) = -22604;
      else
        LOWORD(v39) = -6932;
      if ( (*(_BYTE *)(v13[6] + 1) & 1) != 0 )
        HIWORD(v39) = 55;
      else
        HIWORD(v39) = 52;
      sub_25A418(a4, v39, v38);
      sub_25A6BC(&word_3E1F84, a4);
      (*((void (__fastcall **)(int, _DWORD *, int))off_46D5A4[0] + 12))(v38, a1, a4);
      return sub_25680C(a4);
    case 21:
      v40 = sub_170040(v14);
      v41 = ((int (__fastcall *)(int))loc_16EA14)(v40);
      v35 = a7[10];
      v43 = v41;
      if ( v35 || (v35 = a7[9]) != 0 )
      {
LABEL_78:
        v88 = memcpy(dest, a7, 0x4Cu);
        LODWORD(dest[5]) = v35;
        sub_266D40(v13, 0, a2, a2 >> 31, a6, v88, 0, a4);
        return sub_25680C(a4);
      }
      v44 = sub_26E718(a6, v42);
      v45 = sub_26D134(v13, v44 + v43 * a2);
      if ( v45 )
      {
        if ( v45 == 1 )
          sub_25A6BC(*(_BYTE **)(a8 + 12), a4);
        else
          sub_266EA4(a4, 100, 0, v45 | HIDWORD(v45), v45);
      }
      else
      {
        sub_25A6BC(*(_BYTE **)(a8 + 16), a4);
      }
      return sub_25680C(a4);
    case 22:
      v46 = sub_170040(v14);
      v47 = ((__int64 (__fastcall *)(int))loc_16EA14)(v46);
      v48 = v47;
      v49 = sub_26E718(a6, HIDWORD(v47));
      sub_25A418(a4, "%s", *(const char **)a8);
      if ( a7[10] )
        sub_266D40(*(_DWORD **)(v13[6] + 20), 0, a2, a2 >> 31, a6, a7, 0, a4);
      else
        sub_26727C(v49 + v48 * a2, *(_DWORD *)(v13[6] + 20), a4);
      sub_25A418(a4, "%s", *(const char **)(a8 + 4));
      v50 = v13[6];
      if ( a7[10] )
      {
        v91 = *(_DWORD **)(v50 + 20);
        v92 = sub_170058((int)v91);
        sub_266D40(v91, 0, a2 + v92, 0, a6, a7, 0, a4);
      }
      else
      {
        sub_26727C(v49 + *(_DWORD *)(*(_DWORD *)(v50 + 20) + 20) + v48 * a2, *(_DWORD *)(v50 + 20), a4);
      }
      sub_25A418(a4, "%s", *(const char **)(a8 + 8));
      return sub_25680C(a4);
    default:
      goto LABEL_88;
  }
}
