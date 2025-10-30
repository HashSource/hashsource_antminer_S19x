int __fastcall sub_41B70(int *a1, int a2)
{
  int v3; // r9
  int v4; // r0
  int v5; // r7
  int v6; // r6
  int v7; // r0
  int result; // r0
  int v9; // r0
  int v10; // r2
  int v11; // r0
  int v12; // r3
  __pid_t v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  _DWORD *v20; // r4
  int v21; // r0
  int v22; // r1
  int v23; // r0
  int v24; // r3
  int v25; // r2
  int v26; // r4
  int v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // r4
  int v31; // r0
  int v32; // r10
  int v33; // r0
  void (__fastcall *v34)(int *, int); // r6
  int v35; // r0
  int v36; // r3
  _DWORD *v37; // r0
  _DWORD *v38; // r3
  int *v39; // r4
  int v40; // r5
  int v41; // r6
  const char *v42; // r0
  int v43; // [sp+0h] [bp-48h]
  int v44; // [sp+4h] [bp-44h]
  _DWORD v45[5]; // [sp+8h] [bp-40h] BYREF
  int stat_loc; // [sp+1Ch] [bp-2Ch] BYREF
  __pid_t pid; // [sp+20h] [bp-28h] BYREF
  _DWORD v48[3]; // [sp+24h] [bp-24h] BYREF
  _DWORD v49[6]; // [sp+30h] [bp-18h] BYREF

  stat_loc = a2;
  v3 = sub_98F68(a1);
  v4 = sub_4C260(stat_loc);
  v5 = v4 - 1;
  v6 = v4;
  a1[19] = 8;
  if ( (unsigned int)(v4 - 1) <= 2 )
  {
    ptrace(PTRACE_GETEVENTMSG, v3, 0, &pid);
    v10 = dword_472184;
    if ( dword_472184 )
    {
      if ( pid == *(_DWORD *)dword_472184 )
      {
        v38 = (_DWORD *)dword_472184;
        v39 = &dword_472184;
      }
      else
      {
        while ( 1 )
        {
          v38 = *(_DWORD **)(v10 + 8);
          if ( !v38 )
            goto LABEL_17;
          if ( pid == *v38 )
            break;
          v10 = *(_DWORD *)(v10 + 8);
        }
        v39 = (int *)(v10 + 8);
      }
      v32 = v38[2];
      stat_loc = v38[1];
      free(v38);
      *v39 = v32;
      v13 = pid;
    }
    else
    {
LABEL_17:
      v11 = sub_4C380(pid, &stat_loc, 0x40000000);
      v12 = v11;
      if ( v11 == -1 )
        goto LABEL_53;
      v13 = v11;
      if ( v11 != pid )
      {
LABEL_52:
        sub_94700("linux-nat.c", 2015, "wait returned unexpected PID %d", v12);
LABEL_53:
        sub_258B04("waiting for new child");
      }
      v14 = stat_loc;
      if ( (unsigned __int8)stat_loc != 127 )
        goto LABEL_50;
    }
    sub_98F48(v45, v13, v13, 0);
    v15 = v45[0];
    v16 = v45[1];
    v17 = v45[2];
    a1[16] = v45[0];
    a1[17] = v16;
    a1[18] = v17;
    if ( v5 == 2 )
      goto LABEL_21;
    if ( off_472188 )
      v15 = ((int (__fastcall *)(int *, __pid_t))off_472188)(a1, pid);
    if ( v6 != 1 )
    {
LABEL_21:
      if ( v6 == 2 )
      {
        a1[15] = 5;
        return 0;
      }
      v18 = dword_47202C;
      a1[15] = 11;
      if ( v18 )
      {
        v37 = (_DWORD *)sub_242FC8(v15);
        sub_2594B0(*v37, "LHEW: Got clone event from LWP %d, new child is LWP %ld\n", v3, pid);
      }
      v19 = ps_getpid_0(a1);
      sub_98F48(v49, v19, pid, 0);
      v49[3] = v49[0];
      v49[4] = v49[1];
      v49[5] = v49[2];
      v20 = (_DWORD *)((int (*)(void))loc_41A74)();
      if ( off_47218C )
        ((void (*)(void))off_47218C)();
      v21 = v20[1];
      v22 = v20[2];
      v20[5] = 1;
      v20[6] = 1;
      v43 = v21;
      v44 = v22;
      if ( !sub_4073C(*a1, a1[1], a1[2]) )
      {
        v34 = (void (__fastcall *)(int *, int))off_4899C4;
        v35 = sub_98F68(v20);
        v34(&dword_4899A0, v35);
        sub_23FC70(*v20, v20[1], v20[2], v36, v43, v44);
      }
      ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, int))loc_23EFC0)(*v20, v20[1], v20[2], 1);
      v23 = sub_23F298(*v20, v20[1], v20[2], 1);
      v24 = stat_loc;
      if ( BYTE1(stat_loc) == 19 )
      {
        if ( dword_472028 )
        {
          v20[8] = stat_loc;
          v20[15] = 14;
          return 1;
        }
        return 1;
      }
      v25 = v20[8];
      v20[4] = 1;
      if ( v25 )
        goto LABEL_51;
      if ( dword_47202C )
      {
        v40 = *(_DWORD *)sub_242FC8(v23);
        v41 = sub_98F68(v20);
        v42 = (const char *)sub_4C2B4(stat_loc);
        sub_2594B0(v40, "LHEW: waitpid of new LWP %ld, saving status %s\n", v41, v42);
        v24 = stat_loc;
      }
      v20[8] = v24;
      return 1;
    }
    else
    {
      v33 = ps_getpid_0(a1);
      result = sub_4B55C(v33);
      if ( result )
      {
        sub_98F48(v48, pid, pid, 0);
        sub_CDC0C(v48[0], v48[1], v48[2]);
        if ( !sub_4B2E0(pid) )
          sub_4B21C(pid);
        a1[15] = 10;
        return 0;
      }
      else
      {
        a1[15] = 4;
      }
    }
  }
  else
  {
    if ( v4 != 4 )
    {
      if ( v4 == 5 )
      {
        v7 = sub_183688(5);
        if ( *(_BYTE *)(v7 + 133) )
        {
          if ( dword_47202C )
          {
            v28 = *(_DWORD *)sub_242FC8(v7);
            v29 = sub_98F68(a1);
            sub_2594B0(v28, "LHEW: Got expected PTRACE_EVENT_VFORK_DONE from LWP %ld: stopping\n", v29);
          }
          a1[15] = 7;
          return 0;
        }
        if ( dword_47202C )
        {
          v30 = *(_DWORD *)sub_242FC8(v7);
          v31 = sub_98F68(a1);
          sub_2594B0(v30, "LHEW: Got PTRACE_EVENT_VFORK_DONE from LWP %ld: ignoring\n", v31);
        }
        return 1;
      }
      sub_94700("linux-nat.c", 2170, "unknown ptrace event %d", v4);
LABEL_50:
      sub_94700("linux-nat.c", 2018, "wait returned unexpected status 0x%x", v14);
LABEL_51:
      sub_94700(
        "linux-nat.c",
        2107,
        "%s: Assertion `%s' failed.",
        "int linux_handle_extended_wait(lwp_info*, int)",
        "new_lp->status == 0");
      goto LABEL_52;
    }
    if ( dword_47202C )
    {
      v26 = *(_DWORD *)sub_242FC8(4);
      v27 = sub_98F68(a1);
      sub_2594B0(v26, "LHEW: Got exec event from LWP %ld\n", v27);
    }
    a1[15] = 6;
    v9 = sub_4BC9C(v3);
    a1[16] = sub_327254(v9);
    a1[6] = 1;
    return 0;
  }
  return result;
}
