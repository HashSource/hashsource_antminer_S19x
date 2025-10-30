int __fastcall sub_16DD88(int a1, unsigned int *a2, int a3, int a4)
{
  const struct sigaction *v7; // r4
  struct sigaction *v8; // r7
  unsigned int v9; // r6
  struct sigaction *v10; // r2
  bool v11; // cc
  int v12; // r0
  FILE *v13; // r6
  FILE *v14; // r6
  int v15; // r9
  int v16; // r3
  int i; // r6
  const struct sigaction *v18; // r1
  bool v19; // zf
  int v20; // r0
  int v22; // r0
  int v23; // r0
  char *v24; // r0
  char v26[8]; // [sp+8h] [bp-200Ch] BYREF
  struct sigaction s[58]; // [sp+10h] [bp-2004h] BYREF

  dword_6E1D40 = 0;
  dword_6E1D4C = 0;
  v7 = (const struct sigaction *)&unk_6E1DDC;
  v8 = (struct sigaction *)&unk_6E1DDC;
  memset(s, 0, 0x8Cu);
  v9 = 1;
  s[0].sa_handler = (__sighandler_t)sub_16DCFC;
  do
  {
    v10 = v8;
    v11 = v9 > 0xC;
    if ( v9 != 12 )
      v11 = v9 - 9 > 1;
    v12 = v9;
    ++v8;
    ++v9;
    if ( v11 )
      sigaction(v12, s, v10);
  }
  while ( v9 != 32 );
  signal(28, 0);
  dword_6E1D4C = 1;
  if ( a3 )
  {
    v13 = (FILE *)dword_6E1D44;
  }
  else
  {
    unk_6E2ED0 = unk_6E2F0C;
    unk_6E2ED4 = unk_6E2F10;
    unk_6E2ED8 = unk_6E2F14;
    dword_6E2EDC = unk_6E2F18 & 0xFFFFFFF7;
    unk_6E2EE0 = unk_6E2F1C;
    unk_6E2EE4 = unk_6E2F20;
    unk_6E2EE8 = unk_6E2F24;
    unk_6E2EEC = unk_6E2F28;
    unk_6E2EF0 = unk_6E2F2C;
    unk_6E2EF4 = unk_6E2F30;
    unk_6E2EF8 = unk_6E2F34;
    unk_6E2EFC = unk_6E2F38;
    unk_6E2F00 = unk_6E2F3C;
    unk_6E2F04 = unk_6E2F40;
    unk_6E2F08 = unk_6E2F44;
    v13 = (FILE *)dword_6E1D44;
    if ( dword_6E2F48 )
    {
      v22 = fileno((FILE *)dword_6E1D44);
      if ( tcsetattr(v22, 0, (const struct termios *)&unk_6E2ED0) == -1 )
      {
        v15 = -1;
        if ( dword_6E1D40 != 2 )
          v15 = 0;
        goto LABEL_26;
      }
    }
  }
  LOBYTE(s[0].sa_handler) = 0;
  dword_6E1D4C = 2;
  if ( !fgets((char *)s, 0x1FFF, v13) )
    goto LABEL_12;
  v14 = (FILE *)dword_6E1D44;
  if ( feof((FILE *)dword_6E1D44) || ferror(v14) )
    goto LABEL_12;
  v24 = strchr((const char *)s, 10);
  if ( !v24 )
  {
    while ( fgets(v26, 4, v14) )
    {
      if ( strchr(v26, 10) )
        goto LABEL_35;
    }
LABEL_12:
    v15 = 0;
    goto LABEL_13;
  }
  if ( a4 )
    *v24 = 0;
LABEL_35:
  v15 = sub_16DCD0(a1, a2, (char *)s) >= 0;
LABEL_13:
  if ( dword_6E1D40 == 2 )
    v15 = -1;
  if ( !a3 )
  {
LABEL_26:
    fputc(10, (FILE *)dword_6E1D48);
    v16 = dword_6E1D4C;
    if ( dword_6E1D4C > 1 )
    {
      unk_6E2ED0 = unk_6E2F0C;
      unk_6E2ED4 = unk_6E2F10;
      unk_6E2ED8 = unk_6E2F14;
      dword_6E2EDC = unk_6E2F18;
      unk_6E2EE0 = unk_6E2F1C;
      unk_6E2EE4 = unk_6E2F20;
      unk_6E2EE8 = unk_6E2F24;
      unk_6E2EEC = unk_6E2F28;
      unk_6E2EF0 = unk_6E2F2C;
      unk_6E2EF4 = unk_6E2F30;
      unk_6E2EF8 = unk_6E2F34;
      unk_6E2EFC = unk_6E2F38;
      unk_6E2F00 = unk_6E2F3C;
      unk_6E2F04 = unk_6E2F40;
      unk_6E2F08 = unk_6E2F44;
      if ( dword_6E2F48 )
      {
        v23 = fileno((FILE *)dword_6E1D44);
        if ( tcsetattr(v23, 0, (const struct termios *)&unk_6E2ED0) == -1 )
          v15 = 0;
      }
      goto LABEL_17;
    }
LABEL_36:
    if ( v16 <= 0 )
      goto LABEL_21;
    goto LABEL_17;
  }
  v16 = dword_6E1D4C;
  if ( dword_6E1D4C <= 1 )
    goto LABEL_36;
LABEL_17:
  for ( i = 1; i != 32; ++i )
  {
    v18 = v7;
    v19 = ((i - 10) & 0xFFFFFFFD) == 0;
    v20 = i;
    ++v7;
    if ( !v19 )
      sigaction(v20, v18, 0);
  }
LABEL_21:
  sub_E07F8(s, 0x2000u);
  return v15;
}
