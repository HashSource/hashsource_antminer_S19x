int __fastcall sub_2D7700(int a1, FILE *s)
{
  int v2; // r7
  int v5; // r6
  int v6; // r8
  int v7; // r6
  int v8; // r1
  char *v9; // r2
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r3
  int v14; // r12
  char *v15; // r7
  char *v16; // r6
  _DWORD *v18; // r3
  int v19; // r3
  int v20; // r0
  unsigned int v21; // r3
  int v22; // r9
  int v23; // r2
  unsigned int v24; // r8
  unsigned int v25; // r3
  char *v26; // r7
  void (__fastcall *v27)(int, char *, unsigned int *); // r10
  unsigned int v28; // r2
  _DWORD *v29; // r3
  int v30; // r6
  const char *v31; // r0
  int v32; // r3
  int k; // r7
  const char *v34; // r2
  _DWORD *i; // r8
  const char *v36; // r2
  int j; // r5
  const char *v38; // r12
  const char *v39; // r2
  const char *v40; // r2
  const char *v41; // r0
  int (__fastcall *v42)(unsigned int); // r3
  unsigned int v43; // [sp+10h] [bp-2Ch]
  void *ptr; // [sp+18h] [bp-24h] BYREF
  unsigned int v45; // [sp+1Ch] [bp-20h] BYREF
  unsigned int v46; // [sp+20h] [bp-1Ch]
  char sa[24]; // [sp+24h] [bp-18h] BYREF

  v2 = 0;
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 68);
  ptr = 0;
  if ( v5 )
  {
    fwrite("\nProgram Header:\n", 1u, 0x11u, s);
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 48);
    if ( v6 )
    {
      v7 = v5 + 32;
      do
      {
        ++v2;
        v9 = sub_2CBA84(*(_DWORD *)(v7 - 32));
        if ( !v9 )
        {
          sprintf(sa, "0x%lx", v8);
          v9 = sa;
        }
        v7 += 32;
        fprintf(s, "%8s off    0x", v9);
        sub_2A7C90(a1, s, *(_DWORD *)(v7 - 56));
        fwrite(" vaddr 0x", 1u, 9u, s);
        sub_2A7C90(a1, s, *(_DWORD *)(v7 - 52));
        fwrite(" paddr 0x", 1u, 9u, s);
        sub_2A7C90(a1, s, *(_DWORD *)(v7 - 48));
        v10 = sub_2ABAF4(*(_DWORD *)(v7 - 36));
        fprintf(s, " align 2**%u\n", v10);
        fwrite(&unk_41A82C, 1u, 0x12u, s);
        sub_2A7C90(a1, s, *(_DWORD *)(v7 - 44));
        fwrite(" memsz 0x", 1u, 9u, s);
        sub_2A7C90(a1, s, *(_DWORD *)(v7 - 40));
        v11 = *(_DWORD *)(v7 - 60);
        if ( (v11 & 4) != 0 )
          v12 = 114;
        else
          v12 = 45;
        if ( (v11 & 2) != 0 )
          v13 = 119;
        else
          v13 = 45;
        if ( (v11 & 1) != 0 )
          v14 = 120;
        else
          v14 = 45;
        fprintf(s, " flags %c%c%c", v12, v13, v14);
        if ( (*(_DWORD *)(v7 - 60) & 0xFFFFFFF8) != 0 )
          fprintf(s, " %lx", *(_DWORD *)(v7 - 60) & 0xFFFFFFF8);
        fputc(10, s);
      }
      while ( v6 != v2 );
    }
  }
  v15 = sub_2AD7AC(a1, ".dynamic");
  if ( !v15 )
    goto LABEL_26;
  fwrite("\nDynamic Section:\n", 1u, 0x12u, s);
  if ( !sub_2ADFDC(a1, (int)v15, (int *)&ptr) )
  {
LABEL_20:
    v16 = (char *)ptr;
    goto LABEL_21;
  }
  v19 = *((_DWORD *)v15 + 35);
  if ( v19 && (v20 = *(_DWORD *)(v19 + 92)) != 0 )
  {
    v16 = (char *)ptr;
    if ( v20 == -257 )
      goto LABEL_21;
  }
  else
  {
    v20 = sub_2CD260(a1, (int)v15);
    v16 = (char *)ptr;
    if ( v20 == -257 )
    {
LABEL_21:
      if ( v16 )
        free(v16);
      return 0;
    }
  }
  v21 = *((_DWORD *)v15 + 9);
  v22 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  v23 = *(_DWORD *)(v22 + 392);
  v24 = *(unsigned __int8 *)(v23 + 6);
  if ( v21 < v24 )
    goto LABEL_21;
  v25 = v21 - v24;
  v26 = &v16[v25];
  if ( !__CFADD__(v16, v25) )
  {
    v27 = *(void (__fastcall **)(int, char *, unsigned int *))(v23 + 48);
    v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 64) + 4 * v20) + 28);
    while ( 1 )
    {
      v27(a1, v16, &v45);
      v28 = v45;
      if ( !v45 )
      {
LABEL_24:
        v16 = (char *)ptr;
        break;
      }
      if ( v45 == 29 )
      {
        fprintf(s, "  %-20s ", "RUNPATH");
      }
      else if ( v45 > 0x1D )
      {
        if ( v45 == 1879047932 )
        {
          fprintf(s, "  %-20s ", "AUDIT");
        }
        else if ( v45 > 0x6FFFFEFC )
        {
          if ( v45 == 1879048187 )
          {
            fprintf(s, "  %-20s ", "FLAGS_1");
            goto LABEL_128;
          }
          if ( v45 <= 0x6FFFFFFB )
          {
            if ( v45 == 1879047935 )
            {
              fprintf(s, "  %-20s ", "SYMINFO");
              goto LABEL_128;
            }
            if ( v45 <= 0x6FFFFEFF )
            {
              if ( v45 == 1879047933 )
                fprintf(s, "  %-20s ", "PLTPAD");
              else
                fprintf(s, "  %-20s ", "MOVETAB");
              goto LABEL_128;
            }
            if ( v45 == 1879048185 )
            {
              fprintf(s, "  %-20s ", "RELACOUNT");
              goto LABEL_128;
            }
            if ( v45 > 0x6FFFFFF9 )
            {
              fprintf(s, "  %-20s ", "RELCOUNT");
              goto LABEL_128;
            }
            if ( v45 == 1879048176 )
            {
              fprintf(s, "  %-20s ", "VERSYM");
              goto LABEL_128;
            }
LABEL_146:
            v42 = *(int (__fastcall **)(unsigned int))(v22 + 236);
            if ( !v42 )
            {
LABEL_150:
              sprintf(sa, "%#lx", v28);
              fprintf(s, "  %-20s ", sa);
              goto LABEL_128;
            }
            v39 = (const char *)v42(v45);
            if ( !*v39 )
            {
              v28 = v45;
              goto LABEL_150;
            }
LABEL_95:
            fprintf(s, "  %-20s ", v39);
LABEL_128:
            fwrite(&word_41A83C, 1u, 2u, s);
            sub_2A7C90(a1, s, v46);
            goto LABEL_129;
          }
          if ( v45 == 1879048191 )
          {
            v39 = "VERNEEDNUM";
            goto LABEL_95;
          }
          if ( v45 <= 0x6FFFFFFF )
          {
            if ( v45 == 1879048189 )
            {
              v39 = "VERDEFNUM";
            }
            else if ( v45 <= 0x6FFFFFFD )
            {
              v39 = "VERDEF";
            }
            else
            {
              v39 = "VERNEED";
            }
            goto LABEL_95;
          }
          switch ( v45 )
          {
            case 0x7FFFFFFEu:
              v39 = "USED";
              goto LABEL_95;
            case 0x7FFFFFFFu:
              v40 = "FILTER";
              break;
            case 0x7FFFFFFDu:
              v40 = "AUXILIARY";
              break;
            default:
              goto LABEL_146;
          }
          fprintf(s, "  %-20s ", v40);
        }
        else
        {
          if ( v45 == 1879047675 )
          {
            fprintf(s, "  %-20s ", "MOVESZ");
            goto LABEL_128;
          }
          if ( v45 <= 0x6FFFFDFB )
          {
            if ( v45 == 33 )
            {
              fprintf(s, "  %-20s ", "PREINIT_ARRAYSZ");
              goto LABEL_128;
            }
            if ( v45 <= 0x21 )
            {
              if ( v45 == 30 )
              {
                fprintf(s, "  %-20s ", "FLAGS");
                goto LABEL_128;
              }
              if ( v45 == 32 )
              {
                fprintf(s, "  %-20s ", "PREINIT_ARRAY");
                goto LABEL_128;
              }
              goto LABEL_146;
            }
            if ( v45 == 1879047673 )
            {
              fprintf(s, "  %-20s ", "PLTPADSZ");
              goto LABEL_128;
            }
            if ( v45 > 0x6FFFFDF9 )
            {
              fprintf(s, "  %-20s ", "MOVEENT");
              goto LABEL_128;
            }
            if ( v45 != 1879047672 )
              goto LABEL_146;
            fprintf(s, "  %-20s ", "CHECKSUM");
            goto LABEL_128;
          }
          if ( v45 == 1879047679 )
          {
            fprintf(s, "  %-20s ", "SYMINENT");
            goto LABEL_128;
          }
          if ( v45 <= 0x6FFFFDFF )
          {
            if ( v45 == 1879047677 )
            {
              fprintf(s, "  %-20s ", "POSFLAG_1");
            }
            else if ( v45 <= 0x6FFFFDFD )
            {
              fprintf(s, "  %-20s ", "FEATURE");
            }
            else
            {
              fprintf(s, "  %-20s ", "SYMINSZ");
            }
            goto LABEL_128;
          }
          if ( v45 == 1879047930 )
          {
            fprintf(s, "  %-20s ", "CONFIG");
          }
          else
          {
            if ( v45 <= 0x6FFFFEFA )
            {
              if ( v45 != 1879047925 )
                goto LABEL_146;
              v39 = "GNU_HASH";
              goto LABEL_95;
            }
            fprintf(s, "  %-20s ", "DEPAUDIT");
          }
        }
      }
      else if ( v45 == 14 )
      {
        fprintf(s, "  %-20s ", "SONAME");
      }
      else if ( v45 > 0xE )
      {
        if ( v45 == 21 )
        {
          fprintf(s, "  %-20s ", "DEBUG");
          goto LABEL_128;
        }
        if ( v45 > 0x15 )
        {
          if ( v45 == 25 )
          {
            fprintf(s, "  %-20s ", "INIT_ARRAY");
          }
          else if ( v45 > 0x19 )
          {
            if ( v45 == 27 )
            {
              fprintf(s, "  %-20s ", "INIT_ARRAYSZ");
            }
            else if ( v45 > 0x1B )
            {
              fprintf(s, "  %-20s ", "FINI_ARRAYSZ");
            }
            else
            {
              fprintf(s, "  %-20s ", "FINI_ARRAY");
            }
          }
          else if ( v45 == 23 )
          {
            fprintf(s, "  %-20s ", "JMPREL");
          }
          else if ( v45 > 0x17 )
          {
            fprintf(s, "  %-20s ", "BIND_NOW");
          }
          else
          {
            fprintf(s, "  %-20s ", "TEXTREL");
          }
          goto LABEL_128;
        }
        if ( v45 == 17 )
        {
          fprintf(s, "  %-20s ", "REL");
          goto LABEL_128;
        }
        if ( v45 > 0x11 )
        {
          if ( v45 == 19 )
          {
            fprintf(s, "  %-20s ", "RELENT");
          }
          else if ( v45 > 0x13 )
          {
            fprintf(s, "  %-20s ", "PLTREL");
          }
          else
          {
            fprintf(s, "  %-20s ", "RELSZ");
          }
          goto LABEL_128;
        }
        if ( v45 != 15 )
        {
          fprintf(s, "  %-20s ", "SYMBOLIC");
          goto LABEL_128;
        }
        fprintf(s, "  %-20s ", "RPATH");
      }
      else
      {
        if ( v45 == 7 )
        {
          fprintf(s, "  %-20s ", "RELA");
          goto LABEL_128;
        }
        if ( v45 > 7 )
        {
          if ( v45 == 10 )
          {
            fprintf(s, "  %-20s ", "STRSZ");
          }
          else if ( v45 <= 0xA )
          {
            if ( v45 == 8 )
              fprintf(s, "  %-20s ", "RELASZ");
            else
              fprintf(s, "  %-20s ", "RELAENT");
          }
          else if ( v45 == 12 )
          {
            fprintf(s, "  %-20s ", "INIT");
          }
          else if ( v45 > 0xC )
          {
            fprintf(s, "  %-20s ", "FINI");
          }
          else
          {
            fprintf(s, "  %-20s ", "SYMENT");
          }
          goto LABEL_128;
        }
        if ( v45 == 3 )
        {
          fprintf(s, "  %-20s ", "PLTGOT");
          goto LABEL_128;
        }
        if ( v45 > 3 )
        {
          if ( v45 == 5 )
          {
            fprintf(s, "  %-20s ", "STRTAB");
          }
          else if ( v45 > 5 )
          {
            fprintf(s, "  %-20s ", "SYMTAB");
          }
          else
          {
            fprintf(s, "  %-20s ", "HASH");
          }
          goto LABEL_128;
        }
        if ( v45 != 1 )
        {
          fprintf(s, "  %-20s ", "PLTRELSZ");
          goto LABEL_128;
        }
        fprintf(s, "  %-20s ", "NEEDED");
      }
      if ( v46 )
      {
        v41 = (const char *)sub_2CD85C(a1, v43, v46);
        if ( !v41 )
          goto LABEL_20;
      }
      else
      {
        v41 = "";
      }
      fputs(v41, s);
LABEL_129:
      v16 += v24;
      fputc(10, s);
      if ( v16 > v26 )
        goto LABEL_24;
      v22 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
    }
  }
  free(v16);
  ptr = 0;
