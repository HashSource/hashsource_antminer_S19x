_DWORD *sub_1D7404(_DWORD *a1, _DWORD *a2, ...)
{
  int v2; // r10
  void *v4; // r0
  unsigned int *v6; // r0
  _DWORD *v7; // r4
  unsigned int *v8; // r12
  unsigned int v9; // r5
  int v10; // r9
  unsigned int v11; // r8
  int *v12; // r4
  bool v13; // zf
  int v14; // r6
  int v15; // r7
  int v16; // r6
  const char *v17; // r5
  __int64 v18; // kr00_8
  int v19; // r6
  const char *v20; // r0
  unsigned int v21; // r2
  unsigned int v22; // r3
  int v23; // lr
  int v24; // r2
  int v25; // r3
  int v26; // r3
  unsigned int v27; // r4
  unsigned int v28; // r2
  unsigned int v29; // r3
  unsigned int *v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r0
  int v33; // r2
  int v34; // r3
  unsigned int v35; // r3
  unsigned int *v36; // r2
  unsigned int v37; // r1
  int v38; // r0
  int v39; // r0
  _DWORD *v40; // r5
  int v41; // r3
  int v42; // r6
  int v43; // r10
  int v44; // r3
  const char *v45; // r2
  int v46; // r0
  void *v47; // r0
  void *v48; // r0
  _DWORD *v49; // r5
  int v50; // r0
  int v51; // r7
  const char *v52; // r4
  const char *v53; // r6
  int v54; // r1
  int v55; // r2
  int v56; // r0
  _DWORD *v57; // r1
  const char *v58; // r2
  unsigned int v59; // r2
  _DWORD *v60; // r0
  _DWORD *v61; // r0
  int v62; // r0
  int v63; // [sp+14h] [bp-50h]
  int v64; // [sp+14h] [bp-50h]
  int v65; // [sp+18h] [bp-4Ch]
  void *v67; // [sp+28h] [bp-3Ch]
  unsigned int *v68; // [sp+30h] [bp-34h] BYREF
  unsigned int *v69; // [sp+34h] [bp-30h] BYREF
  unsigned __int64 v70; // [sp+38h] [bp-2Ch]
  int v71; // [sp+40h] [bp-24h]
  int v72; // [sp+44h] [bp-20h]
  __int64 ptr; // [sp+48h] [bp-1Ch] BYREF
  _DWORD v74[5]; // [sp+50h] [bp-14h] BYREF
  int varg_r2; // [sp+88h] [bp+24h] BYREF
  va_list varg_r2a; // [sp+88h] [bp+24h]
  int varg_r3; // [sp+8Ch] [bp+28h]
  int v78; // [sp+90h] [bp+2Ch]
  int *v79; // [sp+94h] [bp+30h]
  int v80; // [sp+98h] [bp+34h]
  va_list va1; // [sp+9Ch] [bp+38h] BYREF

  va_start(va1, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  v78 = va_arg(va1, _DWORD);
  v79 = va_arg(va1, int *);
  v80 = va_arg(va1, _DWORD);
  v4 = sub_9253C((int)nullsub_39, 0);
  v67 = v4;
  if ( dword_487D4C )
  {
    v19 = *(_DWORD *)sub_242FC8(v4);
    v20 = (const char *)sub_23095C(varg_r2, varg_r3, v78);
    sub_2594B0(v19, "[record-btrace] wait %s (0x%x)\n", v20, v80);
  }
  if ( dword_48794C != 1 && !sub_1D5110((int)a2, dword_46BBCC, dword_46BBD0, dword_46BBD4) )
  {
    (*(void (__fastcall **)(_DWORD *, _DWORD, int, int, int, int *, int))(*a2 + 56))(
      a1,
      *a2,
      varg_r2,
      varg_r3,
      v78,
      v79,
      v80);
    return a1;
  }
  v68 = 0;
  v69 = 0;
  sub_9253C((int)sub_1D4468, (int)&v68);
  v6 = (unsigned int *)sub_9253C((int)sub_1D4468, (int)&v69);
  v7 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      if ( v7[11] != 2 )
      {
        v6 = (unsigned int *)sub_9904C(v7 + 2, (int *)varg_r2a);
        if ( v6 )
        {
          if ( (v7[74] & 0x1F) != 0 )
          {
            v6 = v68;
            if ( !v68 || (v21 = v68[1], v22 = *v68, v21 == *v68) )
            {
              v6 = sub_99FE0(v68, 1);
              v22 = *v6;
              v21 = v6[1];
              v68 = v6;
            }
            if ( v22 >= v21 )
            {
              sub_94700(
                (int)"record-btrace.c",
                2464,
                "%s: Assertion `%s' failed.",
                "thread_info** VEC_tp_t_quick_push(VEC_tp_t*, tp_t, const char*, unsigned int)",
                "quick_push");
              goto LABEL_114;
            }
            *v6 = v22 + 1;
            v6[v22 + 2] = (unsigned int)v7;
          }
        }
      }
      v7 = (_DWORD *)v7[1];
    }
    while ( v7 );
  }
  v8 = v68;
  if ( v68 && *v68 )
  {
    while ( 2 )
    {
      v9 = 0;
      v10 = v2;
LABEL_15:
      if ( v8 )
      {
        while ( *v8 > v9 )
        {
          v11 = v9 + 2;
          v12 = (int *)v8[v9 + 2];
          v13 = dword_487D4C == 0;
          v14 = v12[74];
          v15 = v14 & 0x1F;
          v12[74] = v14 & 0xFFFFFFE0;
          if ( !v13 )
          {
            v64 = *(_DWORD *)sub_242FC8(v6);
            v65 = sub_240128(v12);
            v56 = sub_23095C(v12[2], v12[3], v12[4]);
            v58 = (const char *)(v15 - 1);
            if ( (unsigned int)(v15 - 1) > 0xF )
              v58 = "<invalid>";
            else
              v57 = &unk_3CFDA4;
            if ( (unsigned int)(v15 - 1) <= 0xF )
              v58 = (const char *)v57[(_DWORD)v58 + 70];
            sub_2594B0(v64, "[record-btrace] stepping thread %s (%s): %x (%s)\n", v65, v56, v14 & 0x1F, v58);
          }
          if ( (v14 & 0xF) == 0 || !sub_E1F40((int)v12) )
          {
            switch ( v14 & 0x1F )
            {
              case 1:
                sub_1D4F24(&ptr, v12);
                v23 = ptr;
                if ( (_DWORD)ptr == 10 )
                  goto LABEL_49;
                goto LABEL_41;
              case 2:
                sub_1D71B8(&ptr, v12);
                v23 = ptr;
                if ( (_DWORD)ptr != 10 )
                  goto LABEL_41;
LABEL_49:
                v10 = 5;
                v23 = 1;
                goto LABEL_30;
              case 4:
                sub_1D4F24(&ptr, v12);
                v23 = ptr;
                if ( (_DWORD)ptr != 10 )
                  goto LABEL_41;
                v23 = 11;
                v12[74] |= 4u;
                goto LABEL_30;
              case 8:
                sub_1D71B8(&ptr, v12);
                v23 = ptr;
                if ( (_DWORD)ptr == 10 )
                {
                  v23 = 11;
                  v12[74] |= 8u;
                }
                else
                {
LABEL_41:
                  if ( v23 == 12 )
                    v34 = v12[74];
                  v10 = HIDWORD(ptr);
                  if ( v23 == 12 )
                    v12[74] = v34 | v15;
                  LODWORD(ptr) = v23;
                  v70 = __PAIR64__(HIDWORD(ptr), v23);
                  v71 = v74[0];
                  v72 = v74[1];
                }
                goto LABEL_30;
              case 0x10:
                v10 = 0;
                v23 = 1;
                goto LABEL_30;
              default:
                v46 = sub_94700((int)"record-btrace.c", 2362, "invalid stepping type.");
                goto LABEL_101;
            }
          }
          v23 = 12;
LABEL_30:
          v70 = __PAIR64__(v10, v23);
          v6 = (unsigned int *)v23;
          v24 = v71;
          v25 = v72;
          v8 = v68;
          *v79 = v23;
          v79[1] = v10;
          v79[2] = v24;
          v79[3] = v25;
          if ( v23 == 11 )
          {
            ++v9;
            goto LABEL_15;
          }
          if ( v23 != 12 )
          {
            v35 = *v8;
            if ( *v8 <= v9 )
              goto LABEL_109;
            v36 = &v8[v9];
            v37 = v8[v35 + 1];
            v12 = (int *)v36[2];
            *v8 = v35 - 1;
            v36[2] = v37;
            if ( v12 )
              goto LABEL_56;
            goto LABEL_15;
          }
          if ( *v8 <= v9 )
            goto LABEL_108;
          v26 = *v8 - 1;
          v27 = v8[v11];
          *v8 = v26;
          memmove(&v8[v11], &v8[v11 + 1], 4 * (v26 - v9));
          v6 = v69;
          if ( !v69 || (v28 = v69[1], v29 = *v69, v28 == *v69) )
          {
            v6 = sub_99FE0(v69, 1);
            v29 = *v6;
            v28 = v6[1];
            v69 = v6;
          }
          if ( v29 >= v28 )
          {
            sub_94700(
              (int)"record-btrace.c",
              2512,
              "%s: Assertion `%s' failed.",
              "thread_info** VEC_tp_t_quick_push(VEC_tp_t*, tp_t, const char*, unsigned int)",
              "quick_push");
LABEL_108:
            sub_94700(
              (int)"record-btrace.c",
              2512,
              "%s: Assertion `%s' failed.",
              "thread_info* VEC_tp_t_ordered_remove(VEC_tp_t*, unsigned int, const char*, unsigned int)",
              "ordered_remove");
LABEL_109:
            sub_94700(
              (int)"record-btrace.c",
              2516,
              "%s: Assertion `%s' failed.",
              "thread_info* VEC_tp_t_unordered_remove(VEC_tp_t*, unsigned int, const char*, unsigned int)",
              "unordered_remove");
LABEL_110:
            v62 = ptr;
            if ( (_DWORD *)ptr != v74 )
              sub_339E64((void *)ptr);
            sub_338FFC(v62);
          }
          v8 = v68;
          *v6 = v29 + 1;
          v6[v29 + 2] = v27;
          if ( !v8 )
            goto LABEL_37;
        }
        v2 = v10;
        if ( *v8 )
          continue;
      }
      break;
    }
LABEL_37:
    v30 = v69;
    if ( !v69 || (v31 = *v69) == 0 )
    {
LABEL_114:
      sub_94700(
        (int)"record-btrace.c",
        2529,
        "%s: Assertion `%s' failed.",
        "ptid_t record_btrace_wait(target_ops*, ptid_t, target_waitstatus*, int)",
        "!VEC_empty (tp_t, no_history)");
      goto LABEL_110;
    }
    v12 = (int *)v69[2];
    v32 = v69[v31 + 1];
    *v69 = v31 - 1;
    v33 = v12[74];
    v30[2] = v32;
    v12[74] = v33 & 0xFFFFFFF0;
    *v79 = 12;
LABEL_56:
    v38 = sub_1D4ADC((int)v12);
    v39 = sub_232950(v38);
    if ( !v39 )
    {
      v40 = (_DWORD *)dword_48A4D4;
      if ( dword_48A4D4 )
      {
        do
        {
          if ( v40[11] != 2 )
          {
            v41 = v40[74];
            v42 = v41 & 0x1F;
            if ( (v41 & 0x1F) != 0 )
            {
              if ( dword_487D4C )
              {
                v63 = *(_DWORD *)sub_242FC8(v39);
                v43 = sub_240128(v40);
                v44 = sub_23095C(v40[2], v40[3], v40[4]);
                if ( (unsigned int)(v42 - 1) > 0xF )
                  v45 = "<invalid>";
                else
                  v45 = (char *)&unk_3CFDA4 + 4 * v42 - 4;
                if ( (unsigned int)(v42 - 1) <= 0xF )
                  v45 = (const char *)*((_DWORD *)v45 + 70);
                sub_2594B0(v63, "[record-btrace] cancel resume thread %s (%s): %x (%s)\n", v43, v44, v42, v45);
                v41 = v40[74];
              }
              v40[74] = v41 & 0xFFFFFFE0;
              v39 = sub_1D4ADC((int)v40);
            }
          }
          v40 = (_DWORD *)v40[1];
        }
        while ( v40 );
      }
    }
    v46 = off_489AFC(&dword_4899A0);
    if ( !v46 )
      goto LABEL_70;
    if ( !v68 )
    {
      if ( !v69 || !*v69 )
        goto LABEL_70;
      goto LABEL_98;
    }
    v59 = *v68;
    if ( v69 )
    {
      v9 = *v69;
      if ( !(v59 | *v69) )
      {
LABEL_70:
        v47 = (void *)v12[75];
        if ( v47 )
          free(v47);
        v48 = (void *)v12[76];
        if ( v48 )
          free(v48);
        v49 = v12 + 2;
        v12[75] = 0;
        v12[76] = 0;
        v50 = sub_1DDBE4(v12[2], v12[3], v12[4]);
        if ( dword_487D4C )
        {
          v51 = *(_DWORD *)sub_242FC8(v50);
          v52 = (const char *)sub_240128(v12);
          v53 = (const char *)sub_23095C(*v49, v49[1], v49[2]);
          sub_277578(&ptr, v79);
          sub_2594B0(v51, "[record-btrace] wait ended by thread %s (%s): %s\n", v52, v53, (const char *)ptr);
          if ( (_DWORD *)ptr != v74 )
            sub_339E64((void *)ptr);
        }
        sub_92620(v67);
        v54 = v49[1];
        v55 = v49[2];
        *a1 = *v49;
        a1[1] = v54;
        a1[2] = v55;
        return a1;
      }
      if ( !v59 )
      {
LABEL_102:
        if ( !v9 )
          goto LABEL_95;
LABEL_98:
        if ( dword_487D4C )
        {
          v60 = (_DWORD *)sub_242FC8(v46);
          sub_2594B0(*v60, "[record-btrace] no-history pending\n");
        }
        goto LABEL_95;
      }
    }
    else
    {
      if ( !v59 )
        goto LABEL_70;
      v9 = (unsigned int)v69;
    }
    if ( !dword_487D4C )
    {
LABEL_95:
      sub_1532BC((_DWORD *)dword_487D94);
      goto LABEL_70;
    }
LABEL_101:
    v61 = (_DWORD *)sub_242FC8(v46);
    v46 = sub_2594B0(*v61, "[record-btrace] movers pending\n");
    goto LABEL_102;
  }
  v13 = dword_487D4C == 0;
  *v79 = 13;
  if ( !v13 )
  {
    v16 = *(_DWORD *)sub_242FC8(v6);
    v17 = (const char *)sub_23095C(dword_475848, qword_47584C, HIDWORD(qword_47584C));
    sub_277578(&ptr, v79);
    sub_2594B0(v16, "[record-btrace] wait ended by %s: %s\n", v17, (const char *)ptr);
    if ( (_DWORD *)ptr != v74 )
      sub_339E64((void *)ptr);
  }
  sub_92620(v67);
  v18 = qword_47584C;
  *a1 = dword_475848;
  *(_QWORD *)(a1 + 1) = v18;
  return a1;
}
