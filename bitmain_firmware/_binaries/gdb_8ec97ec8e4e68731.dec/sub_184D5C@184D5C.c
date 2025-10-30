int __fastcall sub_184D5C(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  int v18; // r0
  int v19; // r0
  int result; // r0
  int v21; // r4
  const char *v22; // r0
  __int64 v23; // r0
  int v24; // [sp+3Ch] [bp-8h] BYREF
  int varg_r1; // [sp+5Ch] [bp+18h]
  int varg_r2; // [sp+60h] [bp+1Ch]
  int varg_r3; // [sp+64h] [bp+20h]

  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v18 = ((int (*)(void))loc_23DBE4)();
  if ( *(_DWORD *)(v18 + 48) )
  {
    v23 = sub_94700(
            (int)"infrun.c",
            7399,
            "%s: Assertion `%s' failed.",
            "void insert_step_resume_breakpoint_at_sal_1(gdbarch*, symtab_and_line, frame_id, bptype)",
            "inferior_thread ()->control.step_resume_breakpoint == NULL");
    LODWORD(v23) = v24;
    if ( v24 )
      LODWORD(v23) = ((int (__fastcall *)(int, _DWORD))loc_DB0B0)(v24, HIDWORD(v23));
    sub_338FFC(v23);
  }
  if ( dword_487930 )
  {
    v21 = *(_DWORD *)sub_242FC8(v18);
    v22 = (const char *)sub_25AC8C(a1, a7);
    sub_2594B0(v21, "infrun: inserting step-resume breakpoint at %s\n", v22);
  }
  v19 = ((int (__fastcall *)(int *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))loc_D8E08)(
          &v24,
          a1,
          varg_r1,
          varg_r2,
          varg_r3,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15,
          a16,
          a17);
  result = ((int (__fastcall *)(int))loc_23DBE4)(v19);
  *(_DWORD *)(result + 48) = v24;
  return result;
}