LABEL_26:
  v18 = *(_DWORD **)(a1 + 160);
  if ( v18[583] )
  {
    if ( v18[144] && (!v18[584] || v18[145]) )
      goto LABEL_53;
    goto LABEL_51;
  }
  if ( v18[584] )
  {
    if ( v18[145] )
      goto LABEL_67;
LABEL_51:
    if ( !sub_2D6E9C(a1, 0) )
      return 0;
    v29 = *(_DWORD **)(a1 + 160);
    if ( !v29[583] )
    {
LABEL_66:
      if ( !v29[584] )
        return 1;
LABEL_67:
      fwrite("\nVersion References:\n", 1u, 0x15u, s);
      for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 580); i; i = (_DWORD *)i[7] )
      {
        v36 = (const char *)i[5];
        if ( !v36 )
          v36 = "<corrupt>";
        fprintf(s, "  required from %s:\n", v36);
        for ( j = i[6]; j; j = *(_DWORD *)(j + 20) )
        {
          v38 = *(const char **)(j + 16);
          if ( !v38 )
            v38 = "<corrupt>";
          fprintf(
            s,
            "    0x%8.8lx 0x%2.2x %2.2d %s\n",
            *(_DWORD *)j,
            *(unsigned __int16 *)(j + 4),
            *(unsigned __int16 *)(j + 6),
            v38);
        }
      }
      return 1;
    }
