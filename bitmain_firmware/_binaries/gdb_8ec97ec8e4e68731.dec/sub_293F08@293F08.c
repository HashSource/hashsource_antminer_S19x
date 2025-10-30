int __fastcall sub_293F08(char *a1)
{
  int v1; // r8
  char *v2; // r5
  FILE *v3; // r0
  void *v4; // r0
  int v5; // r3
  int v6; // r0
  char *v8; // r0
  char *v9; // r5
  const char *v10; // r0
  int *i; // r6
  int v12; // r3
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r3
  char *v17; // [sp+4h] [bp-8h] BYREF

  v2 = a1;
  if ( !a1 )
  {
    v2 = j_getenv("TERM");
    v3 = (FILE *)dword_48AAAC;
    dword_49011C = 0;
    dword_490150 = 0;
    dword_490140 = 0;
    if ( !dword_48AAAC )
    {
      v1 = 0;
LABEL_6:
      if ( !v2 )
        v2 = "dumb";
      goto LABEL_8;
    }
LABEL_5:
    v1 = fileno(v3);
    goto LABEL_6;
  }
  v3 = (FILE *)dword_48AAAC;
  dword_49011C = 0;
  dword_490150 = 0;
  if ( !dword_48AAAC )
    v1 = 0;
  dword_490140 = 0;
  if ( dword_48AAAC )
    goto LABEL_5;
LABEL_8:
  v4 = (void *)dword_48BAC8;
  if ( (char *)off_470784 != (char *)sub_28ECDC )
  {
LABEL_9:
    if ( v4 )
      free(v4);
    if ( dword_48BACC )
      free((void *)dword_48BACC);
    dword_4707A0 = 0;
    dword_48BAC8 = 0;
    dword_48BACC = 0;
    v17 = 0;
    if ( (dword_490144 <= 0 || (v5 = dword_49014C, dword_49014C <= 0))
      && ((sub_293B90(v1, 0), dword_490144 <= 0) || (v5 = dword_49014C, dword_49014C <= 0)) )
    {
      dword_490144 = 79;
      v6 = 1896;
      dword_49014C = 24;
    }
    else
    {
      v6 = dword_490144 * v5;
    }
    dword_490140 = (int)&unk_38B1A4;
    dword_490130 = v6;
    dword_490108 = 0;
    dword_490114 = 0;
    dword_490148 = 0;
    dword_490128 = 0;
    dword_490110 = 0;
    dword_490138 = 0;
    dword_490134 = (int)"\b";
    dword_48BAD0 = 0;
    dword_48BAB0 = 0;
    dword_48BAB4 = 0;
    dword_48BAAC = 0;
    dword_48BAA8 = 0;
    dword_48BAC0 = 0;
    dword_48BAD4 = 0;
    dword_48BAD8 = 0;
    dword_48BAB8 = 0;
    dword_48BABC = 0;
    dword_48BADC = 0;
    dword_48BAE0 = 0;
    dword_48BAE4 = 0;
    dword_48BAE8 = 0;
    dword_48BAEC = 0;
    dword_48BAF0 = 0;
    dword_48BAF4 = 0;
    dword_48BAF8 = 0;
    dword_49013C = 0;
    dword_49010C = 0;
    PC = 0;
    UP = 0;
    BC = (int)"\b";
    return 0;
  }
  if ( !dword_48BAC8 )
    dword_48BAC8 = (int)sub_93028(0x7F0u);
  v8 = (char *)dword_48BACC;
  if ( !dword_48BACC )
  {
    v8 = (char *)sub_93028(0xFF0u);
    dword_48BACC = (int)v8;
  }
  v17 = (char *)dword_48BAC8;
  if ( tgetent(v8, v2) <= 0 )
  {
    v4 = (void *)dword_48BAC8;
    goto LABEL_9;
  }
  v9 = (char *)&off_3FDBDC;
  v10 = "@7";
  for ( i = &dword_48BABC; ; i = (int *)*((_DWORD *)v9 - 1) )
  {
    v9 += 8;
    *i = (int)tgetstr(v10, &v17);
    if ( "S" == v9 )
      break;
    v10 = (const char *)*((_DWORD *)v9 - 2);
  }
  LOWORD(v12) = dword_490124;
  dword_48BAFC = 1;
  if ( dword_490124 )
    LOWORD(v12) = *(unsigned __int8 *)dword_490124;
  BC = dword_490134;
  PC = v12;
  if ( !dword_490140 )
    LOWORD(v12) = -20060;
  UP = dword_490138;
  if ( !dword_490140 )
  {
    HIWORD(v12) = 56;
    dword_490140 = v12;
  }
  v13 = tgetflag("am");
  if ( v13 )
    v13 = tgetflag("xn") != 0;
  dword_4707A0 = v13;
  if ( dword_490144 <= 0 || dword_49014C <= 0 )
    sub_293B90(v1, 0);
  if ( dword_490108 || dword_49010C )
  {
    v14 = 1;
  }
  else
  {
    v14 = dword_49013C;
    if ( dword_49013C )
      v14 = 1;
  }
  dword_48BAF8 = v14;
  v15 = tgetflag("km");
  if ( v15 )
    v16 = 1;
  else
    dword_48BAE4 = 0;
  if ( !v15 )
  {
    dword_48BAE8 = 0;
    v16 = 0;
  }
  dword_48BAF4 = v16;
  sub_293AEC(&unk_46FF30);
  sub_293AEC(&unk_46E718);
  sub_293AEC(&dword_46DF10);
  return 0;
}
