int __fastcall sub_4261C(int a1, int a2, int *a3)
{
  int v3; // r9
  int v5; // r10
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r11
  int v10; // r4
  int v11; // r0
  int *v12; // r4
  int v13; // r0
  int v14; // r4
  int v16; // r5
  int (*v17)(void); // r3
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int pid; // [sp+8h] [bp-44h]
  int v25; // [sp+Ch] [bp-40h]
  int stat_loc; // [sp+10h] [bp-3Ch] BYREF
  int v27; // [sp+14h] [bp-38h] BYREF
  int v28; // [sp+18h] [bp-34h]
  int v29; // [sp+1Ch] [bp-30h]
  int v30; // [sp+20h] [bp-2Ch]
  int v31; // [sp+24h] [bp-28h]
  int v32; // [sp+28h] [bp-24h]
  int v33; // [sp+2Ch] [bp-20h] BYREF
  int v34; // [sp+30h] [bp-1Ch]
  int v35; // [sp+34h] [bp-18h]
  int v36; // [sp+3Ch] [bp-10h] BYREF
  int v37; // [sp+40h] [bp-Ch]
  int v38; // [sp+44h] [bp-8h]

  v3 = a2;
  if ( a2 )
  {
    v33 = dword_4878EC;
    v34 = dword_4878F0;
    v35 = dword_4878F4;
    v14 = ((int (*)(void))loc_41A74)();
    if ( off_47218C )
      off_47218C();
    *(_DWORD *)(v14 + 20) = 1;
    *(_DWORD *)(v14 + 28) = 2;
    sub_407C8();
    return 0;
  }
  stat_loc = 127;
  v5 = *(_DWORD *)(((int (*)(void))loc_23DBE4)() + 208);
  v27 = dword_4878EC;
  v28 = dword_4878F0;
  v29 = dword_4878F4;
  v6 = (_DWORD *)((int (*)(void))loc_23DBE4)();
  v7 = v6[54];
  v8 = v6[55];
  v33 = v6[53];
  v34 = v7;
  v35 = v8;
  v25 = sub_98F68(&v27);
  pid = sub_98F68(&v33);
  v30 = v33;
  v31 = v34;
  v32 = v35;
  v9 = ((int (*)(void))loc_41A74)();
  if ( off_47218C )
    off_47218C();
  *(_DWORD *)(v9 + 20) = 1;
  *(_DWORD *)(v9 + 28) = 2;
  if ( a3 )
  {
    v10 = sub_9253C(sub_41A10, v9);
    if ( off_4720B0 )
      off_4720B0(v9);
    v11 = off_489B68();
    if ( !((int (__fastcall *)(int))loc_16A0D4)(v11) )
    {
      a3 = (int *)pid;
      sub_4C140(pid);
      if ( ptrace(PTRACE_SINGLESTEP, pid, 0, 0) < 0 )
        sub_258B04("Couldn't do single step");
      if ( sub_4C380(pid, &stat_loc, 0) < 0 )
        sub_258B04("Couldn't wait vfork process");
    }
    if ( (unsigned __int8)stat_loc == 127 )
    {
      v16 = BYTE1(stat_loc);
      if ( BYTE1(stat_loc) )
      {
        v20 = sub_99AEC(BYTE1(stat_loc));
        if ( sub_188FD8(v20) )
          v3 = v16;
      }
      ptrace(PTRACE_DETACH, pid, 0, v3);
    }
    sub_92620(v10);
    if ( v5 != 5 )
      return 0;
    goto LABEL_10;
  }
  a3 = &v36;
  v36 = dword_4878EC;
  v37 = dword_4878F0;
  v38 = dword_4878F4;
  dword_4878EC = v33;
  dword_4878F0 = v34;
  dword_4878F4 = v35;
  sub_407C8();
  dword_4878EC = v36;
  dword_4878F0 = v37;
  dword_4878F4 = v38;
  if ( v5 == 5 )
  {
LABEL_10:
    v12 = (int *)sub_41080(v27, v28, v29);
    if ( sub_4C154() < 0 )
    {
      sub_94700(
        "linux-nat.c",
        557,
        "%s: Assertion `%s' failed.",
        "int linux_child_follow_fork(target_ops*, int, int)",
        "linux_supports_tracefork () >= 0");
      v21 = *a3;
      v22 = a3[1];
      v23 = a3[2];
      *v12 = *a3;
      v12[1] = v22;
      v12[2] = v23;
      sub_338FFC(v21);
    }
    v13 = sub_4C1E4();
    if ( v13 )
    {
      if ( dword_47202C )
      {
        v19 = (_DWORD *)sub_242FC8(v13);
        sub_2594B0(*v19, "LCFF: waiting for VFORK_DONE on %d\n", v25);
      }
      v12[5] = 1;
    }
    else
    {
      if ( dword_47202C )
      {
        v18 = (_DWORD *)sub_242FC8(0);
        sub_2594B0(*v18, "LCFF: no VFORK_DONE support, sleeping a bit\n");
      }
      usleep(0x2710u);
      v17 = (int (*)(void))off_489AFC;
      v12[8] = 0;
      v12[15] = 7;
      v12[5] = 1;
      if ( v17() )
        sub_40FCC();
    }
    return 0;
  }
  return 0;
}
