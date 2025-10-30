void __fastcall sub_1EFBB0(int a1, int a2, int *a3)
{
  int v3; // r0
  const char **v4; // r8
  int v5; // r0
  char *v6; // r2
  int v7; // r0
  int v8; // r0
  char *v9; // r5
  size_t v10; // r1
  int v11; // r3
  const char *v12; // r4
  int v13; // r11
  int v14; // r0
  int v15; // r4
  int j; // r5
  int v17; // r0
  const char *v18; // r0
  int v19; // r4
  size_t v20; // r0
  _DWORD *v21; // r0
  char *v22; // r4
  size_t v23; // r0
  int v24; // r0
  const char *v25; // r9
  _BYTE **v26; // r7
  int v27; // r0
  int v28; // r0
  size_t v29; // r4
  size_t v30; // r0
  size_t v31; // r0
  size_t v32; // r4
  int v33; // r5
  int v34; // r1
  void *v35; // r3
  const char *v36; // r0
  int v37; // r0
  __int64 v38; // r0
  size_t v39; // r6
  size_t v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  const char **v44; // r5
  char *v45; // r6
  size_t v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r4
  int i; // r5
  int v52; // r7
  int v53; // r0
  int v54; // r0
  const char **v55; // r4
  char *v56; // r5
  size_t v57; // r0
  int v58; // r0
  char *v59; // r0
  const char *v60; // r4
  int v61; // r0
  char *v62; // r4
  size_t v63; // r0
  int v64; // r0
  char *v66; // [sp+Ch] [bp-20h]
  void *ptr[2]; // [sp+10h] [bp-1Ch] BYREF
  char v68; // [sp+18h] [bp-14h] BYREF

  v3 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v3);
  v4 = (const char **)dword_488C94;
  v5 = sub_1CD14C(dword_487D2C, (_DWORD *)dword_488C80);
  v6 = "";
  if ( v5 )
    v6 = (char *)v5;
  v66 = v6;
  if ( off_489AF8(&dword_4899A0) )
  {
    sub_232914(1);
    v7 = ((int (__fastcall *)(int))loc_1E2198)(63);
    if ( v7 != 1 )
      goto LABEL_5;
  }
  else
  {
    v7 = ((int (__fastcall *)(int))loc_1E2198)(63);
    if ( v7 != 1 )
      goto LABEL_5;
  }
  v52 = dword_46D5A0;
  v53 = sub_16F654(v7);
  v54 = ((int (__fastcall *)(int))loc_1E2770)(v53);
  v55 = (const char **)dword_488C94;
  v56 = *(char **)dword_488C94;
  v57 = sub_1E2890(v54);
  sub_93170(v56, v57, "QDisableRandomization:%x", v52);
  v58 = sub_1E7DEC(*v55);
  v59 = sub_1E98E8(v58);
  v60 = v59;
  if ( !*v59 )
    sub_946E0("Target does not support QDisableRandomization.");
  if ( strcmp(v59, "OK") )
    sub_946E0("Bogus QDisableRandomization reply from target: %s", v60);
