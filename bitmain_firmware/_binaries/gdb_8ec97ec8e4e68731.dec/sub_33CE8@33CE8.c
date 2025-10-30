void __fastcall sub_33CE8(int a1, const char *a2, int a3)
{
  _BOOL4 v3; // r5
  _BOOL4 v4; // r4
  _BOOL4 v5; // r11
  _BOOL4 v6; // r8
  _BOOL4 v7; // r10
  char *v8; // r9
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r7
  const char *v13; // r0
  __int64 v14; // r0
  const char *v15; // r0
  _BYTE *v16; // r0
  char *v17; // r5
  char *v18; // r6
  unsigned __int8 *v19; // r0
  void *v20; // r0
  char *i; // r0
  int v22; // r8
  int v23; // r9
  int v24; // r10
  int v25; // r0
  char *v26; // r12
  int v27; // r3
  int v28; // r2
  int v29; // r1
  const char *v30; // r0
  int v31; // r8
  int v32; // r9
  int v33; // r10
  int v34; // r0
  const char *v35; // r4
  int v36; // r8
  const char *v37; // r8
  int v38; // r9
  unsigned int v39; // r0
  _BYTE *v40; // r0
  __int64 v41; // r0
  const char *v42; // r0
  __int64 v43; // r0
  const char *v44; // r0
  _BYTE *v45; // r0
  __int64 v46; // r0
  const char *v47; // r0
  __int64 v48; // r0
  const char *v49; // r0
  __int64 v50; // r0
  const char *v51; // r0
  __int64 v52; // r0
  const char *v53; // r0
  __int64 v54; // r0
  const char *v55; // r0
  __int64 v56; // r0
  const char *v57; // r0
  __int64 v58; // r0
  const char *v59; // r0
  __int64 v60; // r0
  const char *v61; // r0
  __int64 v62; // r0
  const char *v63; // r0
  __int64 v64; // r0
  const char *v65; // r0
  __int64 v66; // r0
  const char *v67; // r0
  __int64 v68; // r0
  const char *v69; // r0
  __int64 v70; // r0
  const char *v71; // r0
  __int64 v72; // r0
  const char *v73; // r0
  __int64 v74; // r0
  const char *v75; // r0
  __int64 v76; // r0
  const char *v77; // r0
  __int64 v78; // r0
  const char *v79; // r0
  __int64 v80; // r0
  const char *v81; // r0
  __int64 v82; // r0
  const char *v83; // r0
  __int64 v84; // r0
  const char *v85; // r0
  __int64 v86; // r0
  const char *v87; // r0
  __int64 v88; // r0
  const char *v89; // r0
  __int64 v90; // r0
  const char *v91; // r0
  int v92; // [sp+0h] [bp-D4h]
  unsigned int v93; // [sp+1Ch] [bp-B8h]
  _BYTE v94[4]; // [sp+2Ch] [bp-A8h] BYREF
  char *s; // [sp+30h] [bp-A4h] BYREF
  int v96; // [sp+34h] [bp-A0h] BYREF
  int v97; // [sp+38h] [bp-9Ch] BYREF
  char *v98; // [sp+3Ch] [bp-98h] BYREF
  int v99; // [sp+40h] [bp-94h] BYREF
  int v100; // [sp+44h] [bp-90h] BYREF
  __int64 v101; // [sp+48h] [bp-8Ch] BYREF
  __int64 v102; // [sp+50h] [bp-84h] BYREF
  __int64 ptr; // [sp+58h] [bp-7Ch] BYREF
  void *v104[3]; // [sp+60h] [bp-74h] BYREF
  char *endptr[25]; // [sp+6Ch] [bp-68h] BYREF

  v3 = a3 == 7;
  v4 = a3 == 0;
  v93 = a3 & 0xFFFFFFFB;
  v5 = (a3 & 0xFFFFFFFB) == 0 || a3 == 7;
  v6 = (unsigned int)(a3 - 6) <= 1 || a3 == 0;
  v7 = a3 == 1 || a3 == 7;
  if ( (a3 & 0xFFFFFFFD) == 5 )
    v4 = 1;
  if ( a3 == 2 )
    v3 = 1;
  v8 = (char *)a2;
  if ( a2 && (unsigned int)*(unsigned __int8 *)a2 - 48 <= 9 )
  {
    v39 = strtoul(a2, endptr, 10);
    v8 = endptr[0];
    v12 = v39;
  }
  else
  {
    v10 = sub_22EBBC();
    if ( !v10 )
      sub_946E0("No current process: you must name one.");
    v11 = sub_183688(v10);
    if ( *(_BYTE *)(v11 + 16) )
      sub_946E0("Can't determine the current process's PID: you must name one.");
    v12 = *(_DWORD *)(sub_183688(v11) + 12);
  }
  v13 = (const char *)sub_9360C(v8);
  if ( v13 && *v13 )
    sub_946E0("Too many parameters: %s", v13);
  sub_259F10("process %ld\n", v12);
  if ( v5 )
  {
    sub_93170(endptr, 100, "/proc/%ld/cmdline", v12);
    sub_23183C(v104, 0, endptr);
    if ( v104[0] )
      sub_259F10("cmdline = '%s'\n", (const char *)v104[0]);
    else
      sub_946B0("unable to open /proc file '%s'", (const char *)endptr);
    if ( v104[0] )
      free(v104[0]);
  }
  if ( v6 )
  {
    sub_93170(endptr, 100, "/proc/%ld/cwd", v12);
    v37 = (const char *)sub_231750(0, endptr, v94);
    if ( v37 )
    {
      v38 = sub_9253C(sub_33B50, v37);
      sub_259F10("cwd = '%s'\n", v37);
      sub_92620(v38);
    }
    else
    {
      sub_946B0("unable to read link '%s'", (const char *)endptr);
    }
  }
  if ( v4 )
  {
    sub_93170(endptr, 100, "/proc/%ld/exe", v12);
    v35 = (const char *)sub_231750(0, endptr, v94);
    if ( v35 )
    {
      v36 = sub_9253C(sub_33B50, v35);
      sub_259F10("exe = '%s'\n", v35);
      sub_92620(v36);
    }
    else
    {
      sub_946B0("unable to read link '%s'", (const char *)endptr);
    }
  }
  if ( v7 )
  {
    sub_93170(endptr, 100, "/proc/%ld/maps", v12);
    sub_23183C(&s, 0, endptr);
    if ( s )
    {
      sub_259F10("Mapped address spaces:\n\n");
      if ( ((int (__fastcall *)(int))loc_16666C)(a1) == 32 )
        sub_259F10("\t%10s %10s %10s %10s %s\n", "Start Addr", "  End Addr", "      Size", "    Offset", "objfile");
      else
        sub_259F10("  %18s %18s %10s %10s %s\n", "Start Addr", "  End Addr", "      Size", "    Offset", "objfile");
      for ( i = strtok(s, (const char *)&word_356638); i; i = strtok(0, (const char *)&word_356638) )
      {
        sub_33B98(i, &v101, &v102, &v96, &v99, &ptr, &v97, &v100, v104, (int *)&v98);
        if ( ((int (__fastcall *)(int))loc_16666C)(a1) == 32 )
        {
          v31 = sub_25AC8C(a1, v101);
          v32 = sub_25AC8C(a1, v102);
          v33 = sub_98B08(v102 - v101, (unsigned __int64)(v102 - v101) >> 32);
          v34 = sub_98B08(ptr, HIDWORD(ptr));
          v26 = v98;
          v27 = v33;
          v28 = v32;
          v29 = v31;
          v92 = v34;
          v30 = "\t%10s %10s %10s %10s %s\n";
          if ( !*v98 )
            v26 = "";
        }
        else
        {
          v22 = sub_25AC8C(a1, v101);
          v23 = sub_25AC8C(a1, v102);
          v24 = sub_98B08(v102 - v101, (unsigned __int64)(v102 - v101) >> 32);
          v25 = sub_98B08(ptr, HIDWORD(ptr));
          v26 = v98;
          v27 = v24;
          v28 = v23;
          v29 = v22;
          v92 = v25;
          v30 = "  %18s %18s %10s %10s %s\n";
          if ( !*v98 )
            v26 = "";
        }
        sub_259F10(v30, v29, v28, v27, v92, v26);
      }
    }
    else
    {
      sub_946B0("unable to open /proc file '%s'", (const char *)endptr);
    }
    if ( s )
      free(s);
  }
  if ( v3 )
  {
    sub_93170(endptr, 100, "/proc/%ld/status", v12);
    sub_23183C(v104, 0, endptr);
    if ( v104[0] )
      sub_259B34();
    else
      sub_946B0("unable to open /proc file '%s'", (const char *)endptr);
    if ( v104[0] )
      free(v104[0]);
  }
  if ( v93 == 3 )
  {
    sub_93170(endptr, 100, "/proc/%ld/stat", v12);
    sub_23183C(&ptr, 0, endptr);
    if ( !(_DWORD)ptr )
    {
      sub_946B0("unable to open /proc file '%s'", (const char *)endptr);
      v20 = (void *)ptr;
      if ( !(_DWORD)ptr )
        return;
LABEL_34:
      free(v20);
      return;
    }
    v104[0] = (void *)ptr;
    v14 = sub_9335C(ptr, v104, 10);
    v15 = (const char *)sub_98880(v14, HIDWORD(v14));
    sub_259F10("Process: %s\n", v15);
    v16 = (_BYTE *)sub_9360C(v104[0]);
    v104[0] = v16;
    v17 = v16;
    if ( *v16 == 40 )
    {
      v18 = strrchr(v16, 41);
      if ( v18 )
      {
        sub_259F10("Exec file: %.*s\n", v18 - v17 - 1, v17 + 1);
        v17 = v18 + 1;
        v104[0] = v18 + 1;
      }
    }
    v19 = (unsigned __int8 *)sub_9360C(v17);
    v104[0] = v19;
    if ( !*v19 )
    {
LABEL_33:
      v20 = (void *)ptr;
      if ( !(_DWORD)ptr )
        return;
      goto LABEL_34;
    }
    v104[0] = v19 + 1;
    sub_259F10("State: %c\n", *v19);
    v40 = v104[0];
    if ( *(_BYTE *)v104[0] )
    {
      v41 = sub_9335C(v104[0], v104, 10);
      v42 = (const char *)sub_98880(v41, HIDWORD(v41));
      sub_259F10("Parent process: %s\n", v42);
      if ( !*(_BYTE *)v104[0] )
        goto LABEL_33;
      v43 = sub_9335C(v104[0], v104, 10);
      v44 = (const char *)sub_98880(v43, HIDWORD(v43));
      sub_259F10("Process group: %s\n", v44);
      v45 = v104[0];
      if ( !*(_BYTE *)v104[0] )
        goto LABEL_68;
      v46 = sub_9335C(v104[0], v104, 10);
      v47 = (const char *)sub_98880(v46, HIDWORD(v46));
      sub_259F10("Session id: %s\n", v47);
      if ( !*(_BYTE *)v104[0] )
        goto LABEL_33;
      v48 = sub_9335C(v104[0], v104, 10);
      v49 = (const char *)sub_98880(v48, HIDWORD(v48));
      sub_259F10("TTY: %s\n", v49);
      v40 = v104[0];
    }
    if ( !*v40 )
      goto LABEL_71;
    v50 = sub_9335C(v40, v104, 10);
    v51 = (const char *)sub_98880(v50, HIDWORD(v50));
    sub_259F10("TTY owner process group: %s\n", v51);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v52 = sub_9335C(v104[0], v104, 10);
    v53 = (const char *)sub_98B08(v52, HIDWORD(v52));
    sub_259F10("Flags: %s\n", v53);
    v45 = v104[0];
LABEL_68:
    if ( !*v45 )
      goto LABEL_74;
    v54 = sub_9335C(v45, v104, 10);
    v55 = (const char *)sub_98880(v54, HIDWORD(v54));
    sub_259F10("Minor faults (no memory page): %s\n", v55);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v56 = sub_9335C(v104[0], v104, 10);
    v57 = (const char *)sub_98880(v56, HIDWORD(v56));
    sub_259F10("Minor faults, children: %s\n", v57);
    v40 = v104[0];
LABEL_71:
    if ( !*v40 )
      goto LABEL_77;
    v58 = sub_9335C(v40, v104, 10);
    v59 = (const char *)sub_98880(v58, HIDWORD(v58));
    sub_259F10("Major faults (memory page faults): %s\n", v59);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v60 = sub_9335C(v104[0], v104, 10);
    v61 = (const char *)sub_98880(v60, HIDWORD(v60));
    sub_259F10("Major faults, children: %s\n", v61);
    v45 = v104[0];
LABEL_74:
    if ( !*v45 )
      goto LABEL_80;
    v62 = sub_9335C(v45, v104, 10);
    v63 = (const char *)sub_98880(v62, HIDWORD(v62));
    sub_259F10("utime: %s\n", v63);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v64 = sub_9335C(v104[0], v104, 10);
    v65 = (const char *)sub_98880(v64, HIDWORD(v64));
    sub_259F10("stime: %s\n", v65);
    v40 = v104[0];
LABEL_77:
    if ( !*v40 )
      goto LABEL_83;
    v66 = sub_9335C(v40, v104, 10);
    v67 = (const char *)sub_98880(v66, HIDWORD(v66));
    sub_259F10("utime, children: %s\n", v67);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v68 = sub_9335C(v104[0], v104, 10);
    v69 = (const char *)sub_98880(v68, HIDWORD(v68));
    sub_259F10("stime, children: %s\n", v69);
    v45 = v104[0];
LABEL_80:
    if ( !*v45 )
      goto LABEL_86;
    v70 = sub_9335C(v45, v104, 10);
    v71 = (const char *)sub_98880(v70, HIDWORD(v70));
    sub_259F10("jiffies remaining in current time slice: %s\n", v71);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v72 = sub_9335C(v104[0], v104, 10);
    v73 = (const char *)sub_98880(v72, HIDWORD(v72));
    sub_259F10("'nice' value: %s\n", v73);
    v40 = v104[0];
LABEL_83:
    if ( !*v40 )
      goto LABEL_89;
    v74 = sub_9335C(v40, v104, 10);
    v75 = (const char *)sub_98880(v74, HIDWORD(v74));
    sub_259F10("jiffies until next timeout: %s\n", v75);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v76 = sub_9335C(v104[0], v104, 10);
    v77 = (const char *)sub_98880(v76, HIDWORD(v76));
    sub_259F10("jiffies until next SIGALRM: %s\n", v77);
    v45 = v104[0];
LABEL_86:
    if ( !*v45 )
      goto LABEL_92;
    v78 = sub_9335C(v45, v104, 10);
    v79 = (const char *)sub_98880(v78, HIDWORD(v78));
    sub_259F10("start time (jiffies since system boot): %s\n", v79);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v80 = sub_9335C(v104[0], v104, 10);
    v81 = (const char *)sub_98880(v80, HIDWORD(v80));
    sub_259F10("Virtual memory size: %s\n", v81);
    v40 = v104[0];
LABEL_89:
    if ( !*v40 )
      goto LABEL_95;
    v82 = sub_9335C(v40, v104, 10);
    v83 = (const char *)sub_98880(v82, HIDWORD(v82));
    sub_259F10("Resident set size: %s\n", v83);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v84 = sub_9335C(v104[0], v104, 10);
    v85 = (const char *)sub_98880(v84, HIDWORD(v84));
    sub_259F10("rlim: %s\n", v85);
    v45 = v104[0];
LABEL_92:
    if ( !*v45 )
      goto LABEL_33;
    v86 = sub_9335C(v45, v104, 10);
    v87 = (const char *)sub_98B08(v86, HIDWORD(v86));
    sub_259F10("Start of text: %s\n", v87);
    if ( !*(_BYTE *)v104[0] )
      goto LABEL_33;
    v88 = sub_9335C(v104[0], v104, 10);
    v89 = (const char *)sub_98B08(v88, HIDWORD(v88));
    sub_259F10("End of text: %s\n", v89);
    v40 = v104[0];
LABEL_95:
    if ( *v40 )
    {
      v90 = sub_9335C(v40, v104, 10);
      v91 = (const char *)sub_98B08(v90, HIDWORD(v90));
      sub_259F10("Start of stack: %s\n", v91);
    }
    goto LABEL_33;
  }
}
