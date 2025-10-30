int __fastcall sub_185CC0(int a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  _DWORD *v7; // r4
  int v8; // r11
  int v9; // r0
  bool v10; // zf
  int v11; // s15
  int v12; // r7
  _DWORD *v13; // r4
  void *v14; // r1
  int v15; // r2
  int v17; // r0
  _DWORD *v18; // r5
  int *v19; // r6
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int (__fastcall *v24)(int *); // r6
  int v25; // r1
  int v26; // r2
  int v27; // r10
  const char *v28; // r6
  const char *v29; // r0
  int v30; // r0
  int v31; // r6
  const char *v32; // r0
  int v33; // r3
  int v34; // r0
  int v35; // r7
  const char *v36; // r10
  const char *v37; // r0
  _DWORD *v38; // r0
  int v39; // r4
  const char *v40; // r0
  int v41; // r10
  int v42; // r0
  int v43; // r11
  int v44; // r0
  int v45; // r10
  int v46; // r11
  int v47; // r0
  int v48; // r6
  int v49; // r7
  int v50; // r7
  const char *v51; // r10
  const char *v52; // r0
  __int64 v53; // r0
  const char *v54; // [sp+8h] [bp-3Ch]
  int v55; // [sp+Ch] [bp-38h] BYREF
  int v56; // [sp+10h] [bp-34h]
  int v57; // [sp+14h] [bp-30h]
  int v58[3]; // [sp+1Ch] [bp-28h] BYREF
  void *ptr[2]; // [sp+28h] [bp-1Ch] BYREF
  int v60; // [sp+30h] [bp-14h] BYREF

  v55 = a2;
  v56 = a3;
  v57 = a4;
  if ( sub_98F78(&v55, &dword_46BBCC) || sub_98FB8(&v55) )
  {
    v7 = (_DWORD *)dword_48A4D4;
    v58[0] = v55;
    v58[1] = v56;
    v58[2] = v57;
    if ( dword_48A4D4 )
    {
      v8 = 0;
      do
      {
        if ( v7[11] != 2 && sub_9904C(v7 + 2, v58) && v7[10] && v7[42] )
          ++v8;
        v7 = (_DWORD *)v7[1];
      }
      while ( v7 );
      if ( v8 )
      {
        v9 = rand();
        v10 = dword_487930 == 0;
        if ( dword_487930 )
          v10 = v8 == 1;
        v11 = (int)((double)v8 * (double)v9 * 4.65661287e-10);
        v12 = v11;
        if ( !v10 )
        {
          v38 = (_DWORD *)sub_242FC8(v9);
          sub_2594B0(*v38, "infrun: Found %d events, selecting #%d\n", v8, v11);
        }
        v13 = (_DWORD *)dword_48A4D4;
        if ( dword_48A4D4 )
        {
          do
          {
            if ( v13[11] != 2 && sub_9904C(v13 + 2, v58) )
            {
              if ( v13[10] )
              {
                if ( v13[42] )
                {
                  v10 = v12-- == 0;
                  if ( v10 )
                    goto LABEL_31;
                }
              }
            }
            v13 = (_DWORD *)v13[1];
          }
          while ( v13 );
        }
      }
    }
LABEL_24:
    if ( off_48A564 )
      off_48A564(ptr, v55, v56, v57, a5, a6);
    else
      sub_23090C(ptr, v55, v56, v57, a5, a6);
    v14 = ptr[1];
    v15 = v60;
    *(void **)a1 = ptr[0];
    *(_DWORD *)(a1 + 4) = v14;
    *(_DWORD *)(a1 + 8) = v15;
    return a1;
  }
  if ( dword_487930 )
  {
    v39 = *(_DWORD *)sub_242FC8(0);
    v40 = (const char *)sub_23095C(v55, v56, v57);
    sub_2594B0(v39, "infrun: Waiting for specific thread %s.\n", v40);
  }
  v17 = sub_23E408(v55, v56, v57);
  v13 = (_DWORD *)v17;
  if ( !v17 )
  {
    v53 = sub_94700(
            (int)"infrun.c",
            3515,
            "%s: Assertion `%s' failed.",
            "ptid_t do_target_wait(ptid_t, target_waitstatus*, int)",
            "tp != NULL");
    return sub_186194(v53, HIDWORD(v53));
  }
  if ( !*(_DWORD *)(v17 + 168) )
    goto LABEL_24;
LABEL_31:
  if ( (unsigned int)(v13[37] - 1) > 1 )
    goto LABEL_32;
  v18 = v13 + 2;
  v45 = sub_1DDB40(v13[2], v13[3], v13[4]);
  v46 = sub_1DD58C(v45);
  v47 = sub_1DFB3C(v45);
  v48 = v13[43];
  v49 = v47;
  if ( v48 == v47 )
  {
    if ( sub_CF680(*(_DWORD *)(v45 + 4), v13[43]) )
    {
LABEL_32:
      if ( !dword_487930 )
      {
        v18 = v13 + 2;
        v19 = v13 + 38;
LABEL_34:
        if ( v13[37] == 1 && !off_4899F8(&dword_4899A0) )
        {
          v41 = sub_1DDB40(*v18, v18[1], v18[2]);
          v42 = sub_1DD58C(v41);
          v43 = ((int (__fastcall *)(int))loc_169660)(v42);
          if ( v43 )
          {
            v44 = sub_1DFB3C(v41);
            sub_1DFC60(v41, v43 + v44);
          }
        }
        goto LABEL_36;
      }
LABEL_43:
      v19 = v13 + 38;
      v34 = sub_277578(ptr, v13 + 38);
      v18 = v13 + 2;
      v35 = *(_DWORD *)sub_242FC8(v34);
      v36 = (const char *)ptr[0];
      v37 = (const char *)sub_23095C(v13[2], v13[3], v13[4]);
      sub_2594B0(v35, "infrun: Using pending wait status %s for %s.\n", v36, v37);
      if ( ptr[0] != &v60 )
        sub_339E64(ptr[0]);
      goto LABEL_34;
    }
    if ( !dword_487930 )
      goto LABEL_49;
    v50 = *(_DWORD *)sub_242FC8(0);
    v51 = (const char *)sub_23095C(*v18, v13[3], v13[4]);
    v52 = (const char *)sub_25AC8C(v46, v48);
    v30 = sub_2594B0(v50, "infrun: previous breakpoint of %s, at %s gone\n", v51, v52);
  }
  else
  {
    if ( !dword_487930 )
      goto LABEL_49;
    v27 = *(_DWORD *)sub_242FC8(v47);
    v28 = (const char *)sub_23095C(*v18, v13[3], v13[4]);
    v54 = (const char *)sub_25AC8C(v46, v13[46]);
    v29 = (const char *)sub_25AC8C(v46, v49);
    v30 = sub_2594B0(v27, "infrun: PC of %s changed.  was=%s, now=%s\n", v28, v54, v29);
  }
  if ( !dword_487930 )
  {
LABEL_49:
    v13[38] = 10;
    v19 = v13 + 38;
    goto LABEL_36;
  }
  v31 = *(_DWORD *)sub_242FC8(v30);
  v32 = (const char *)sub_23095C(*v18, v13[3], v13[4]);
  sub_2594B0(v31, "infrun: pending event of %s cancelled.\n", v32);
  v33 = dword_487930;
  v13[37] = 0;
  v13[38] = 10;
  if ( v33 )
    goto LABEL_43;
  v19 = v13 + 38;
LABEL_36:
  v20 = *v19;
  v21 = v19[1];
  v22 = v19[2];
  v23 = v19[3];
  v24 = (int (__fastcall *)(int *))off_489AFC;
  v13[37] = 0;
  *a5 = v20;
  a5[1] = v21;
  a5[2] = v22;
  a5[3] = v23;
  v13[42] = 0;
  if ( v24(&dword_4899A0) )
    sub_1532BC((_DWORD *)dword_487974);
  v25 = v18[1];
  v26 = v18[2];
  *(_DWORD *)a1 = *v18;
  *(_DWORD *)(a1 + 4) = v25;
  *(_DWORD *)(a1 + 8) = v26;
  return a1;
}
