void __fastcall __noreturn sub_1A4334(int *a1)
{
  int v2; // r6
  char *const *v3; // r7
  char *v4; // r0
  void *v5; // r8
  int v6; // r0
  int v7; // r3
  char *v8; // r0
  _BYTE *v9; // r0
  int v10; // r0
  const char *v11; // r9
  const char *v12; // r5
  int v13; // r0
  char **v14; // r3
  int v15; // r0
  char *v16; // r1
  int v17; // r0
  int v18; // r3
  _DWORD *v19; // r11
  int v20; // r0
  _BOOL4 v21; // r0
  char *v22; // r8
  int v23; // r3
  int v24; // r0
  int v25; // r1
  int v26; // r0
  int v27; // r6
  char *v28; // r7
  _DWORD *v29; // r3
  _BYTE *v30; // r2
  int v31; // r7
  int v32; // r0
  char *v33; // r1
  int v34; // r2
  _BOOL4 v35; // r1
  _DWORD *v36; // r3
  unsigned int v37; // r7
  int *v38; // r7
  bool v39; // zf
  int v40; // r10
  bool v41; // zf
  _DWORD *i; // r5
  _DWORD *v43; // r3
  _BYTE *v44; // r2
  int v45; // r0
  char *v46; // r1
  int v47; // r4
  int v48; // r0
  _DWORD *v49; // r0
  _DWORD *v50; // r0
  _DWORD *v51; // r0
  int v52; // r0
  _BOOL4 v53; // r3
  int v54; // r0
  char *v55; // r3
  _BOOL4 v56; // r2
  _DWORD *v57; // r0
  int v58; // r0
  _DWORD *v59; // r0
  _DWORD *v60; // r0
  int v61; // r0
  _DWORD *v62; // r0
  _DWORD *v63; // r0
  int v64; // [sp+8h] [bp-8Ch]
  int v65; // [sp+Ch] [bp-88h]
  char *ptr; // [sp+10h] [bp-84h]
  int v67; // [sp+14h] [bp-80h]
  _BYTE *v68; // [sp+18h] [bp-7Ch]
  int v69; // [sp+2Ch] [bp-68h] BYREF
  int v70; // [sp+30h] [bp-64h] BYREF
  char *s2; // [sp+34h] [bp-60h] BYREF
  int v72; // [sp+38h] [bp-5Ch] BYREF
  const char *v73; // [sp+3Ch] [bp-58h] BYREF
  int longind; // [sp+40h] [bp-54h] BYREF
  void *v75; // [sp+44h] [bp-50h] BYREF
  _BYTE *v76; // [sp+48h] [bp-4Ch]
  int v77; // [sp+4Ch] [bp-48h]
  void *v78; // [sp+50h] [bp-44h] BYREF
  char *v79; // [sp+54h] [bp-40h]
  char *v80; // [sp+58h] [bp-3Ch]
  struct sigaltstack endptr; // [sp+5Ch] [bp-38h] BYREF
  _BYTE v82[40]; // [sp+68h] [bp-2Ch] BYREF

  sub_92E28();
  v2 = *a1;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v3 = (char *const *)a1[1];
  dword_48A58C = (int)sbrk(0);
  sub_1A69E0((int)v82, 0);
  setlocale(5, "");
  v4 = setlocale(0, "");
  nullsub_32(v4);
  sub_965F0();
  dword_48A4EC = sub_327254("");
  v5 = sub_9836C(0x5Cu);
  v6 = sub_242FF0((int)v5, (FILE *)stdin);
  dword_48768C = (int)v5;
  dword_487668 = (int)v5;
  dword_487A38 = *(_DWORD *)sub_242FB4(v6);
  v7 = *(_DWORD *)sub_242FA0();
  v8 = *v3;
  dword_487A3C = v7;
  dword_487A30 = sub_327254(v8);
  ptr = sub_93140("%s: warning: ", (const char *)dword_487A30);
  off_46DE30 = ptr;
  dword_48A4F8 = sub_336420(0);
  if ( !dword_48A4F8 )
    sub_258B14("error finding working directory");
  v9 = sub_1A425C((int)"", 0);
  dword_487A40 = (int)v9;
  if ( v9 )
  {
    if ( *v9 )
      goto LABEL_7;
    free(v9);
  }
  dword_487A40 = sub_327254("target:");
LABEL_7:
  dword_489698 = (int)sub_1A425C((int)"/usr/lib/debug", 1);
  dword_487A34 = (int)sub_1A425C((int)"/usr/share/gdb", 1);
  v10 = sub_327254(a1[2]);
  v11 = 0;
  v12 = 0;
  v68 = 0;
  v67 = 0;
  v65 = 0;
  v64 = 0;
LABEL_8:
  dword_487A44 = v10;
  while ( 1 )
  {
    v13 = getopt_long_only(v2, v3, "", (const struct option *)&off_46D620, &longind);
    if ( v13 == -1 || dword_487A48 )
      break;
    if ( v13 )
    {
LABEL_14:
      switch ( v13 )
      {
        case 10:
          v12 = (const char *)optarg;
          v11 = (const char *)optarg;
          continue;
        case 11:
          v67 = optarg;
          continue;
        case 12:
          dword_48968C = strtol((const char *)optarg, 0, 10);
          continue;
        case 13:
          sub_1A6770(1);
          sub_1A6780(1);
          continue;
        case 14:
          sub_946E0("%s: TUI mode is not supported", (const char *)dword_487A30);
        case 15:
          if ( dword_487A44 )
            free((void *)dword_487A44);
          v10 = sub_327254("console");
          goto LABEL_8;
        case 17:
          v18 = 2;
          goto LABEL_35;
        case 18:
          v18 = 3;
          goto LABEL_35;
        case 19:
          dword_4896C8 = 1;
          if ( dword_4896CC )
            sub_946E0(
              "%s: '--readnow' and '--readnever' cannot be specified simultaneously",
              (const char *)dword_487A30);
          continue;
        case 20:
          dword_4896CC = 1;
          if ( dword_4896C8 )
            sub_946E0(
              "%s: '--readnow' and '--readnever' cannot be specified simultaneously",
              (const char *)dword_487A30);
          continue;
        case 63:
          sub_946E0("Use `%s --help' for a complete list of options.", (const char *)dword_487A30);
        case 66:
          dword_487A4C = 1;
          dword_487A50 = 1;
          v19 = sub_9836C(4u);
          *v19 = 0;
          v20 = sub_256760(v19);
          *v19 = off_3F29C4;
          *(_DWORD *)sub_242F8C(v20) = v19;
          continue;
        case 68:
          if ( !*(_BYTE *)optarg )
            sub_946E0("%s: empty path for `--data-directory'", (const char *)dword_487A30);
          sub_1A4188((const char *)optarg);
          continue;
        case 88:
          v18 = 1;
          goto LABEL_35;
        case 98:
          v17 = strtol((const char *)optarg, (char **)&endptr, 0);
          if ( !v17 && endptr.ss_sp == (void *)optarg )
            sub_946B0("could not set baud rate to `%s'.", (const char *)endptr.ss_sp);
          else
            dword_46DB60 = v17;
          continue;
        case 99:
          v65 = optarg;
          continue;
        case 100:
          if ( v79 == v80 )
          {
            sub_940D0((int *)&v78, v79, &optarg);
          }
          else
          {
            v16 = v79 + 4;
            if ( v79 )
              *(_DWORD *)v79 = optarg;
            v79 = v16;
          }
          continue;
        case 101:
          v11 = (const char *)optarg;
          continue;
        case 102:
          dword_48968C = 1;
          continue;
        case 105:
          if ( dword_487A44 )
            free((void *)dword_487A44);
          v10 = sub_327254(optarg);
          goto LABEL_8;
        case 108:
          v15 = strtol((const char *)optarg, (char **)&endptr, 0);
          if ( !v15 && endptr.ss_sp == (void *)optarg )
            sub_946B0("could not set timeout limit to `%s'.", (const char *)endptr.ss_sp);
          else
            dword_46DCE8 = v15;
          continue;
        case 112:
          v64 = optarg;
          continue;
        case 113:
          dword_487A54 = 1;
          continue;
        case 115:
          v12 = (const char *)optarg;
          continue;
        case 116:
          v68 = (_BYTE *)optarg;
          continue;
        case 120:
          v18 = 0;
LABEL_35:
          endptr.ss_sp = (void *)v18;
          sub_1A55D0(&v75, &endptr, &optarg);
          break;
        default:
          continue;
      }
    }
    else
    {
      v14 = &(&off_46D620)[4 * longind];
      if ( !v14[2] )
      {
        v13 = (int)v14[3];
        goto LABEL_14;
      }
    }
  }
  if ( dword_487A50 )
  {
    v21 = 1;
    dword_487A54 = 1;
  }
  else
  {
    v21 = dword_487A54 != 0;
  }
  sub_99D3C(v21);
  endptr.ss_sp = sub_93028(0x2000u);
  endptr.ss_flags = 0;
  endptr.ss_size = 0x2000;
  sigaltstack(&endptr, 0);
  sub_244E68(dword_487A30);
  v22 = (char *)dword_487A48;
  v23 = optind;
  if ( dword_487A48 )
  {
    if ( v2 <= optind )
      sub_946E0("%s: `--args' specified but no program specified", (const char *)dword_487A30);
    v24 = v2 - (optind + 1);
    v12 = v3[optind];
    v25 = (int)&v3[++optind];
    sub_17FC04(v24, v25);
    v11 = v12;
    v22 = 0;
LABEL_59:
    v26 = sub_1A3F0C((int)&v69, &v70, (int *)&s2);
    if ( dword_487A58 )
    {
      v51 = (_DWORD *)sub_242F8C(v26);
      sub_2443AC(*v51);
    }
    else
    {
      if ( dword_487A5C )
      {
        v47 = *(_DWORD *)sub_242F8C(v26);
        sub_1A3F0C((int)&v73, &longind, (int *)&endptr);
        sub_256850(
          "This is the GNU debugger.  Usage:\n"
          "\n"
          "    gdb [options] [executable-file [core-file or process-id]]\n"
          "    gdb [options] --args executable-file [inferior-arguments ...]\n"
          "\n",
          v47);
        sub_256850(
          "Selection of debuggee and its files:\n"
          "\n"
          "  --args             Arguments after executable-file are passed to inferior\n"
          "  --core=COREFILE    Analyze the core dump COREFILE.\n"
          "  --exec=EXECFILE    Use EXECFILE as the executable.\n"
          "  --pid=PID          Attach to running process PID.\n"
          "  --directory=DIR    Search for source files in DIR.\n"
          "  --se=FILE          Use FILE as symbol file and executable file.\n"
          "  --symbols=SYMFILE  Read symbols from SYMFILE.\n"
          "  --readnow          Fully read symbol files on first access.\n"
          "  --readnever        Do not read symbol files.\n"
          "  --write            Set writing into executable and core files.\n"
          "\n",
          v47);
        sub_256850(
          "Initial commands and command files:\n"
          "\n"
          "  --command=FILE, -x Execute GDB commands from FILE.\n"
          "  --init-command=FILE, -ix\n"
          "                     Like -x but execute commands before loading inferior.\n"
          "  --eval-command=COMMAND, -ex\n"
          "                     Execute a single GDB command.\n"
          "                     May be used multiple times and in conjunction\n"
          "                     with --command.\n"
          "  --init-eval-command=COMMAND, -iex\n"
          "                     Like -ex but before loading inferior.\n"
          "  --nh               Do not read ~/.gdbinit.\n"
          "  --nx               Do not read any .gdbinit files in any directory.\n"
          "\n",
          v47);
        sub_256850(
          "Output and user interface control:\n"
          "\n"
          "  --fullname         Output information used by emacs-GDB interface.\n"
          "  --interpreter=INTERP\n"
          "                     Select a specific interpreter / user interface\n"
          "  --tty=TTY          Use TTY for input/output by the program being debugged.\n"
          "  -w                 Use the GUI interface.\n"
          "  --nw               Do not use the GUI interface.\n",
          v47);
        sub_256850(
          "  --dbx              DBX compatibility mode.\n"
          "  -q, --quiet, --silent\n"
          "                     Do not print version number on startup.\n"
          "\n",
          v47);
        sub_256850(
          "Operating modes:\n"
          "\n"
          "  --batch            Exit after processing options.\n"
          "  --batch-silent     Like --batch, but suppress all gdb stdout output.\n"
          "  --return-child-result\n"
          "                     GDB exit code will be the child's exit code.\n"
          "  --configuration    Print details about GDB configuration and then exit.\n"
          "  --help             Print this message and then exit.\n"
          "  --version          Print version information and then exit.\n"
          "\n"
          "Remote debugging options:\n"
          "\n"
          "  -b BAUDRATE        Set serial port baud rate used for remote debugging.\n"
          "  -l TIMEOUT         Set timeout in seconds for remote debugging.\n"
          "\n"
          "Other options:\n"
          "\n"
          "  --cd=DIR           Change current directory to DIR.\n"
          "  --data-directory=DIR, -D\n"
          "                     Set GDB's data-directory to DIR.\n",
          v47);
        sub_256850("\nAt startup, GDB reads the following init files and executes their commands:\n", v47);
        if ( v73 )
          sub_2594B0(v47, "   * system-wide init file: %s\n", v73);
        if ( longind )
          sub_2594B0(v47, "   * user-specific init file: %s\n", (const char *)longind);
        if ( endptr.ss_sp )
          sub_2594B0(
            v47,
            "   * local init file (see also 'set auto-load local-gdbinit'): ./%s\n",
            (const char *)endptr.ss_sp);
        v48 = sub_256850(
                "\n"
                "For more information, type \"help\" from within GDB, or consult the\n"
                "GDB manual (available as on-line info or a printed manual).\n",
                v47);
        v49 = (_DWORD *)sub_242F8C(v48);
        if ( v47 == *v49 )
          v49 = (_DWORD *)sub_2594B0(v47, "Report bugs to \"%s\".\n", "<http://www.gnu.org/software/gdb/bugs/>");
        v50 = (_DWORD *)sub_242F8C(v49);
        sub_256850(&word_356638, *v50);
LABEL_127:
        exit(0);
      }
      v27 = dword_487A60;
      if ( !dword_487A60 )
      {
        v28 = (char *)dword_487A44;
        if ( !dword_487A54 && !strcmp((const char *)dword_487A44, "mi1") )
        {
          v60 = (_DWORD *)sub_242F8C(0);
          sub_2443AC(*v60);
          if ( v12 )
            sub_259F10((const char *)&word_3BB850);
          sub_259B58("");
          v61 = sub_259F10((const char *)&word_356638);
          v62 = (_DWORD *)sub_242F8C(v61);
          sub_25680C(*v62);
          v28 = (char *)dword_487A44;
        }
        sub_191624(v28);
        if ( !dword_487A54 && !sub_191740("mi1") )
        {
          v57 = (_DWORD *)sub_242F8C(0);
          sub_2443AC(*v57);
          if ( v12 )
            sub_259F10((const char *)&word_3BB850);
          sub_259B58("");
          v58 = sub_259F10((const char *)&word_356638);
          v59 = (_DWORD *)sub_242F8C(v58);
          sub_25680C(*v59);
        }
        if ( ptr )
          free(ptr);
        off_46DE30 = "\nwarning: ";
        if ( v69 )
        {
          if ( dword_48A594 )
            goto LABEL_69;
          sub_1A408C((void (__fastcall *)(int, int))sub_52AA4, v69, 0);
        }
        if ( v70 && !dword_48A594 && !dword_487A64 )
          sub_1A408C((void (__fastcall *)(int, int))sub_52AA4, v70, 0);
LABEL_69:
        v29 = v75;
        v30 = v76;
        if ( v75 != v76 )
        {
          v31 = 0;
          while ( 1 )
          {
            v32 = v29[2 * v31];
            v33 = (char *)&v29[2 * v31];
            if ( v32 == 2 )
              break;
            if ( v32 == 3 )
            {
              sub_1A408C((void (__fastcall *)(int, int))sub_2435B0, *((_DWORD *)v33 + 1), dword_487A50 == 0);
LABEL_73:
              v29 = v75;
              v30 = v76;
            }
            if ( ++v31 >= (unsigned int)((v30 - (_BYTE *)v29) >> 3) )
              goto LABEL_84;
          }
          sub_1A408C((void (__fastcall *)(int, int))sub_52AA4, *((_DWORD *)v33 + 1), dword_487A50 == 0);
          goto LABEL_73;
        }
LABEL_84:
        if ( v67 )
          sub_1A408C((void (__fastcall *)(int, int))&loc_4F0F4, v67, 0);
        v36 = v78;
        if ( v79 != v78 )
        {
          v37 = 0;
          do
          {
            sub_1A408C((void (__fastcall *)(int, int))sub_203A08, v36[v37], 0);
            v36 = v78;
            ++v37;
          }
          while ( v37 < (v79 - (_BYTE *)v78) >> 2 );
        }
        LOWORD(v38) = (unsigned __int16)&dword_46BC20;
        v39 = v11 == 0;
        if ( v11 )
          v39 = v12 == 0;
        HIWORD(v38) = (unsigned int)&dword_46BC20 >> 16;
        v40 = *v38;
        *v38 = 0;
        if ( v39 )
        {
          if ( !v11 )
            goto LABEL_95;
          v53 = dword_487A50 == 0;
        }
        else
        {
          v52 = strcmp(v11, v12);
          v53 = dword_487A50 == 0;
          if ( !v52 )
          {
            if ( !sub_1A408C((void (__fastcall *)(int, int))sub_94D50, (int)v11, dword_487A50 == 0) )
            {
LABEL_97:
              v41 = v65 == 0;
              if ( v65 )
                v41 = v64 == 0;
              if ( !v41 )
                sub_946E0("Can't attach to process and specify a core file at the same time.");
              if ( v65 )
              {
                sub_1A408C((void (__fastcall *)(int, int))sub_FA354, v65, dword_487A50 == 0);
              }
              else if ( v64 )
              {
                sub_1A408C((void (__fastcall *)(int, int))sub_181EF8, v64, dword_487A50 == 0);
              }
              else if ( v22 )
              {
                v56 = dword_487A50 == 0;
                if ( (unsigned int)(unsigned __int8)*v22 - 48 <= 9 )
                {
                  if ( !sub_1A408C((void (__fastcall *)(int, int))sub_181EF8, (int)v22, v56) )
                    sub_1A408C((void (__fastcall *)(int, int))sub_FA354, (int)v22, dword_487A50 == 0);
                }
                else
                {
                  sub_1A408C((void (__fastcall *)(int, int))sub_FA354, (int)v22, v56);
                }
              }
              if ( v68 )
                sub_17FB2C(v68);
              off_46DE30 = "warning: ";
              if ( s2 )
              {
                sub_984A4(&v72, (int)s2);
                dword_478220 = v72;
                if ( !dword_48A594
                  && dword_46BC1C
                  && sub_BA030(s2, (int)"auto-load: Loading .gdbinit file \"%s\".\n", s2) )
                {
                  dword_478224 = 1;
                  sub_1A408C((void (__fastcall *)(int, int))sub_52AA4, (int)s2, 0);
                }
              }
              *v38 = v40;
              for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
                sub_BAAEC(i);
              v43 = v75;
              v44 = v76;
              if ( v76 == v75 )
              {
LABEL_132:
                sub_244D24();
                if ( dword_487A50 )
                  sub_2446B8(0, 0);
                sub_1A6790(v82);
                if ( v78 )
                  sub_339E64(v78);
                if ( v75 )
                  sub_339E64(v75);
                sub_92E28();
                sub_1A4034();
              }
              while ( 1 )
              {
                v45 = v43[2 * v27];
                v46 = (char *)&v43[2 * v27];
                if ( !v45 )
                  break;
                if ( v45 == 1 )
                {
                  sub_1A408C((void (__fastcall *)(int, int))sub_2435B0, *((_DWORD *)v46 + 1), dword_487A50 == 0);
LABEL_114:
                  v43 = v75;
                  v44 = v76;
                }
                if ( ++v27 >= (unsigned int)((v44 - (_BYTE *)v43) >> 3) )
                  goto LABEL_132;
              }
              sub_1A408C((void (__fastcall *)(int, int))sub_52AA4, *((_DWORD *)v46 + 1), dword_487A50 == 0);
              goto LABEL_114;
            }
LABEL_96:
            sub_1A408C((void (__fastcall *)(int, int))sub_1A3EFC, (int)v12, dword_487A50 == 0);
            goto LABEL_97;
          }
        }
        sub_1A408C((void (__fastcall *)(int, int))sub_94D50, (int)v11, v53);
LABEL_95:
        if ( !v12 )
          goto LABEL_97;
        goto LABEL_96;
      }
      v63 = (_DWORD *)sub_242F8C(v26);
      sub_2444C4(*v63);
    }
    sub_259B58("");
    sub_259F10((const char *)&word_356638);
    goto LABEL_127;
  }
  if ( v2 <= optind )
    goto LABEL_59;
  v12 = v3[optind];
  v34 = optind + 1;
  v35 = v65 == 0;
  if ( v64 )
    v35 = 0;
  ++optind;
  if ( v35 )
  {
    if ( v2 <= v34 )
    {
LABEL_146:
      v11 = v12;
      goto LABEL_59;
    }
    v22 = v3[v34];
    v34 = v23 + 2;
    optind = v23 + 2;
  }
  else
  {
    v22 = 0;
  }
  if ( v2 > v34 )
  {
    v54 = *(_DWORD *)sub_242FB4(v64);
    if ( optind == v2 - 1 )
      v55 = "";
    else
      v55 = " ...";
    sub_2594B0(v54, "Excess command line arguments ignored. (%s%s)\n", v3[optind], v55);
  }
  goto LABEL_146;
}