LABEL_53:
    fwrite("\nVersion definitions:\n", 1u, 0x16u, s);
    v29 = *(_DWORD **)(a1 + 160);
    v30 = v29[144];
    if ( v30 )
    {
      do
      {
        while ( 1 )
        {
          v31 = *(const char **)(v30 + 24);
          if ( !v31 )
            v31 = "<corrupt>";
          fprintf(
            s,
            "%d 0x%2.2x 0x%8.8lx %s\n",
            *(unsigned __int16 *)(v30 + 4),
            *(unsigned __int16 *)(v30 + 2),
            *(_DWORD *)(v30 + 8),
            v31);
          v32 = *(_DWORD *)(v30 + 32);
          if ( v32 )
          {
            if ( *(_DWORD *)(v32 + 12) )
              break;
          }
          v30 = *(_DWORD *)(v30 + 28);
          if ( !v30 )
            goto LABEL_65;
        }
        fputc(9, s);
        for ( k = *(_DWORD *)(*(_DWORD *)(v30 + 32) + 12); k; k = *(_DWORD *)(k + 12) )
        {
          v34 = *(const char **)(k + 8);
          if ( !v34 )
            v34 = "<corrupt>";
          fprintf(s, "%s ", v34);
        }
        fputc(10, s);
        v30 = *(_DWORD *)(v30 + 28);
      }
      while ( v30 );
LABEL_65:
      v29 = *(_DWORD **)(a1 + 160);
    }
    goto LABEL_66;
  }
  return 1;
}
