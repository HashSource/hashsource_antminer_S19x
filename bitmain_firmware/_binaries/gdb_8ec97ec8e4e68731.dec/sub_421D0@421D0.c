int __fastcall sub_421D0(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  const char *v8; // r5
  int v9; // r7
  int v10; // r0
  _DWORD *v11; // r7
  int v12; // r1
  int v13; // r2
  int v14; // r9
  int v15; // r0
  int v16; // r0
  int v17; // r8
  int *v18; // r4
  int v19; // r5
  const char *v20; // r4
  const char *v21; // r0
  int v22; // r8
  const char *v23; // r0
  int v24; // r3
  int v25; // r2
  int v26; // r0
  int result; // r0
  int v28; // r8
  int v29; // r8
  const char *v30; // r0
  _DWORD *v31; // r0
  int v32; // r0
  int v33; // r4
  int v34; // r5
  const char *v35; // r0
  __int64 v36; // kr00_8
  __int64 i; // r0
  int v38; // r6
  int v39; // r5
  const char *v40; // r4
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // [sp+8h] [bp-34h] BYREF
  int v46; // [sp+Ch] [bp-30h]
  int v47; // [sp+10h] [bp-2Ch]
  int stat_loc; // [sp+1Ch] [bp-20h] BYREF
  int v49; // [sp+20h] [bp-1Ch] BYREF
  int v50; // [sp+24h] [bp-18h]
  int v51; // [sp+28h] [bp-14h]
  _DWORD v52[4]; // [sp+2Ch] [bp-10h] BYREF

  v6 = sub_41010(a1, 0, 0);
  v7 = sub_92E28(v6);
  (*(void (__fastcall **)(int, int, int))(dword_472024 + 32))(a1, a2, a3);
  sub_92E40(v7);
  v8 = (const char *)&dword_4878EC;
  v9 = ps_getpid_0(&dword_4878EC);
  v10 = ps_getpid_0(&dword_4878EC);
  sub_98F48(&v45, v9, v10, 0);
  v49 = v45;
  v50 = v46;
  v51 = v47;
  sub_23EDB4(dword_4878EC, dword_4878F0, dword_4878F4, v45, v46, v47);
  v11 = (_DWORD *)((int (__fastcall *)(int, int, int))loc_41A74)(v49, v50, v51);
  v12 = v11[1];
  v13 = v11[2];
  v52[0] = *v11;
  v52[1] = v12;
  v52[2] = v13;
  v14 = sub_98F68(v52);
  v15 = sub_4B978();
  if ( v15 )
  {
    if ( dword_47202C )
    {
      v31 = (_DWORD *)sub_242FC8(v15);
      sub_2594B0(*v31, "LNPAW: Attaching to a stopped process\n");
    }
    sub_40C7C(v14, 19);
    ptrace(PTRACE_CONT, v14, 0);
  }
  v16 = sub_4C380(v14, &stat_loc, 0x40000000);
  if ( v14 != v16 )
  {
    v36 = sub_94700(
            "linux-nat.c",
            1093,
            "%s: Assertion `%s' failed.",
            "int linux_nat_post_attach_wait(ptid_t, int*)",
            "pid == new_pid");
    sub_92E40(&v49);
    for ( i = v36; HIDWORD(i) == 1; LODWORD(i) = sub_92F64(v41, "warning: %s\n%s", v8, v40) )
    {
      v38 = sub_339E78(i);
      v39 = sub_25B294(v8);
      v40 = (const char *)sub_327254(*(_DWORD *)(v38 + 8));
      sub_9253C(265288, v40);
      sub_92080(v52);
      sub_4BD6C(v39, v52);
      sub_92044(v52, "", 1);
      v8 = (const char *)sub_92094(v52);
      sub_9253C(265288, v8);
      v41 = *(_DWORD *)(v38 + 4);
      if ( !*v8 )
      {
        v42 = sub_92F64(v41, "%s", v40);
        v43 = sub_339EF8(v42);
        sub_338FFC(v43);
      }
    }
    v44 = sub_339E78(i);
    sub_92E60(v44);
  }
  v17 = stat_loc;
  if ( (unsigned __int8)stat_loc == 127 )
  {
    LOWORD(v18) = (unsigned __int16)&dword_472024;
    if ( BYTE1(stat_loc) == 19 )
    {
      HIWORD(v18) = (unsigned int)&dword_472024 >> 16;
      goto LABEL_13;
    }
    HIWORD(v18) = (unsigned int)&dword_472024 >> 16;
    v11[4] = 1;
    if ( !v18[2] )
    {
LABEL_13:
      v25 = v18[2];
      v11[5] = 1;
      v11[6] = 1;
      if ( !v25 )
        goto LABEL_14;
      goto LABEL_25;
    }
    v29 = *(_DWORD *)sub_242FC8(v16);
    v30 = (const char *)sub_4C2B4(stat_loc);
    v16 = sub_2594B0(v29, "LNPAW: Received %s after attaching\n", v30);
    v17 = stat_loc;
    v24 = (unsigned __int8)stat_loc;
LABEL_12:
    if ( v24 != 127 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v18 = &dword_472024;
  if ( dword_47202C )
  {
    v22 = *(_DWORD *)sub_242FC8(v16);
    v23 = (const char *)sub_4C2B4(stat_loc);
    v16 = sub_2594B0(v22, "LNPAW: Failed to stop %d: %s", v14, v23);
    v17 = stat_loc;
    v24 = (unsigned __int8)stat_loc;
    goto LABEL_12;
  }
LABEL_8:
  if ( (v17 & 0x7F) == 0 )
  {
    sub_22EFF4(v16);
    v28 = BYTE1(v17);
    ((void (__fastcall *)(int, int, int))loc_230B18)(dword_4878EC, dword_4878F0, dword_4878F4);
    if ( !v28 )
      sub_946E0("Unable to attach: program exited normally.");
    sub_946E0("Unable to attach: program exited with code %d.", v28);
  }
  if ( ((v17 & 0x7F) + 1) << 24 >> 25 > 0 )
  {
    sub_22EFF4(v16);
    ((void (__fastcall *)(int, int, int))loc_230B18)(dword_4878EC, dword_4878F0, dword_4878F4);
    v19 = sub_99AEC(v17 & 0x7F);
    v20 = (const char *)sub_99A4C(v19);
    v21 = (const char *)sub_99A28(v19);
    sub_946E0("Unable to attach: program terminated with signal %s, %s.", v20, v21);
  }
  v32 = sub_98F68(&v49);
  v16 = sub_94700("linux-nat.c", 1285, "unexpected status %d for PID %ld", v17, v32);
LABEL_25:
  v33 = *(_DWORD *)sub_242FC8(v16);
  v34 = ps_getpid_0(v11);
  v35 = (const char *)sub_4C2B4(v17);
  sub_2594B0(v33, "LNA: waitpid %ld, saving status %s\n", v34, v35);
LABEL_14:
  v11[8] = v17;
  v26 = ps_getpid_0(v11);
  sub_4BB58(v26, sub_42044);
  result = off_489AF8();
  if ( result )
    return sub_232914(1);
  return result;
}
