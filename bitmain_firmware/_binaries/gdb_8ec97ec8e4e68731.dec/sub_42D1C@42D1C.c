int __fastcall sub_42D1C(_DWORD *a1, int *a2)
{
  int v2; // r7
  int v5; // r0
  int v6; // r3
  int v7; // r5
  int v8; // r6
  int v9; // r7
  int v10; // r0
  int v12; // r7
  const char *v13; // r8
  const char *v14; // r0
  int v15; // r5
  const char *v16; // r7
  const char *v17; // r0
  int *v18; // r0
  int *v19; // r6
  int v20; // r7
  const char *v21; // r0
  char *v22; // r0
  const char *v23; // r4
  const char *v24; // r0
  int stat_loc; // [sp+Ch] [bp-8h] BYREF

  v5 = sub_98F68(a1);
  v6 = a1[8];
  v7 = v5;
  if ( v6 )
  {
    if ( (unsigned __int8)v6 != 127 )
    {
      sub_94700(
        "linux-nat.c",
        1414,
        "%s: Assertion `%s' failed.",
        "void detach_one_lwp(lwp_info*, int*)",
        "lp->status == 0 || WIFSTOPPED (lp->status)");
      goto LABEL_28;
    }
    if ( !dword_47202C )
    {
      if ( !a1[4] )
        goto LABEL_5;
      goto LABEL_17;
    }
    v12 = *(_DWORD *)sub_242FC8(v5);
    v13 = (const char *)strsignal(*((unsigned __int8 *)a1 + 33));
    v14 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
    v5 = sub_2594B0(v12, "DC:  Pending %s for %s on detach.\n", v13, v14);
  }
  if ( !a1[4] )
  {
LABEL_5:
    if ( a2 )
    {
      v8 = *a2;
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  if ( dword_47202C )
  {
    v20 = *(_DWORD *)sub_242FC8(v5);
    v21 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
    sub_2594B0(v20, "DC: Sending SIGCONT to %s\n", v21);
  }
LABEL_17:
  v5 = sub_40C7C(v7, 18);
  a1[4] = 0;
  if ( a2 )
  {
    v8 = *a2;
    goto LABEL_8;
  }
LABEL_19:
  v5 = sub_41488(a1);
  v8 = v5;
LABEL_8:
  v9 = sub_92E28(v5);
  if ( off_4720B0 )
    off_4720B0(a1);
  sub_92E40(v9);
  v10 = ptrace(PTRACE_DETACH, v7, 0, v8);
  if ( v10 < 0 )
  {
    v18 = _errno_location();
    v2 = *v18;
    v19 = v18;
    if ( *v18 == 3 )
    {
      if ( sub_4C380(v7, &stat_loc, 0x40000000) == -1 )
      {
        v22 = strerror(*v19);
        sub_946B0("Couldn't reap LWP %d while detaching: %s", v7, v22);
      }
      else if ( (stat_loc & 0x7F) != 0 && ((stat_loc & 0x7F) + 1) << 24 >> 25 <= 0 )
      {
        sub_946B0("Reaping LWP %d while detaching returned unexpected status 0x%x", v7, stat_loc);
      }
      return ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_41958)(*a1, a1[1], a1[2]);
    }
LABEL_28:
    v23 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
    v24 = (const char *)sub_6FF98(v2);
    sub_946E0("Can't detach %s: %s", v23, v24);
  }
  if ( !dword_47202C )
    return ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_41958)(*a1, a1[1], a1[2]);
  v15 = *(_DWORD *)sub_242FC8(v10);
  v16 = (const char *)sub_23095C(*a1, a1[1], a1[2]);
  v17 = (const char *)strsignal(v8);
  sub_2594B0(v15, "PTRACE_DETACH (%s, %s, 0) (OK)\n", v16, v17);
  return ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_41958)(*a1, a1[1], a1[2]);
}
