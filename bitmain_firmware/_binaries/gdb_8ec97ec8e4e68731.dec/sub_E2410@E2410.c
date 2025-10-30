void __fastcall sub_E2410(_DWORD *a1, void **a2)
{
  int v2; // r7
  char *v3; // r2
  int v4; // r1
  unsigned int v5; // r2
  int v6; // r9
  unsigned int v8; // r3
  char *v9; // r4
  char *v10; // r1
  char *v11; // r0
  char *v12; // r0
  char *v13; // r3
  int v14; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r4
  int v18; // r4
  int v19; // r0
  int v20; // r9
  _BOOL4 v21; // r3
  int v22; // lr
  _BOOL4 v23; // r3
  int v24; // r9
  int v25; // r9
  int v26; // r10
  int v27; // r11
  int v28; // r8
  int v29; // r6
  const char ***v30; // r5
  const char ***v31; // r4
  int v32; // r0
  bool v33; // zf
  int v34; // r2
  int v35; // r1
  int *v36; // r5
  int v37; // r6
  bool v38; // zf
  int v39; // r4
  int v40; // r0
  int v41; // r8
  int v42; // r1
  int v43; // r2
  unsigned int v44; // r2
  unsigned int v45; // r3
  int v46; // r5
  int v47; // r1
  int *v48; // r6
  bool v49; // cc
  int v50; // r3
  _DWORD *v51; // r0
  int v52; // r0
  unsigned int v53; // r1
  int *v54; // r3
  char *v55; // r1
  _DWORD *v56; // r0
  _DWORD *v57; // r0
  _DWORD *v58; // r0
  _DWORD *v59; // r0
  int *v60; // r6
  unsigned int v61; // r0
  unsigned int v62; // r3
  int v63; // r2
  int v64; // r3
  _DWORD *v65; // r0
  _DWORD *v66; // r0
  _DWORD *v67; // r0
  _DWORD *v68; // r0
  _DWORD *v69; // r0
  void *v70; // r0
  int v71; // [sp+Ch] [bp-40h]
  unsigned int *v72; // [sp+10h] [bp-3Ch]
  char *v73; // [sp+18h] [bp-34h]
  int *v75; // [sp+24h] [bp-28h]
  int *v76; // [sp+24h] [bp-28h]
  int v77; // [sp+28h] [bp-24h]
  int v79; // [sp+34h] [bp-18h]
  unsigned int v80; // [sp+38h] [bp-14h]
  void *ptr; // [sp+3Ch] [bp-10h] BYREF
  char *v82; // [sp+40h] [bp-Ch]
  char *v83; // [sp+44h] [bp-8h]

  v2 = (int)(a1 + 63);
  ptr = 0;
  v82 = 0;
  v83 = 0;
  if ( dword_487D4C )
  {
    v68 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v68, "[btrace] bridge gaps\n");
  }
  v3 = (char *)*a2;
  v73 = (char *)a2[1];
  v77 = 5;
