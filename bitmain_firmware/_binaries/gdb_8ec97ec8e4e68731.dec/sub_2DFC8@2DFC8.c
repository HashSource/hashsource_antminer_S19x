int __fastcall sub_2DFC8(int a1, int a2, int a3)
{
  __int64 v5; // r0
  int v6; // r6
  int v7; // r0
  bool v8; // zf
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r9
  int v14; // r1
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  int v19; // r8
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  __int64 v23; // r0
  int v24; // [sp+38h] [bp-44h] BYREF
  _DWORD v25[5]; // [sp+3Ch] [bp-40h] BYREF
  _DWORD v26[3]; // [sp+50h] [bp-2Ch] BYREF
  int v27; // [sp+5Ch] [bp-20h]
  int v28; // [sp+60h] [bp-1Ch]
  int v29; // [sp+64h] [bp-18h]
  int v30; // [sp+68h] [bp-14h]
  int v31; // [sp+6Ch] [bp-10h]
  int v32; // [sp+70h] [bp-Ch]
  int v33; // [sp+74h] [bp-8h]

  v5 = sub_25A78(a2, a3, 7);
  v6 = v5;
  v7 = sub_15F70C(v5, HIDWORD(v5));
  v8 = v6 == 173;
  if ( v6 != 173 )
    v8 = v6 == 119;
  if ( v8 && (v10 = v7, v7 = sub_15DA8C(v7), v7 == 4) )
  {
    v11 = sub_15DB40(v10);
    sub_2370C(v11);
    ((void (__fastcall *)(int, int))loc_15EBBC)(v10, 25);
    v12 = ((int (__fastcall *)(int))loc_15F9E0)(v10);
    v13 = v12;
    if ( dword_487978 )
    {
      v19 = *(_DWORD *)sub_242FC8(v12);
      v20 = sub_15DDFC(v10);
      v21 = sub_2594B0(v19, "displaced: found sigreturn/rt_sigreturn SVC call.  PC in frame = %lx\n", v20);
      if ( dword_487978 )
      {
        v22 = (_DWORD *)sub_242FC8(v21);
        sub_2594B0(*v22, "displaced: unwind pc = %lx.  Setting momentary breakpoint.\n", v13);
      }
    }
    if ( *(_DWORD *)(((int (*)(void))loc_23DBE4)() + 48) )
    {
      v23 = sub_94700(
              "arm-linux-tdep.c",
              1010,
              "%s: Assertion `%s' failed.",
              "int arm_linux_copy_svc(gdbarch*, regcache*, arm_displaced_step_closure*)",
              "inferior_thread ()->control.step_resume_breakpoint == NULL");
      LODWORD(v23) = v24;
      if ( v24 )
        LODWORD(v23) = ((int (__fastcall *)(int, _DWORD))loc_DB0B0)(v24, HIDWORD(v23));
      sub_338FFC(v23);
    }
    sub_21DEAC(v26, v13);
    v29 = v13;
    v27 = sub_214838(v13);
    LOBYTE(v31) = 1;
    v14 = ((int (__fastcall *)(int))loc_15FA88)(v10);
    if ( v14 )
    {
      ((void (__fastcall *)(_DWORD *, int))loc_15CFA0)(v25, v14);
      v15 = ((int (__fastcall *)(int *, int, _DWORD, _DWORD, _DWORD, int, int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))loc_D8E08)(
              &v24,
              a1,
              v26[0],
              v26[1],
              v26[2],
              v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33,
              v25[0],
              v25[1],
              v25[2],
              v25[3],
              v25[4],
              15);
      v16 = ((int (__fastcall *)(int))loc_23DBE4)(v15);
      *(_DWORD *)(v16 + 48) = v24;
      sub_D8084();
    }
    else if ( dword_487978 )
    {
      v17 = (_DWORD *)sub_242FB4();
      sub_2594B0(
        *v17,
        "displaced: couldn't find previous frame to set momentary breakpoint for sigreturn/rt_sigreturn\n");
    }
  }
  else if ( dword_487978 )
  {
    v18 = (_DWORD *)sub_242FC8(v7);
    sub_2594B0(*v18, "displaced: found SVC call\n");
  }
  *(_DWORD *)(a3 + 140) = 1;
  *(_DWORD *)(a3 + 212) = sub_2DE58;
  return 0;
}
