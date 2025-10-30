_DWORD *__fastcall sub_18B478(_DWORD *a1)
{
  int v1; // r6
  int v3; // r0
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r5
  int v8; // r6
  const char *v9; // r0
  int v10; // r8
  int v11; // r0
  int v12; // r5
  int v13; // r8
  int v14; // r7
  int v15; // r0
  void *v16; // r6
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r6
  const char *v21; // r0
  int v22; // r6
  const char *v23; // r0
  int v24; // r0
  int v25; // r3
  int v26; // r3
  __int64 v27; // r8
  int v28; // r5
  int *v29; // r0
  int v30; // r0
  int v31; // r0

  if ( !sub_98F78((_DWORD *)(a1[3] + 8), &dword_4878EC) )
    goto LABEL_34;
  if ( *(_DWORD *)(a1[3] + 40) )
  {
    sub_94700(
      (int)"infrun.c",
      7671,
      "%s: Assertion `%s' failed.",
      "void keep_going_pass_signal(execution_control_state*)",
      "!ecs->event_thread->resumed");
LABEL_34:
    v27 = sub_94700(
            (int)"infrun.c",
            7670,
            "%s: Assertion `%s' failed.",
            "void keep_going_pass_signal(execution_control_state*)",
            "ptid_equal (ecs->event_thread->ptid, inferior_ptid)");
    sub_92E40(v1);
    if ( HIDWORD(v27) != 1 )
    {
      sub_339E78(v27);
      sub_92E60();
    }
    v28 = sub_339E78(v27);
    v29 = (int *)sub_242FB4(v28);
    sub_154B38(*v29, *(_DWORD *)v28, *(_DWORD *)(v28 + 4), *(const char **)(v28 + 8));
    sub_18A654((int)(a1 + 12));
    v31 = sub_184B80(v30);
    return (_DWORD *)sub_349250(v31);
  }
  v3 = sub_1DDB40(*a1, a1[1], a1[2]);
  v4 = a1[3];
  v5 = sub_1DFB3C(v3);
  v6 = (_DWORD *)a1[3];
  *(_DWORD *)(v4 + 184) = v5;
  if ( !v6[29] )
  {
    if ( dword_487934 || dword_48793C )
    {
      if ( a1[13] || (v5 = sub_184CF8(v6)) != 0 )
      {
        if ( dword_487930 )
        {
          v22 = *(_DWORD *)sub_242FC8(v5);
          v23 = (const char *)sub_23095C(v6[2], v6[3], v6[4]);
          sub_2594B0(v22, "infrun: step-over already in progress: step-over for %s deferred\n", v23);
        }
        ((void (__fastcall *)(_DWORD *))loc_23E2DC)(v6);
      }
      else if ( dword_487930 )
      {
        v20 = *(_DWORD *)sub_242FC8(0);
        v21 = (const char *)sub_23095C(v6[2], v6[3], v6[4]);
        sub_2594B0(v20, "infrun: step-over in progress: resume of %s deferred\n", v21);
      }
      return sub_187370(a1 + 12);
    }
    v10 = sub_1DDBBC(v5);
    v11 = sub_184CF8((_DWORD *)a1[3]);
    if ( a1[13] )
    {
      v12 = v11 & 2;
    }
    else
    {
      v14 = v11 & 1;
      v12 = v11 & 2;
      if ( (v11 & 1) == 0 )
      {
        if ( (v11 & 2) != 0 )
        {
          dword_487934 = v11 & 1;
          dword_487938 = v11 & 1;
          dword_48793C = v11 & 2;
          dword_487940 = -1;
          goto LABEL_20;
        }
        v13 = dword_487934;
        v14 = 0;
LABEL_19:
        if ( !v13 && !dword_48793C )
        {
LABEL_22:
          v16 = sub_92E28();
          sub_D8084((int)v16, v17, v18);
          sub_92E40((int)v16);
          v19 = a1[3];
          *(_DWORD *)(v19 + 116) = (v12 | v14) != 0;
          sub_18A6B0(*(_DWORD *)(v19 + 144));
          return sub_187370(a1 + 12);
        }
LABEL_20:
        v15 = sub_232950(v11);
        if ( v15 )
          sub_18A0C0(v15);
        goto LABEL_22;
      }
    }
    if ( v12 || (v11 = sub_184F48((_DWORD *)a1[3])) == 0 )
    {
      v24 = v10;
      v13 = *(_DWORD *)(v10 + 4);
      v11 = sub_1DFB3C(v24);
      v25 = a1[3];
      v14 = 1;
      dword_487938 = v11;
      dword_487934 = v13;
      v26 = *(_DWORD *)(v25 + 20);
      dword_48793C = v12;
      dword_487940 = v26;
    }
    else
    {
      v13 = dword_487934;
      v14 = 1;
    }
    goto LABEL_19;
  }
  if ( dword_487930 )
  {
    v8 = *(_DWORD *)sub_242FC8(v5);
    v9 = (const char *)sub_23095C(v6[2], v6[3], v6[4]);
    sub_2594B0(v8, "infrun: %s has trap_expected set, resuming to collect trap\n", v9);
    v6 = (_DWORD *)a1[3];
  }
  sub_18A6B0(v6[36]);
  return sub_187370(a1 + 12);
}
