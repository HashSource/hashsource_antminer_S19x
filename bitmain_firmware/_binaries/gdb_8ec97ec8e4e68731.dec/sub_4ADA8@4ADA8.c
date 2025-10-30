int __fastcall sub_4ADA8(const char *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int *v6; // r4
  int *v7; // r4
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int result; // r0
  int v12; // r9
  int v13; // r1
  int v14; // r2
  int v15; // r10
  _DWORD *v16; // r4
  int *v17; // r6
  DIR *v18; // r0
  char *v19; // r0
  int v20; // r4
  int v21; // r6
  __int64 v22; // r0
  int v23; // r0
  __int64 v24; // r0
  int v25; // r0
  __int64 v26; // r0
  int v27; // r0
  _DWORD *v28; // r6
  int v29; // r1
  int v30; // r2
  const char *v31; // r0
  const char *v32; // r0
  const char *v33; // r0
  _DWORD v34[4]; // [sp+8h] [bp-7Ch] BYREF
  _BYTE v35[4]; // [sp+18h] [bp-6Ch] BYREF
  int v36; // [sp+1Ch] [bp-68h] BYREF
  int v37; // [sp+20h] [bp-64h]
  int v38; // [sp+24h] [bp-60h]
  int v39; // [sp+28h] [bp-5Ch] BYREF
  int v40; // [sp+2Ch] [bp-58h]
  int v41; // [sp+30h] [bp-54h]
  _DWORD v42[3]; // [sp+34h] [bp-50h] BYREF
  _DWORD v43[3]; // [sp+40h] [bp-44h] BYREF
  int *v44; // [sp+4Ch] [bp-38h] BYREF
  int v45; // [sp+50h] [bp-34h]
  int v46; // [sp+54h] [bp-30h]
  _DWORD v47[3]; // [sp+58h] [bp-2Ch] BYREF
  _DWORD v48[3]; // [sp+64h] [bp-20h] BYREF
  _DWORD v49[5]; // [sp+70h] [bp-14h] BYREF

  if ( !a1 || !*a1 )
    sub_946E0("Requires argument (checkpoint id to delete)");
  v4 = sub_14CC00(a1);
  sub_4A628(v34, v4);
  v36 = v34[0];
  v37 = v34[1];
  v38 = v34[2];
  if ( sub_98F78(&v36, &dword_46BBCC) )
    sub_946E0("No such checkpoint id, %s", a1);
  if ( sub_98F78(&v36, &dword_4878EC) )
    sub_946E0("Please switch to another checkpoint before deleting the current one");
  v5 = ps_getpid_0(&v36);
  if ( ptrace(PTRACE_KILL, v5, 0, 0) )
  {
    v33 = (const char *)sub_23095C(v36, v37, v38);
    sub_946E0("Unable to kill pid %s", v33);
  }
  v6 = (int *)dword_4726BC;
  v42[0] = v36;
  v42[1] = v37;
  v42[2] = v38;
  if ( dword_4726BC )
  {
    while ( !sub_98F78(v6 + 1, v42) )
    {
      v6 = (int *)*v6;
      if ( !v6 )
        goto LABEL_31;
    }
    v7 = v6 + 4;
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v6 = &v39;
    v39 = v8;
    v40 = v9;
    v41 = v10;
    if ( a2 )
    {
      v31 = (const char *)sub_23095C(v36, v37, v38);
      sub_259F10("Killed %s\n", v31);
    }
    sub_4A304(v36, v37, v38);
    if ( sub_23E408(v39, v40, v41) )
      goto LABEL_13;
  }
  else
  {
LABEL_31:
    sub_94700(
      "linux-fork.c",
      526,
      "%s: Assertion `%s' failed.",
      "void delete_checkpoint_command(const char*, int)",
      "fi");
  }
  v28 = (_DWORD *)dword_4726BC;
  v29 = v6[1];
  v30 = v6[2];
  v43[0] = *v6;
  v43[1] = v29;
  v43[2] = v30;
  if ( dword_4726BC )
  {
    while ( !sub_98F78(v28 + 1, v43) )
    {
      v28 = (_DWORD *)*v28;
      if ( !v28 )
        goto LABEL_13;
    }
LABEL_15:
    v12 = ps_getpid_0(&v36);
    v13 = v6[1];
    v14 = v6[2];
    v44 = (int *)*v6;
    v45 = v13;
    v46 = v14;
    v15 = sub_B894C();
    if ( sub_98F78(&v44, &dword_4878EC) )
    {
      v16 = 0;
      goto LABEL_26;
    }
    v16 = (_DWORD *)dword_4726BC;
    v48[0] = dword_4878EC;
    v48[1] = dword_4878F0;
    v48[2] = dword_4878F4;
    if ( dword_4726BC )
    {
      while ( !sub_98F78(v16 + 1, v48) )
      {
        v16 = (_DWORD *)*v16;
        if ( !v16 )
          goto LABEL_42;
      }
      v17 = (int *)dword_4726BC;
      v47[0] = v44;
      v47[1] = v45;
      v47[2] = v46;
      if ( dword_4726BC )
      {
        while ( !sub_98F78(v17 + 1, v47) )
        {
          v17 = (int *)*v17;
          if ( !v17 )
            goto LABEL_41;
        }
        v18 = sub_4A9C4((int)v16);
        sub_CDAE0(v18);
        v19 = sub_4A8C4(v17);
        sub_D8084(v19);
LABEL_26:
        v20 = sub_9253C(sub_4A9A4, v16);
        sub_1B141C((int)v49, "waitpid");
        if ( !v49[0] || (v21 = sub_2611C4("waitpid", v35)) == 0 )
        {
          sub_1B141C((int)v49, "_waitpid");
          if ( !v49[0] || (v21 = sub_2611C4("_waitpid", v35)) == 0 )
          {
            sub_92620(v20);
LABEL_40:
            v32 = (const char *)sub_23095C(v36, v37, v38);
            return sub_946B0("Unable to wait pid %s", v32);
          }
        }
        v22 = sub_1780B4(v15);
        v49[0] = sub_26DAF4(*(_DWORD *)(v22 + 12), HIDWORD(v22), v12, v12 >> 31);
        v23 = sub_1780B4(v15);
        v49[1] = sub_26DC9C(*(_DWORD *)(v23 + 152), 0);
        v24 = sub_1780B4(v15);
        v49[2] = sub_26DAF4(*(_DWORD *)(v24 + 12), HIDWORD(v24), 0, 0);
        v49[3] = 0;
        v25 = sub_17E6EC(v21, 0, 3, v49);
        v26 = sub_26EB1C(v25);
        v27 = v20;
        if ( v26 >= 0 )
          return sub_92620(v20);
LABEL_43:
        sub_92620(v27);
        goto LABEL_40;
      }
LABEL_41:
      sub_94700(
        "linux-fork.c",
        468,
        "%s: Assertion `%s' failed.",
        "int inferior_call_waitpid(ptid_t, int)",
        "newfp != NULL");
    }
LABEL_42:
    v27 = sub_94700(
            "linux-fork.c",
            466,
            "%s: Assertion `%s' failed.",
            "int inferior_call_waitpid(ptid_t, int)",
            "oldfp != NULL");
    goto LABEL_43;
  }
LABEL_13:
  result = sub_23E408(*v6, v6[1], v6[2]);
  if ( result )
  {
    result = sub_23F1A8(*v6, v6[1], v6[2]);
    if ( result )
      goto LABEL_15;
  }
  return result;
}