LABEL_4:
  if ( v3 != v73 )
  {
LABEL_5:
    v72 = (unsigned int *)v3;
    while ( 1 )
    {
      v8 = *v72;
      v33 = *v72++ == 0;
      v80 = v8;
      if ( v33 || (v4 = a1[69], v5 = -991146299 * ((a1[70] - v4) >> 2), v8 > v5) )
        __und(0);
      v6 = *(_DWORD *)(v4 + 52 * (v8 - 1) + 40);
      if ( v6 != 1 && v6 - 1 <= v5 )
      {
        v71 = v4 + 52 * (v6 - 2);
        if ( v71 )
        {
          if ( !*(_DWORD *)(v4 + 52 * (v6 - 2) + 32) && v6 + 1 <= v5 && v6 != -1 )
          {
            v19 = v4 + 52 * v6;
            v75 = (int *)v19;
            if ( v19 )
            {
              if ( !*(_DWORD *)(v4 + 52 * v6 + 32) )
                goto LABEL_48;
              v20 = *(_DWORD *)(v19 + 40);
              v21 = v20 == -1;
              if ( v5 < v20 + 1 )
                v21 = 1;
              if ( !v21 )
                break;
            }
          }
        }
      }
LABEL_15:
      if ( v73 == (char *)v72 )
      {
        v9 = v82;
        v3 = (char *)ptr;
        v10 = (char *)*a2;
        v11 = (char *)a2[1];
        v73 = v82;
        if ( (v82 - (_BYTE *)ptr) >> 2 != (v11 - (_BYTE *)*a2) >> 2 )
        {
          v12 = (char *)a2[2];
          v13 = v83;
          *a2 = ptr;
          ptr = v10;
          a2[1] = v9;
          v82 = v10;
          v83 = v12;
          a2[2] = v13;
          if ( v3 == v9 )
            goto LABEL_21;
          goto LABEL_5;
        }
        if ( v10 != v11 )
        {
          v82 = (char *)ptr;
          if ( --v77 )
          {
            v73 = v11;
            v3 = v10;
            goto LABEL_4;
          }
        }
        goto LABEL_21;
      }
    }
    v19 = 52;
    v22 = v20;
    while ( 1 )
    {
      v24 = v4 + 52 * v22;
      if ( !v24 )
        goto LABEL_15;
      if ( !*(_DWORD *)(v24 + 32) )
        break;
      v22 = *(_DWORD *)(v24 + 40);
      v23 = v22 == -1;
      if ( v22 + 1 > v5 )
        v23 = 1;
      if ( v23 )
        goto LABEL_15;
    }
    v75 = (int *)(v4 + 52 * v22);
LABEL_48:
    if ( dword_487D4C )
    {
      v56 = (_DWORD *)sub_242FC8(v19);
      sub_2594B0(*v56, "[btrace] [ftrace] checking gap at insn %u (req matches: %d)\n", v75[9] - 1, v77);
    }
    v25 = 0;
    v26 = 0;
    v27 = 0;
    do
    {
      v28 = (int)v75;
      do
      {
        v29 = 0;
        v30 = (const char ***)v28;
        v31 = (const char ***)v71;
        while ( !sub_E0AF4(*v31, v31[1], *v30, v30[1]) )
        {
          v31 = (const char ***)sub_E04B8(v2, (int)v31);
          ++v29;
          v32 = sub_E04B8(v2, (int)v30);
          v33 = v32 == 0;
          if ( v32 )
            v33 = v31 == 0;
          v30 = (const char ***)v32;
          if ( v33 )
          {
            v49 = v29 <= v26;
            v50 = v26;
            if ( v29 > v26 )
            {
              v50 = v29;
              v27 = v28;
            }
            v26 = v50;
            if ( !v49 )
              v25 = v71;
            break;
          }
        }
        v28 = sub_E04B8(v2, v28);
      }
      while ( v28 );
      v71 = sub_E04B8(v2, v71);
    }
    while ( v71 );
    if ( v26 >= v77 )
    {
      if ( dword_487D4C )
      {
        v66 = (_DWORD *)sub_242FC8(0);
        sub_2594B0(*v66, "[btrace] [ftrace] ..matches: %d\n", v26);
      }
      v34 = *(_DWORD *)(v25 + 44) - *(_DWORD *)(v27 + 44);
      if ( v34 )
        sub_E0E28(v2, v75, v34);
      while ( 2 )
      {
        v38 = v27 == 0;
        if ( v27 )
          v38 = v25 == 0;
        if ( v38 )
          goto LABEL_15;
        if ( sub_E0AF4(
               *(const char ***)v25,
               *(const char ***)(v25 + 4),
               *(const char ***)v27,
               *(const char ***)(v27 + 4)) )
        {
          goto LABEL_130;
        }
        v39 = sub_E04B8(v2, v25);
        v40 = sub_E04B8(v2, v27);
        v41 = v40;
        if ( dword_487D4C )
        {
          v51 = (_DWORD *)sub_242FC8(v40);
          sub_2594B0(*v51, "[btrace] [ftrace] connecting...\n");
        }
        sub_E0D88((int *)v25, "..prev");
        sub_E0D88((int *)v27, "..next");
        if ( *(_DWORD *)(v25 + 12) )
          goto LABEL_129;
        if ( *(_DWORD *)(v27 + 8) )
        {
          sub_94700(
            (int)"btrace.c",
            768,
            "%s: Assertion `%s' failed.",
            "void ftrace_connect_bfun(btrace_thread_info*, btrace_function*, btrace_function*)",
            "next->prev == 0");
LABEL_129:
          sub_94700(
            (int)"btrace.c",
            767,
            "%s: Assertion `%s' failed.",
            "void ftrace_connect_bfun(btrace_thread_info*, btrace_function*, btrace_function*)",
            "prev->next == 0");
LABEL_130:
          sub_94700(
            (int)"btrace.c",
            877,
            "%s: Assertion `%s' failed.",
            "void ftrace_connect_backtrace(btrace_thread_info*, btrace_function*, btrace_function*)",
            "!ftrace_function_switched (lhs, rhs->msym, rhs->sym)");
          v70 = ptr;
          if ( ptr )
            sub_339E64(ptr);
          sub_338FFC(v70);
        }
        v42 = *(_DWORD *)(v25 + 40);
        v43 = *(_DWORD *)(v25 + 44) - *(_DWORD *)(v27 + 44);
        *(_DWORD *)(v25 + 12) = *(_DWORD *)(v27 + 40);
        *(_DWORD *)(v27 + 8) = v42;
        if ( v43 )
          sub_E0E28(v2, (int *)v27, v43);
        v44 = *(_DWORD *)(v25 + 16);
        v45 = *(_DWORD *)(v27 + 16);
        if ( !v44 )
        {
          if ( v45 )
          {
            v35 = a1[69];
            if ( -991146299 * ((a1[70] - v35) >> 2) >= v45 )
            {
              v36 = (int *)(v35 + 52 * (v45 - 1));
              if ( v36 )
              {
                v37 = *(_DWORD *)(v27 + 48);
                if ( dword_487D4C )
                {
                  v58 = (_DWORD *)sub_242FC8(-991146299);
                  sub_2594B0(*v58, "[btrace] [ftrace] using next's callers\n");
                }
                sub_E0F4C(v2, (int *)v25, v36, v37);
              }
            }
          }
          goto LABEL_70;
        }
        v46 = *(_DWORD *)(v25 + 48);
        if ( !v45 )
        {
          v47 = a1[69];
          if ( v44 <= -991146299 * ((a1[70] - v47) >> 2) )
          {
            v48 = (int *)(v47 + 52 * (v44 - 1));
            if ( v48 )
            {
              if ( dword_487D4C )
              {
                v59 = (_DWORD *)sub_242FC8(-991146299);
                sub_2594B0(*v59, "[btrace] [ftrace] using prev's callers\n");
              }
              sub_E0F4C(v2, (int *)v27, v48, v46);
            }
          }
          goto LABEL_70;
        }
        if ( (v46 & 2) != 0 )
        {
          v52 = a1[69];
          v53 = -991146299 * ((a1[70] - v52) >> 2);
          if ( v53 < v45 )
            v54 = 0;
          else
            v54 = (int *)(v52 + 52 * (v45 - 1));
          v79 = *(_DWORD *)(v27 + 48);
          v76 = v54;
          if ( !dword_487D4C )
            goto LABEL_98;
          v57 = (_DWORD *)sub_242FC8(v52);
          sub_2594B0(*v57, "[btrace] [ftrace] adding prev's tail calls to next\n");
          v44 = *(_DWORD *)(v25 + 16);
          if ( v44 )
          {
            v52 = a1[69];
            v53 = -991146299 * ((a1[70] - v52) >> 2);
LABEL_98:
            if ( v44 <= v53 )
            {
              v60 = (int *)(v52 + 52 * (v44 - 1));
              v61 = sub_E0F4C(v2, (int *)v27, v60, v46);
              if ( v60 )
              {
                v62 = v60[4];
                if ( v62 )
                {
                  if ( (v60[12] & 2) != 0 )
                  {
                    v63 = a1[69];
                    v61 = -991146299 * ((a1[70] - v63) >> 2);
                    while ( v62 <= v61 )
                    {
                      v60 = (int *)(v63 + 52 * (v62 - 1));
                      if ( !v60 )
                        break;
                      v62 = v60[4];
                      if ( !v62 )
                        goto LABEL_115;
                      if ( (v60[12] & 2) == 0 )
                        goto LABEL_119;
                    }
                  }
                  else
                  {
LABEL_119:
                    if ( dword_487D4C )
                    {
                      v65 = (_DWORD *)sub_242FC8(v61);
                      sub_2594B0(*v65, "[btrace] [ftrace] will fix up link in next iteration\n");
                    }
                  }
                }
                else
                {
LABEL_115:
                  if ( dword_487D4C )
                  {
                    v67 = (_DWORD *)sub_242FC8(v61);
                    sub_2594B0(*v67, "[btrace] [ftrace] fixing up link for tailcall chain\n");
                  }
                  sub_E0D88(v60, "..top");
                  sub_E0D88(v76, "..up");
                  sub_E0F4C(v2, v60, v76, v79);
                  v64 = v60[11] - v76[11];
                  if ( v64 != 1 )
                    sub_E0E28(v2, v76, v64 - 1);
                }
              }
              goto LABEL_70;
            }
          }
          sub_E0F4C(v2, (int *)v27, 0, v46);
        }
LABEL_70:
        v27 = v41;
        v25 = v39;
        continue;
      }
    }
    if ( v82 == v83 )
    {
      sub_E4118(&ptr);
    }
    else
    {
      v55 = v82 + 4;
      if ( v82 )
        *(_DWORD *)v82 = v80;
      v82 = v55;
    }
    goto LABEL_15;
  }
LABEL_21:
  if ( v2 )
  {
    v14 = a1[69];
    v15 = a1[70];
    if ( v14 != v15 )
    {
      v16 = v15 - v14;
      v17 = 0x7FFFFFFF;
      if ( -991146299 * ((v15 - v14) >> 2) != 1 )
      {
        do
        {
          v16 = *(_DWORD *)(v14 + 44);
          v14 += 52;
          if ( v17 >= v16 )
            v17 = v16;
        }
        while ( v15 - 52 != v14 );
      }
      if ( *(_DWORD *)(v15 - 28) - *(_DWORD *)(v15 - 32) != 16 && v17 >= *(_DWORD *)(v15 - 8) )
        v17 = *(_DWORD *)(v15 - 8);
      if ( dword_487D4C )
      {
        v69 = (_DWORD *)sub_242FC8(v16);
        v18 = -v17;
        sub_2594B0(*v69, "[btrace] [ftrace] setting global level offset: %d\n", v18);
      }
      else
      {
        v18 = -v17;
      }
      a1[72] = v18;
    }
  }
  if ( ptr )
    sub_339E64(ptr);
}