LABEL_5:
  v8 = ((int (__fastcall *)(int))loc_1E2198)(39);
  if ( v8 != 2 )
  {
    v9 = (char *)*v4;
    v10 = sub_1E2890(v8);
    v11 = dword_46D538;
    if ( dword_46D538 )
      v11 = 1;
    sub_93170(v9, v10, "QStartupWithShell:%d", v11);
    sub_1E7DEC(*v4);
    sub_1E4EB8((char **)v4, (size_t *)v4 + 1, 0, 0, 0);
    v12 = *v4;
    if ( strcmp(*v4, "OK") )
      sub_946E0("Remote replied unexpectedly while setting startup-with-shell: %s", v12);
  }
  if ( ((int (__fastcall *)(int))loc_1E2198)(41) != 2 )
  {
    sub_1E7DEC("QEnvironmentReset");
    sub_1E4EB8((char **)v4, (size_t *)v4 + 1, 0, 0, 0);
    if ( strcmp(*v4, "OK") )
      sub_946B0("Unable to reset environment on remote.");
  }
  v13 = sub_183688() + 60;
  if ( ((int (__fastcall *)(int))loc_1E2198)(40) != 2 )
  {
    v49 = sub_9389C(v13);
    v50 = *(_DWORD *)(v49 + 12);
    for ( i = v49 + 4; i != v50; v50 = sub_33AD50(v50) )
      sub_1EFAD4((int)v4, "set", "QEnvironmentHexEncoded", *(char **)(v50 + 16));
  }
  if ( ((int (__fastcall *)(int))loc_1E2198)(42) != 2 )
  {
    v14 = sub_938A4(v13);
    v15 = *(_DWORD *)(v14 + 12);
    for ( j = v14 + 4; j != v15; v15 = sub_33AD50(v15) )
      sub_1EFAD4((int)v4, "unset", "QEnvironmentUnset", *(char **)(v15 + 16));
  }
  v17 = ((int (__fastcall *)(int))loc_1E2198)(38);
  if ( v17 != 2 )
  {
    v18 = (const char *)sub_17FCD4(v17);
    v19 = (int)v18;
    if ( v18 )
    {
      v20 = strlen(v18);
      v21 = sub_9949C(ptr, v19, v20);
      v22 = (char *)*v4;
      v23 = sub_1E2890((int)v21);
      sub_93170(v22, v23, "QSetWorkingDir:%s", (const char *)ptr[0]);
      if ( ptr[0] != &v68 )
        sub_339E64(ptr[0]);
    }
    else
    {
      v62 = (char *)*v4;
      v63 = sub_1E2890(0);
      sub_93170(v62, v63, "QSetWorkingDir:");
    }
    sub_1E7DEC(*v4);
    sub_1E4EB8((char **)v4, (size_t *)v4 + 1, 0, 0, 0);
    v17 = sub_1E1768(*v4, dword_48894C);
    if ( v17 != 1 )
      goto LABEL_60;
  }
  v24 = sub_16F654(v17);
  ((void (__fastcall *)(int))loc_1E2770)(v24);
  v25 = "";
  v26 = (_BYTE **)dword_488C94;
  v27 = sub_1CD14C(dword_487D2C, (_DWORD *)dword_488C80);
  if ( v27 )
    v25 = (const char *)v27;
  v28 = ((int (__fastcall *)(int))loc_1E2198)(46);
  if ( v28 == 2 )
    goto LABEL_34;
  strcpy(*v26, "vRun;");
  v29 = strlen(*v26);
  v30 = strlen(v25);
  if ( v29 + 2 * v30 >= sub_1E2890(v30) )
    sub_946E0("Remote file name too long for run packet");
  v31 = strlen(v25);
  v32 = v29 + 2 * sub_99420((int)v25, &(*v26)[v29], v31);
  if ( a3[1] )
  {
    v33 = 0;
    v34 = *a3;
    ptr[0] = 0;
    sub_25B0DC(ptr, v34);
    v35 = ptr[0];
    if ( !ptr[0] )
    {
LABEL_56:
      v38 = sub_94700(
              (int)"utils.h",
              203,
              "%s: Assertion `%s' failed.",
              "char* gdb_argv::operator[](int)",
              "m_argv != NULL");
      goto LABEL_57;
    }
    v36 = *(const char **)ptr[0];
    if ( *(_DWORD *)ptr[0] )
    {
      while ( 1 )
      {
        v37 = v32 + 2 * strlen(v36);
        if ( v37 + 1 >= (unsigned int)sub_1E2890(v37) )
          break;
        v39 = v32 + 1;
        (*v26)[v32] = 59;
        if ( !ptr[0] )
        {
          sub_94700(
            (int)"utils.h",
            203,
            "%s: Assertion `%s' failed.",
            "char* gdb_argv::operator[](int)",
            "m_argv != NULL");
          v64 = sub_31DAD0(ptr[0]);
          sub_338FFC(v64);
        }
        v40 = strlen(*(const char **)((char *)ptr[0] + v33));
        v41 = sub_99420(*(_DWORD *)((char *)ptr[0] + v33), &(*v26)[v39], v40);
        v35 = ptr[0];
        v32 = v39 + 2 * v41;
        if ( !ptr[0] )
          goto LABEL_56;
        v33 += 4;
        v36 = *(const char **)((char *)ptr[0] + v33);
        if ( !v36 )
          goto LABEL_30;
      }
LABEL_57:
      sub_946E0("Argument list too long for run packet", HIDWORD(v38));
    }
LABEL_30:
    sub_31DAD0(v35);
  }
  (*v26)[v32] = 0;
  sub_1E7DEC(*v26);
  sub_1E4EB8(v26, (size_t *)v26 + 1, 0, 0, 0);
  v28 = sub_1E1768(*v26, dword_4889CC);
  if ( v28 != 1 )
  {
    if ( !v28 )
    {
      if ( !*v25 )
        sub_946E0("Running the default executable on the remote target failed; try \"set remote exec-file\"?");
      sub_946E0("Running \"%s\" on the remote target failed", v25);
    }
    if ( v28 == 2 )
    {
LABEL_34:
      if ( *v66 )
        sub_946E0("Remote target does not support \"set remote exec-file\"");
      if ( a3[1] )
        sub_946E0("Remote target does not support \"set args\" or run <ARGS>");
      v42 = sub_16F654(v28);
      v43 = ((int (__fastcall *)(int))loc_1E2770)(v42);
      v44 = (const char **)dword_488C94;
      v45 = *(char **)dword_488C94;
      v46 = sub_1E2890(v43);
      sub_93170(v45, v46, "R%x", 0);
      v47 = sub_1E7DEC(*v44);
      sub_1F72F4(v47);
      if ( !sub_183CA8() )
      {
        sub_23E154(0);
        sub_187EB0();
      }
      v48 = sub_1EF58C(0);
      sub_1EF650(v48);
      return;
    }
    sub_94700((int)"remote.c", 9534, "%s: %s", "int extended_remote_run(const string&)", "bad switch");
LABEL_60:
    sub_946E0("Remote replied unexpectedly while setting the inferior's working\ndirectory: %s", *v4);
  }
  if ( !sub_183CA8() )
  {
    sub_23E154(0);
    sub_187EB0();
  }
  v61 = sub_1EF58C((char *)*v4);
  sub_1EF650(v61);
}
