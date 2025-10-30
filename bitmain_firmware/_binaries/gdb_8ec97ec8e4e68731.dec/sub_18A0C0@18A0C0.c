void __fastcall sub_18A0C0(int a1)
{
  int v1; // r0
  int v2; // r8
  void *v3; // r0
  _DWORD *v4; // r11
  int v5; // r4
  _DWORD *v6; // r4
  bool v7; // zf
  _DWORD *v8; // r0
  int v9; // r6
  const char *v10; // r0
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r6
  int v15; // r0
  int v16; // r6
  int v17; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r0
  int v21; // r3
  _DWORD *v22; // r6
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int *v26; // r4
  int v27; // r0
  int v28; // r11
  int v29; // r7
  int v30; // r0
  int v31; // r3
  int v32; // r0
  int v33; // r3
  int *v34; // r0
  int v35; // r9
  int v36; // r0
  const char *v37; // r7
  const char *v38; // r4
  _BOOL4 v39; // r0
  _DWORD *v40; // r0
  int v41; // r7
  const char *v42; // r0
  _DWORD *v43; // r0
  void *v44; // r0
  int v45; // [sp+14h] [bp-70h]
  const char *v46; // [sp+20h] [bp-64h]
  int v47; // [sp+24h] [bp-60h]
  void *v48; // [sp+2Ch] [bp-58h]
  __int64 v49; // [sp+34h] [bp-50h] BYREF
  int v50; // [sp+3Ch] [bp-48h]
  int v51; // [sp+40h] [bp-44h]
  int v52; // [sp+44h] [bp-40h]
  int v53; // [sp+48h] [bp-3Ch]
  void *v54; // [sp+4Ch] [bp-38h] BYREF
  int v55; // [sp+50h] [bp-34h]
  int v56; // [sp+54h] [bp-30h]
  int v57; // [sp+58h] [bp-2Ch] BYREF
  int v58; // [sp+5Ch] [bp-28h]
  void *ptr; // [sp+68h] [bp-1Ch] BYREF
  int v60; // [sp+6Ch] [bp-18h]
  int v61[5]; // [sp+70h] [bp-14h] BYREF

  v1 = sub_232950(a1);
  if ( !v1 )
  {
    sub_94700((int)"infrun.c", 4476, "%s: Assertion `%s' failed.", "void stop_all_threads()", "target_is_non_stop_p ()");
    v44 = ptr;
    if ( ptr != v61 )
      sub_339E64(ptr);
    sub_338FFC(v44);
  }
  if ( dword_487930 )
  {
    v43 = (_DWORD *)sub_242FC8(v1);
    sub_2594B0(*v43, "infrun: stop_all_threads\n");
  }
  v2 = 0;
  v49 = qword_4878EC;
  v50 = dword_4878F4;
  v45 = 0;
  v48 = sub_9253C((int)sub_185274, (int)&v49);
  sub_232938(1);
  v3 = sub_9253C((int)sub_186508, 0);
  do
  {
    if ( dword_487930 )
    {
      v40 = (_DWORD *)sub_242FC8(v3);
      v3 = (void *)sub_2594B0(*v40, "infrun: stop_all_threads, pass=%d, iterations=%d\n", v2, v45);
    }
LABEL_7:
    v3 = (void *)sub_240794(v3);
    v4 = (_DWORD *)dword_48A4D4;
    if ( !dword_48A4D4 )
      goto LABEL_34;
    do
    {
      v5 = 0;
      do
      {
        while ( 1 )
        {
          if ( v4[11] == 2 )
            goto LABEL_14;
          if ( !v4[9] )
            break;
          if ( v4[56] )
          {
            if ( dword_487930 )
            {
              v14 = *(_DWORD *)sub_242FC8(v3);
              v15 = sub_23095C(v4[2], v4[3], v4[4]);
              v3 = (void *)sub_2594B0(v14, "infrun:   %s executing, already stopping\n", v15);
              if ( !v4[56] )
                goto LABEL_14;
            }
          }
          else
          {
            v6 = v4 + 2;
            if ( dword_487930 )
            {
              v18 = *(_DWORD *)sub_242FC8(v3);
              v19 = sub_23095C(*v6, v4[3], v4[4]);
              sub_2594B0(v18, "infrun:   %s executing, need stop\n", v19);
            }
            v3 = (void *)sub_231EB4(*v6, v4[3], v4[4]);
            v4[56] = 1;
          }
          v5 = 1;
LABEL_14:
          v4 = (_DWORD *)v4[1];
          if ( !v4 )
            goto LABEL_20;
        }
        if ( dword_487930 )
        {
          v16 = *(_DWORD *)sub_242FC8(v3);
          v17 = sub_23095C(v4[2], v4[3], v4[4]);
          v3 = (void *)sub_2594B0(v16, "infrun:   %s not executing\n", v17);
        }
        v4[10] = 0;
        v4 = (_DWORD *)v4[1];
      }
      while ( v4 );
LABEL_20:
      if ( !v5 )
        break;
      if ( v2 > 0 )
        v2 = -1;
      dword_4896D8 = 1;
      ptr = (void *)dword_46BBCC;
      v60 = dword_46BBD0;
      v61[0] = dword_46BBD4;
      sub_234884();
      if ( off_48A564 )
        off_48A564(&v54, ptr, v60, v61[0], &v57, v4);
      else
        sub_23090C(&v54, ptr, v60, v61[0], &v57, v4);
      if ( dword_487930 )
        sub_187F00((int)ptr, v60, v61[0], (int)v54, v55, v56, (int)&v57);
      v3 = v54;
      v51 = (int)v54;
      v52 = v55;
      v53 = v56;
      if ( v57 == 13 )
        goto LABEL_7;
      v7 = (v57 & 0xFFFFFFFD) == 0;
      if ( (v57 & 0xFFFFFFFD) != 0 )
        v7 = v57 == 15;
      if ( !v7 )
      {
        v20 = sub_23E408(v51, v52, v53);
        v22 = (_DWORD *)v20;
        if ( !v20 )
          v22 = (_DWORD *)sub_23FC70(v51, v52, v53, v21);
        v23 = v51;
        v24 = v52;
        v25 = v53;
        v22[56] = 0;
        v22[9] = 0;
        v22[10] = 0;
        v22[18] = 0;
        if ( *(_BYTE *)(sub_183A88(v23, v24, v25) + 140) )
        {
          sub_23F8E4(v22);
          sub_181CB4(0);
        }
        if ( v57 != 1 || v58 )
        {
          if ( dword_487930 )
          {
            v27 = sub_277578(&ptr, &v57);
            v26 = v22 + 2;
            v28 = *(_DWORD *)sub_242FC8(v27);
            v46 = (const char *)ptr;
            v47 = ps_getpid_0((int)(v22 + 2));
            v29 = sub_98F68((int)(v22 + 2));
            v30 = sub_98F70((int)(v22 + 2));
            sub_2594B0(v28, "infrun: target_wait %s, saving status for %d.%ld.%ld\n", v46, v47, v29, v30);
            if ( ptr != v61 )
              sub_339E64(ptr);
          }
          else
          {
            v26 = v22 + 2;
          }
          sub_189DEC(v22, &v57);
          if ( v57 == 1 )
            v31 = v58;
          else
            v31 = 0;
          if ( sub_186264(*v26, v26[1], v26[2], v31) < 0 )
          {
            v22[29] = 0;
            ((void (__fastcall *)(_DWORD *))loc_23E2DC)(v22);
          }
          v32 = sub_1DDB40(*v26, v26[1], v26[2]);
          v3 = (void *)sub_1DFB3C(v32);
          v33 = dword_487930;
          v22[43] = v3;
          if ( v33 )
          {
            v34 = (int *)sub_242FC8(v3);
            v35 = *v34;
            v36 = sub_16F654((int)v34);
            v37 = (const char *)sub_25AC8C(v36, v22[43]);
            v38 = (const char *)sub_23095C(*v26, v26[1], v26[2]);
            v39 = sub_184CAC(v22);
            v3 = (void *)sub_2594B0(v35, "infrun: saved stop_pc=%s for %s (currently_stepping=%d)\n", v37, v38, v39);
          }
        }
        else
        {
          v22[38] = 11;
          v22[42] = 0;
          v3 = (void *)sub_186264(v22[2], v22[3], v22[4], 0);
          if ( (int)v3 < 0 )
          {
            if ( dword_487930 )
            {
              v41 = *(_DWORD *)sub_242FC8(v3);
              v42 = (const char *)sub_23095C(v22[2], v22[3], v22[4]);
              sub_2594B0(v41, "infrun: displaced-step of %s canceled: adding back to the step-over queue\n", v42);
            }
            v22[29] = 0;
            v3 = (void *)((int (__fastcall *)(_DWORD *))loc_23E2DC)(v22);
          }
        }
        goto LABEL_7;
      }
      if ( !dword_487930 )
        goto LABEL_7;
      v8 = sub_98F50(&ptr, v58);
      v9 = *(_DWORD *)sub_242FC8(v8);
      v10 = (const char *)sub_23095C(ptr, v60, v61[0]);
      v11 = sub_2594B0(v9, "infrun: %s exited while stopping threads\n", v10);
      v3 = (void *)sub_240794(v11);
      v4 = (_DWORD *)dword_48A4D4;
    }
    while ( dword_48A4D4 );
LABEL_34:
    ++v2;
    ++v45;
  }
  while ( v2 <= 1 );
  sub_92620(v48);
  if ( dword_487930 )
  {
    v13 = (_DWORD *)sub_242FC8(v12);
    sub_2594B0(*v13, "infrun: stop_all_threads done\n");
  }
}
