void __fastcall sub_E2D4C(_DWORD *a1, _DWORD *a2)
{
  int v2; // r6
  int v3; // r7
  int *v4; // r10
  void *v5; // r0
  void *v6; // r0
  int v7; // r8
  unsigned int *v8; // r3
  int v9; // r2
  int v10; // r1
  unsigned int v11; // r2
  int v12; // r11
  unsigned int *v13; // r3
  unsigned int v14; // r5
  unsigned int v15; // r3
  unsigned int *v16; // r12
  unsigned int *v17; // r3
  unsigned int v18; // r1
  int v19; // r2
  unsigned int v20; // r3
  unsigned int v21; // r3
  int v22; // r0
  bool v23; // zf
  int *v24; // r2
  int *v25; // r4
  int v26; // r3
  int v27; // r1
  __int64 v28; // r0
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r3
  void *v35; // r7
  int v36; // r0
  int v37; // r4
  char *v38; // r0
  char *v39; // r0
  unsigned int v40; // r1
  int v41; // r4
  int *v42; // r0
  int v43; // r3
  int v44; // r0
  _DWORD *v45; // r0
  int v46; // r2
  int v47; // r1
  char *v48; // r0
  int v49; // r0
  int v50; // r3
  int v51; // r1
  unsigned int v52; // r0
  int v53; // r3
  unsigned int v54; // r2
  int *v55; // r12
  char *v56; // r10
  int v57; // r0
  int v58; // r0
  const char *v59; // r0
  char *v60; // r0
  int v61; // r3
  unsigned int v62; // r3
  int v63; // r10
  int v64; // r3
  int v65; // r0
  int v66; // r2
  int v67; // r3
  unsigned int v68; // r10
  int v69; // r2
  _DWORD *v70; // r3
  _DWORD *v71; // r6
  unsigned int v72; // r3
  int v73; // r2
  _DWORD *v74; // r0
  int v75; // r0
  int v76; // r0
  unsigned int v77; // [sp+8h] [bp-54h]
  unsigned int *v79; // [sp+10h] [bp-4Ch]
  _DWORD *v80; // [sp+14h] [bp-48h]
  const char *v81; // [sp+18h] [bp-44h]
  int v83; // [sp+24h] [bp-38h]
  int v84; // [sp+24h] [bp-38h]
  int *v85; // [sp+28h] [bp-34h]
  char *v86; // [sp+28h] [bp-34h]
  int v87; // [sp+2Ch] [bp-30h]
  int v88; // [sp+34h] [bp-28h] BYREF
  void *ptr; // [sp+3Ch] [bp-20h] BYREF
  void *v90; // [sp+40h] [bp-1Ch]
  int v91; // [sp+44h] [bp-18h]
  unsigned int v92; // [sp+48h] [bp-14h] BYREF
  unsigned int v93; // [sp+4Ch] [bp-10h]
  int v94; // [sp+50h] [bp-Ch]
  unsigned int v95; // [sp+54h] [bp-8h]

  ptr = 0;
  v90 = 0;
  v91 = 0;
  v5 = sub_92E28();
  v87 = (int)v5;
  if ( dword_487D4C )
  {
    v74 = (_DWORD *)sub_242FC8(v5);
    v5 = (void *)sub_2594B0(*v74, "[btrace] compute ftrace\n");
  }
  if ( *a2 == 1 )
  {
    v7 = sub_16F654(v5);
    v8 = (unsigned int *)a2[1];
    v80 = a1 + 63;
    v9 = a1[70];
    v10 = a1[69];
    if ( v8 )
    {
      v23 = v10 == v9;
      v11 = *v8;
      if ( !v23 )
      {
        if ( v11 )
          v77 = v11 - 1;
        v12 = -a1[72];
        if ( v11 )
        {
LABEL_15:
          v13 = &v8[2 * v77];
          v14 = v13[2];
          v79 = v13;
          v15 = v13[3];
          v95 = 0;
          if ( v14 <= v15 )
          {
            v81 = "[btrace] [ftrace] no symbol at %s\n";
LABEL_30:
            v2 = (int)sub_C3460(v14);
            v22 = sub_1B240C(&v88, v14);
            v3 = v88;
            v23 = v2 == 0;
            if ( !v2 )
              v23 = v88 == 0;
            if ( v23 && dword_487D4C )
            {
              v37 = *(_DWORD *)sub_242FC8(v22);
              v38 = sub_98E84(v14);
              sub_2594B0(v37, v81, v38);
            }
            v24 = (int *)a1[69];
            v25 = (int *)a1[70];
            if ( v24 == v25 || (v4 = (int *)*(v25 - 5)) != 0 )
            {
              v36 = sub_E21EC(v80, v3, v2);
LABEL_58:
              v25 = (int *)v36;
              goto LABEL_52;
            }
            v26 = *(v25 - 7);
            if ( *(v25 - 8) == v26 )
              goto LABEL_43;
            v4 = (int *)(v26 - 16);
            if ( v26 == 16 )
              goto LABEL_43;
            v27 = *(_DWORD *)(v26 - 8);
            if ( v27 != 2 )
            {
              if ( v27 != 3 )
              {
                if ( v27 == 1 )
                  goto LABEL_68;
                goto LABEL_43;
              }
              v44 = sub_C3368(v14);
              if ( v44 == v14 )
                goto LABEL_74;
              v23 = v44 == 0;
              v28 = *(_QWORD *)(v25 - 13);
              if ( !v23 )
              {
LABEL_44:
                v29 = sub_E0AF4((const char **)v28, (const char **)HIDWORD(v28), (const char **)v3, (const char **)v2);
                if ( v29 )
                {
                  if ( dword_487D4C )
                  {
                    v84 = *(_DWORD *)sub_242FC8(v29);
                    if ( v4 )
                      v56 = sub_98E84(*v4);
                    else
                      v56 = "<nil>";
                    v86 = sub_E0BE8(*(v25 - 13), *(v25 - 12));
                    v57 = *(v25 - 12);
                    if ( v57 )
                    {
                      v58 = sub_2209DC(v57);
                      v59 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v58);
                    }
                    else
                    {
                      v59 = "<unknown>";
                    }
                    sub_2594B0(v84, "[btrace] [ftrace] switching from %s in %s at %s\n", v56, v86, v59);
                  }
                  v25 = (int *)sub_E21EC(v80, v3, v2);
                  v30 = v25[10];
                  v31 = v30 - 1;
                  if ( v30 != 1 )
                  {
                    v32 = a1[69];
                    if ( v31 > -991146299 * ((a1[70] - v32) >> 2) )
                      v31 = 0;
                    else
                      v31 = v32 + 52 * (v30 - 2);
                  }
                  v33 = *(_DWORD *)(v31 + 16);
                  v34 = *(_DWORD *)(v31 + 48);
                  v25[4] = v33;
                  v25[12] = v34;
                  sub_E0D88(v25, "new switch");
                }
                else
                {
                  v25 -= 13;
                }
                goto LABEL_52;
              }
              if ( sub_E0AF4((const char **)v28, (const char **)HIDWORD(v28), (const char **)v3, (const char **)v2) )
              {
LABEL_74:
                v45 = a1 + 63;
                v46 = v2;
                v47 = v3;
LABEL_75:
                v36 = sub_E2318(v45, v47, v46);
                goto LABEL_58;
              }
LABEL_43:
              v28 = *(_QWORD *)(v25 - 13);
              goto LABEL_44;
            }
            v48 = sub_E0BE8(*(v25 - 13), *(v25 - 12));
            v23 = strcmp(v48, "_dl_runtime_resolve") == 0;
            v46 = v2;
            v47 = v3;
            v45 = a1 + 63;
            if ( v23 )
              goto LABEL_75;
            v49 = sub_E21EC(v80, v3, v2);
            v50 = *(_DWORD *)(v49 + 40);
            v25 = (int *)v49;
            if ( v50 == 1 || (v51 = a1[69], v83 = a1[70], v52 = -991146299 * ((v83 - v51) >> 2), v50 - 1 > v52) )
LABEL_85:
              __und(0);
            v53 = v51 + 52 * (v50 - 2);
            v54 = *(_DWORD *)(v53 + 16);
            v85 = (int *)v53;
            if ( !v54 )
            {
LABEL_80:
              v25[11] = v85[11] - 1;
              sub_E0F4C((int)v80, v85, v25, 1);
              sub_E0D88(v25, "new return - no caller");
              goto LABEL_52;
            }
            if ( v52 < v54 )
            {
LABEL_82:
              v55 = v85;
              while ( v54 )
              {
                if ( -991146299 * ((v83 - v51) >> 2) < v54 )
                  goto LABEL_85;
                v55 = (int *)(v51 + 52 * (v54 - 1));
                v54 = v55[4];
              }
              v85 = v55;
              goto LABEL_80;
            }
            v62 = v54 - 1;
            v63 = v51 + 52 * (v54 - 1);
            if ( v63 )
            {
              do
              {
                if ( !sub_E0AF4(*(const char ***)v63, *(const char ***)(v63 + 4), (const char **)v3, (const char **)v2) )
                {
                  if ( *(_DWORD *)(v63 + 12) )
                  {
                    v75 = sub_94700(
                            (int)"btrace.c",
                            429,
                            "%s: Assertion `%s' failed.",
                            "btrace_function* ftrace_new_return(btrace_thread_info*, minimal_symbol*, symbol*)",
                            "caller->next == 0");
                    sub_339E78(v75);
                    sub_92E60();
                  }
                  v64 = *(_DWORD *)(v63 + 40);
                  v65 = *(_DWORD *)(v63 + 44);
                  *(_DWORD *)(v63 + 12) = v25[10];
                  v66 = *(_DWORD *)(v63 + 16);
                  v25[2] = v64;
                  v67 = *(_DWORD *)(v63 + 48);
                  v25[11] = v65;
                  v25[4] = v66;
                  v25[12] = v67;
                  sub_E0D88(v25, "new return");
                  goto LABEL_52;
                }
                v68 = *(_DWORD *)(v63 + 16);
                if ( !v68 )
                  break;
                v69 = a1[69];
                if ( v68 > -991146299 * ((a1[70] - v69) >> 2) )
                  break;
                v63 = v69 + 52 * (v68 - 1);
              }
              while ( v63 );
              v54 = v85[4];
              if ( !v54 )
                goto LABEL_80;
              v51 = a1[69];
              v83 = a1[70];
              v52 = -991146299 * ((v83 - v51) >> 2);
              if ( v54 > v52 )
                goto LABEL_82;
              v62 = v54 - 1;
            }
            v70 = (_DWORD *)(v51 + 52 * v62);
            if ( v70 )
            {
              v71 = v70;
              do
              {
                if ( !v71[8] && *(_DWORD *)(v71[6] - 8) == 1 )
                {
                  v73 = v25[10];
                  v25[11] = v85[11] - 1;
                  v85[4] = v73;
                  v85[12] = 1;
                  sub_E0D88(v25, "new return - unknown caller");
                  goto LABEL_52;
                }
                v72 = v71[4];
                if ( !v72 )
                  break;
                if ( v52 < v72 )
                  break;
                v71 = (_DWORD *)(v51 + 52 * (v72 - 1));
              }
              while ( v71 );
            }
            goto LABEL_82;
          }
          while ( 1 )
          {
            v25 = (int *)(sub_E236C(v80, 1, (int)&ptr)[9] - 1);
            v39 = sub_98E84(v14);
            sub_946B0("Recorded trace may be corrupted at instruction %u (pc = %s).", v25, v39);
LABEL_64:
            if ( !v77 )
              break;
            while ( 1 )
            {
              v8 = (unsigned int *)a2[1];
              v40 = --v77;
              if ( v8 && v40 < *v8 )
                goto LABEL_15;
              sub_94700(
                (int)"btrace.c",
                1059,
                "%s: Assertion `%s' failed.",
                "btrace_block_s* VEC_btrace_block_s_index(VEC_btrace_block_s*, unsigned int, const char*, unsigned int)",
                "index");
LABEL_68:
              if ( *(unsigned __int8 *)(v26 - 12) + *(_DWORD *)(v26 - 16) == v14 )
                goto LABEL_43;
              v41 = (char *)v25 - (char *)v24;
              v42 = (int *)sub_E21EC(v80, v3, v2);
              v43 = v42[11];
              v42[4] = -991146299 * (v41 >> 2);
              v25 = v42;
              v42[11] = v43 + 1;
              sub_E0D88(v42, "new call");
LABEL_52:
              if ( v77 && v12 >= v25[11] )
                v12 = v25[11];
              v35 = sub_92E28();
              v2 = sub_10C02C(v7, v14);
              sub_92E40((int)v35);
              v92 = v14;
              LOBYTE(v93) = v2;
              v4 = (int *)sub_92E28();
              if ( ((int (__fastcall *)(int, unsigned int))loc_16E248)(v7, v14) )
              {
                v3 = 1;
              }
              else if ( ((int (__fastcall *)(int, unsigned int))loc_16E304)(v7, v14) )
              {
                v3 = 2;
              }
              else if ( ((int (__fastcall *)(int, unsigned int))loc_16E3C0)(v7, v14) )
              {
                v3 = 3;
              }
              else
              {
                v3 = 0;
              }
              sub_92E40((int)v4);
              v16 = (unsigned int *)v25[6];
              v17 = (unsigned int *)v25[7];
              v94 = v3;
              v95 = 0;
              if ( v16 == v17 )
              {
                sub_E4208(v25 + 5, v16, &v92);
              }
              else
              {
                if ( v16 )
                {
                  v18 = v93;
                  v19 = v94;
                  v20 = v95;
                  *v16 = v92;
                  v16[1] = v18;
                  v16[2] = v19;
                  v16[3] = v20;
                }
                v25[6] = (int)(v16 + 4);
              }
              if ( (unsigned int)dword_487D4C > 1 )
                sub_E0D88(v25, "update insn");
              v21 = v79[3];
              if ( v21 == v14 )
                goto LABEL_64;
              if ( v2 > 0 )
                break;
              v25 = (int *)(sub_E236C(v80, 2, (int)&ptr)[9] - 1);
              v60 = sub_98E84(v14);
              sub_946B0("Recorded trace may be incomplete at instruction %u (pc = %s).", v25, v60);
              if ( !v77 )
                goto LABEL_92;
            }
            v14 += v2;
            if ( !v77 && v12 >= v25[11] )
              v12 = v25[11];
            v95 = 0;
            if ( v21 >= v14 )
              goto LABEL_30;
          }
        }
        goto LABEL_92;
      }
      if ( v11 )
      {
        v12 = 0x7FFFFFFF;
        v77 = v11 - 1;
        goto LABEL_15;
      }
    }
    else if ( v10 != v9 )
    {
      v12 = -a1[72];
LABEL_92:
      v61 = -v12;
LABEL_93:
      a1[72] = v61;
      goto LABEL_5;
    }
    v61 = -2147483647;
    goto LABEL_93;
  }
  if ( *a2 )
  {
    if ( *a2 == 2 )
    {
      sub_94700((int)"btrace.c", 1482, "Unexpected branch trace format.");
      sub_338FFC(ptr);
    }
    v76 = sub_94700((int)"btrace.c", 1510, "Unkown branch trace format.");
    sub_339E78(v76);
    sub_92E60();
  }
LABEL_5:
  sub_92E40(v87);
  v6 = v90;
  if ( ptr != v90 )
  {
    a1[73] += ((_BYTE *)v90 - (_BYTE *)ptr) >> 2;
    sub_E2410(a1, &ptr);
    v6 = ptr;
  }
  if ( v6 )
    sub_339E64(v6);
}
