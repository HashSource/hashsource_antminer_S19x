int __fastcall sub_1DA368(int a1, _DWORD *a2, int a3, int a4, int a5, int *a6, int a7)
{
  int v10; // r2
  __int64 v11; // r0
  int v12; // r2
  int *v14; // r0
  const char *v15; // r12
  int v16; // r0
  __sighandler_t v17; // r0
  int v18; // r11
  int v19; // r0
  int v20; // r10
  _DWORD *v21; // r0
  void *v22; // r0
  int v23; // r2
  int *v24; // r4
  int v25; // r3
  int *v26; // r3
  int v27; // r3
  bool v28; // zf
  int v29; // r0
  int v30; // r3
  int v31; // r8
  int v32; // r0
  int v33; // r8
  int v34; // r10
  void *v35; // r10
  int v36; // r0
  _BOOL4 v37; // r8
  unsigned int v38; // r4
  int v39; // r6
  const char *v40; // r0
  void *v41; // r10
  char *v42; // r0
  int v43; // r0
  int v44; // r3
  int v45; // r1
  unsigned int v46; // r3
  int *v47; // r2
  int v48; // r0
  int v49; // r3
  size_t v50; // r2
  void *v51; // r0
  int v52; // r10
  unsigned int v53; // r4
  int v54; // r9
  const char *v55; // r0
  _DWORD *v56; // r0
  int v57; // r3
  int v58; // r4
  char *v59; // r0
  int v60; // r1
  int v61; // r2
  _DWORD *v62; // r0
  void *v63; // r10
  void *v64; // r0
  const char *v65; // r0
  int v66; // r3
  int v67; // r0
  unsigned int v68; // r2
  int *v69; // r1
  int v70; // r3
  const char *v71; // r0
  int v72; // r4
  int *v73; // r0
  int v74; // r0
  int v75; // r3
  size_t v76; // r2
  void *v77; // r0
  _DWORD *v78; // r0
  _DWORD *v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r1
  int v83; // [sp+14h] [bp-50h]
  int v84; // [sp+18h] [bp-4Ch]
  unsigned int v85; // [sp+18h] [bp-4Ch]
  int v86; // [sp+1Ch] [bp-48h]
  int v87; // [sp+1Ch] [bp-48h]
  int v88; // [sp+20h] [bp-44h]
  void *v89; // [sp+20h] [bp-44h]
  int v90; // [sp+24h] [bp-40h]
  _DWORD *v91; // [sp+2Ch] [bp-38h]
  int v92; // [sp+30h] [bp-34h]
  char *v93; // [sp+34h] [bp-30h]
  __int64 v96; // [sp+48h] [bp-1Ch] BYREF
  int v97; // [sp+50h] [bp-14h]
  __int64 v98; // [sp+54h] [bp-10h] BYREF
  int v99; // [sp+5Ch] [bp-8h]
  int varg_r2; // [sp+88h] [bp+24h]
  int varg_r3; // [sp+8Ch] [bp+28h]

  varg_r2 = a3;
  varg_r3 = a4;
  v10 = dword_48809C;
  dword_48809C = 1;
  v83 = v10;
  if ( dword_487D4C )
  {
    v14 = (int *)sub_242FC8(a3);
    v15 = "forward";
    v16 = *v14;
    if ( dword_48808C )
      v15 = "reverse";
    sub_2594B0(
      v16,
      "Process record: record_full_wait record_full_resume_step = %d, record_full_resumed = %d, direction=%s\n",
      dword_488090,
      dword_4880E4,
      v15);
    if ( !dword_4880E4 )
    {
LABEL_3:
      if ( (a7 & 1) != 0 )
      {
        v11 = qword_46BBCC;
        v12 = dword_46BBD4;
        *a6 = 11;
        v98 = v11;
        v99 = v12;
        *(_QWORD *)a1 = v11;
        *(_DWORD *)(a1 + 8) = v12;
        dword_48809C = v83;
        return a1;
      }
      goto LABEL_147;
    }
  }
  else if ( !dword_4880E4 )
  {
    goto LABEL_3;
  }
  dword_488094 = 0;
  v17 = signal(2, (__sighandler_t)sub_1D85F8);
  dword_488088 = 0;
  if ( !off_46DAB8[1] )
  {
    v28 = dword_48794C == 1;
    if ( dword_48794C != 1 )
      v28 = a2 == (_DWORD *)&unk_4880EC;
    if ( !v28 )
    {
      if ( dword_488090 )
      {
        (*(void (__fastcall **)(__int64 *, _DWORD, int, int, int, int *, int))(*a2 + 56))(&v98, *a2, a3, a4, a5, a6, a7);
        v30 = *a6;
        goto LABEL_94;
      }
      v87 = off_489B68(&dword_4899A0, qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
      while ( 1 )
      {
        v29 = (*(int (__fastcall **)(__int64 *, _DWORD, int, int, int, int *, int))(*a2 + 56))(
                &v96,
                *a2,
                a3,
                a4,
                a5,
                a6,
                a7);
        v30 = *a6;
        if ( *a6 == 11 )
          break;
        v31 = dword_48A4D4;
        if ( dword_48A4D4 )
        {
          do
          {
            if ( *(_DWORD *)(v31 + 44) != 2 )
              v29 = sub_23DD54(v31);
            v31 = *(_DWORD *)(v31 + 4);
          }
          while ( v31 );
          v30 = *a6;
        }
        if ( dword_488090 || v30 != 1 || a6[1] != 5 )
          goto LABEL_128;
        v32 = sub_1DDCF4(v29);
        v33 = sub_1DDBBC(v32);
        v85 = sub_1DFB3C(v33);
        v34 = *(_DWORD *)(v33 + 4);
        if ( off_489A24(&dword_4899A0) || sub_1D3B78(v34, v85, &dword_488088) )
          goto LABEL_139;
        v35 = sub_92E28();
        ((void (__fastcall *)(int, _DWORD))loc_1D9670)(v33, 0);
        sub_92E40((int)v35);
        v36 = ((int (__fastcall *)(int))loc_16A0D4)(v87);
        if ( v36 )
        {
          sub_23F298(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4, 0);
          sub_15D778();
          v37 = sub_DCAA4(v87) == 0;
          v36 = sub_23F298(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4, 1);
        }
        else
        {
          v37 = 1;
        }
        if ( dword_487D4C )
        {
          v78 = (_DWORD *)sub_242FC8(v36);
          sub_2594B0(*v78, "Process record: record_full_wait issuing one more step in the target beneath\n");
        }
        (*(void (__fastcall **)(_DWORD, int, int, int, _BOOL4, _DWORD))(*a2 + 48))(*a2, a3, a4, a5, v37, 0);
        (*(void (**)(void))(*a2 + 52))();
      }
      if ( !dword_487D4C )
        goto LABEL_128;
      v79 = (_DWORD *)sub_242FC8(v29);
      sub_2594B0(*v79, "Process record: record_full_wait target beneath not done yet\n");
LABEL_139:
      v30 = *a6;
      goto LABEL_128;
    }
  }
  v18 = sub_1DDBBC(v17);
  v19 = sub_1DD58C(v18);
  v20 = *(_DWORD *)(v18 + 4);
  v90 = v19;
  v86 = v20;
  v21 = sub_9253C((int)sub_1D8B90, 0);
  dword_488088 = 0;
  v91 = v21;
  v28 = dword_48794C == 0;
  *a6 = 1;
  if ( v28 )
  {
    v38 = sub_1DFB3C(v18);
    v21 = (_DWORD *)sub_1D3B78(v20, v38, &dword_488088);
    if ( v21 )
    {
      if ( dword_487D4C )
      {
        v39 = *(_DWORD *)sub_242FC8(v21);
        v40 = (const char *)sub_25AC8C(v90, v38);
        sub_2594B0(v39, "Process record: break at %s.\n", v40);
      }
LABEL_25:
      if ( dword_488094 )
        goto LABEL_92;
      v27 = off_46DAB8[4];
      if ( v27 )
        goto LABEL_28;
LABEL_27:
      v27 = 5;
      goto LABEL_28;
    }
  }
  v22 = (void *)sub_22EFF4(v21);
  v23 = dword_48794C;
  v24 = off_46DAB8;
  if ( !dword_48794C && off_46DAB8[1] )
  {
    v24 = (int *)off_46DAB8[1];
    off_46DAB8 = v24;
  }
  v84 = 1;
LABEL_15:
  while ( 2 )
  {
    if ( v23 != 1 )
    {
LABEL_16:
      if ( v24[1] )
        goto LABEL_17;
LABEL_24:
      *a6 = 12;
      goto LABEL_25;
    }
    while ( 1 )
    {
      if ( v24 == &dword_4880B8 )
        goto LABEL_24;
LABEL_17:
      v25 = v24[2];
      if ( v25 == 1 )
      {
        v41 = (void *)*((unsigned __int16 *)v24 + 9);
        if ( *((_WORD *)v24 + 9) )
        {
          v22 = sub_9836C(*((unsigned __int16 *)v24 + 9));
          v41 = v22;
        }
        if ( (unsigned int)dword_487D4C > 1 )
        {
          v88 = *(_DWORD *)sub_242FC8(v22);
          v42 = sub_98EEC((int)v24);
          sub_2594B0(
            v88,
            "Process record: record_full_reg %s to inferior num = %d.\n",
            v42,
            *((unsigned __int16 *)v24 + 8));
        }
        v43 = sub_1DE030(v18, *((unsigned __int16 *)v24 + 8), v41);
        v44 = v24[2];
        v45 = *((unsigned __int16 *)v24 + 8);
        if ( v44 == 1 )
        {
          v46 = *((unsigned __int16 *)v24 + 9);
          if ( v46 <= 8 )
            v47 = v24 + 5;
          else
            v47 = (int *)v24[5];
        }
        else
        {
          if ( v44 != 2 )
          {
            v80 = ((int (__fastcall *)(int, int))loc_161F0)(v43, v45);
            if ( v41 )
              sub_339E64(v41);
LABEL_145:
            dword_48809C = v83;
            sub_338FFC(v80);
          }
          v46 = v24[5];
          if ( v46 <= 4 )
            v47 = v24 + 7;
          else
            v47 = (int *)v24[7];
        }
        v48 = sub_1DE614(v18, v45, v47, v46);
        v49 = v24[2];
        if ( v49 == 1 )
        {
          v50 = *((unsigned __int16 *)v24 + 9);
          if ( v50 <= 8 )
            v51 = v24 + 5;
          else
            v51 = (void *)v24[5];
        }
        else
        {
          if ( v49 != 2 )
          {
            ((void (__fastcall *)(int))loc_161F0)(v48);
LABEL_147:
            v80 = sub_94700(
                    (int)"record-full.c",
                    1048,
                    "%s: Assertion `%s' failed.",
                    "ptid_t record_full_wait_1(target_ops*, ptid_t, target_waitstatus*, int)",
                    "(options & TARGET_WNOHANG) != 0");
            goto LABEL_145;
          }
          v50 = *((unsigned __int16 *)v24 + 9);
          if ( (unsigned int)v24[5] <= 4 )
            v51 = v24 + 7;
          else
            v51 = (void *)v24[7];
        }
        memcpy(v51, v41, v50);
        sub_339E64(v41);
        goto LABEL_69;
      }
      if ( v25 != 2 )
        goto LABEL_70;
      if ( !v24[6] )
        break;
      if ( v23 == 1 )
        goto LABEL_85;
LABEL_21:
      v26 = (int *)v24[1];
      if ( !v26 )
        goto LABEL_15;
      off_46DAB8 = (int *)v24[1];
      v24 = v26;
      if ( v23 != 1 )
        goto LABEL_16;
    }
    v63 = sub_93028(v24[5]);
    v64 = sub_9253C((int)sub_1D87E8, (int)v63);
    v89 = v64;
    if ( (unsigned int)dword_487D4C > 1 )
    {
      v92 = *(_DWORD *)sub_242FC8(v64);
      v93 = sub_98EEC((int)v24);
      v65 = (const char *)sub_25AC8C(v90, v24[4]);
      sub_2594B0(v92, "Process record: record_full_mem %s to inferior addr = %s len = %d.\n", v93, v65, v24[5]);
    }
    if ( sub_1D38B4(v90, v24[4], (int)v63, v24[5]) )
    {
      v24[6] = 1;
    }
    else
    {
      v66 = v24[2];
      v67 = v24[4];
      if ( v66 == 1 )
      {
        v68 = v24[5];
        if ( *((unsigned __int16 *)v24 + 9) > 8u )
          v69 = (int *)v24[5];
        else
          v69 = v24 + 5;
      }
      else
      {
        if ( v66 != 2 )
          goto LABEL_149;
        v68 = v24[5];
        if ( v68 <= 4 )
          v69 = v24 + 7;
        else
          v69 = (int *)v24[7];
      }
      if ( sub_230484(v67, v69, v68) )
      {
        v70 = dword_487D4C;
        v24[6] = 1;
        if ( v70 )
        {
          v71 = (const char *)sub_25AC8C(v90, v24[4]);
          sub_946B0("Process record: error writing memory at addr = %s len = %d.", v71, v24[5]);
        }
      }
      else
      {
        v75 = v24[2];
        if ( v75 == 1 )
        {
          v76 = v24[5];
          if ( *((unsigned __int16 *)v24 + 9) > 8u )
            v77 = (void *)v24[5];
          else
            v77 = v24 + 5;
        }
        else
        {
          if ( v75 != 2 )
          {
            v67 = ((int (*)(void))loc_161F0)();
LABEL_149:
            v81 = ((int (__fastcall *)(int))loc_161F0)(v67);
            if ( v82 != 1 )
            {
              sub_339E78(v81);
              sub_92E60();
            }
            v72 = sub_339E78(v81);
            v73 = (int *)sub_242FB4(v72);
            v74 = sub_154B38(*v73, *(_DWORD *)v72, *(_DWORD *)(v72 + 4), *(const char **)(v72 + 8));
            sub_339EF8(v74);
            v30 = 1;
            *a6 = 1;
            a6[1] = 0;
LABEL_128:
            v98 = v96;
            v99 = v97;
            goto LABEL_94;
          }
          v76 = v24[5];
          if ( v76 <= 4 )
            v77 = v24 + 7;
          else
            v77 = (void *)v24[7];
        }
        memcpy(v77, v63, v76);
        if ( sub_CDE94(*(_DWORD *)(v18 + 4), v24[4], v24[5]) )
          dword_488088 = 3;
      }
    }
    sub_92620(v89);
LABEL_69:
    v24 = off_46DAB8;
    v25 = off_46DAB8[2];
LABEL_70:
    if ( v25 )
    {
LABEL_84:
      v23 = dword_48794C;
      if ( dword_48794C == 1 )
        goto LABEL_85;
      goto LABEL_21;
    }
    if ( (unsigned int)dword_487D4C > 1 )
    {
      v58 = *(_DWORD *)sub_242FC8(v22);
      v59 = sub_98EEC((int)off_46DAB8);
      v22 = (void *)sub_2594B0(v58, "Process record: record_full_end %s to inferior.\n", v59);
    }
    if ( v84 && dword_48794C == 1 )
    {
      v24 = off_46DAB8;
      v84 = 0;
LABEL_85:
      v57 = *v24;
      if ( *v24 )
      {
        off_46DAB8 = (int *)*v24;
        v24 = (int *)v57;
      }
      v23 = dword_48794C;
      continue;
    }
    break;
  }
  if ( dword_488090 )
  {
    if ( (unsigned int)dword_487D4C > 1 )
    {
      v62 = (_DWORD *)sub_242FC8(v22);
      sub_2594B0(*v62, "Process record: step.\n");
    }
    v52 = 0;
  }
  else
  {
    v52 = 1;
  }
  v53 = sub_1DFB3C(v18);
  v22 = (void *)sub_1D3B78(v86, v53, &dword_488088);
  if ( v22 )
  {
    if ( dword_487D4C )
    {
      v54 = *(_DWORD *)sub_242FC8(v22);
      v55 = (const char *)sub_25AC8C(v90, v53);
      v22 = (void *)sub_2594B0(v54, "Process record: break at %s.\n", v55);
      if ( dword_488088 == 3 )
      {
LABEL_82:
        if ( dword_487D4C )
        {
          v56 = (_DWORD *)sub_242FC8(v22);
          sub_2594B0(*v56, "Process record: hit hw watchpoint.\n");
        }
      }
    }
    goto LABEL_25;
  }
  if ( dword_488088 == 3 )
    goto LABEL_82;
  v24 = off_46DAB8;
  v27 = off_46DAB8[4];
  if ( !v27 )
  {
    if ( !v52 )
    {
      if ( dword_488094 )
        goto LABEL_92;
      goto LABEL_27;
    }
    goto LABEL_84;
  }
  if ( !dword_488094 )
  {
LABEL_28:
    a6[1] = v27;
    goto LABEL_93;
  }
LABEL_92:
  a6[1] = 2;
LABEL_93:
  sub_92640(v91);
  signal(2, (__sighandler_t)sub_1539F4);
  v30 = *a6;
  v98 = qword_4878EC;
  v99 = unk_4878F4;
LABEL_94:
  v60 = HIDWORD(v98);
  v61 = v99;
  dword_48809C = v83;
  if ( v30 != 11 )
    dword_4880E4 = 0;
  *(_DWORD *)a1 = v98;
  *(_DWORD *)(a1 + 4) = v60;
  *(_DWORD *)(a1 + 8) = v61;
  return a1;
}
