int __fastcall sub_28424C(int result)
{
  int v1; // r8
  FILE *v2; // r0
  int v3; // r6
  int *v4; // r5
  int v5; // r0
  int v6; // r9
  int v7; // r3
  int v8; // r1
  int v9; // r12
  _DWORD *v10; // r0
  tcflag_t c_lflag; // r3
  int v12; // lr
  int *v13; // r2
  tcflag_t c_iflag; // r1
  int v15; // r2
  tcflag_t v16; // r2
  bool v17; // zf
  tcflag_t v18; // r1
  int v19; // r2
  bool v20; // zf
  int v21; // r3
  unsigned __int8 v22; // [sp+0h] [bp-4Ch]
  struct termios termios_p; // [sp+Ch] [bp-40h] BYREF

  if ( !dword_48ABE8 )
  {
    v1 = result;
    sub_290E24();
    v2 = (FILE *)dword_48AAAC;
    if ( !dword_48AAAC )
      v2 = (FILE *)stdin;
    v3 = fileno(v2);
    sub_283F6C(v3);
    v4 = _errno_location();
    *v4 = 0;
    v5 = sub_284090(v3, &termios_p);
    if ( v5 < 0 )
    {
      v19 = *v4;
      v20 = *v4 == 22;
      if ( *v4 != 22 )
        v20 = v19 == 25;
      v21 = v20;
      if ( v19 == 95 )
        v21 |= 1u;
      if ( v21 )
        dword_48AAB8 = 1;
    }
    else
    {
      v6 = dword_46DEE8;
      ::termios_p = termios_p;
      v7 = dword_48AAA0;
      if ( dword_46DEE8 )
      {
        v8 = dword_48AAA0 & 0x40000;
        if ( dword_46DED4 )
        {
          if ( v8 )
          {
            sub_2841A0((int)off_46DED0);
            v6 = dword_46DEE8;
            v7 = dword_48AAA0;
          }
        }
        else if ( v8 )
        {
          sub_2841A0((int)&dword_46DF10);
          v6 = dword_46DEE8;
          v7 = dword_48AAA0;
        }
      }
      dword_48B6AC = ::termios_p.c_cc[0];
      dword_48AAA0 = v7 | 0x40000;
      dword_48B6B0 = ::termios_p.c_cc[1];
      dword_48B6B4 = ::termios_p.c_cc[10];
      byte_48AC31 = ::termios_p.c_cc[10];
      byte_48AC2B = ::termios_p.c_cc[2];
      byte_48AC2C = ::termios_p.c_cc[14];
      byte_48AC2F = ::termios_p.c_cc[0];
      byte_48AC30 = ::termios_p.c_cc[1];
      v9 = ::termios_p.c_cc[4];
      byte_48AC2D = ::termios_p.c_cc[3];
      byte_48AC2E = ::termios_p.c_cc[12];
      byte_48AC33 = ::termios_p.c_cc[8];
      byte_48AC28 = ::termios_p.c_cc[4];
      byte_48AC29 = ::termios_p.c_cc[11];
      byte_48AC2A = ::termios_p.c_cc[16];
      byte_48AC34 = ::termios_p.c_cc[9];
      byte_48AC35 = ::termios_p.c_cc[15];
      byte_48AC36 = ::termios_p.c_cc[13];
      if ( v6 )
      {
        if ( dword_46DED4 )
          LOWORD(v10) = -8496;
        else
          LOWORD(v10) = -8432;
        if ( dword_46DED4 )
        {
          HIWORD(v10) = 70;
          v22 = termios_p.c_cc[15];
        }
        else
        {
          v22 = termios_p.c_cc[15];
          HIWORD(v10) = 70;
        }
        if ( dword_46DED4 )
          v10 = (_DWORD *)*v10;
        sub_283FF4((int)v10, termios_p.c_cc[2], termios_p.c_cc[3], termios_p.c_cc[14], v22);
        v9 = ::termios_p.c_cc[4];
      }
      c_lflag = termios_p.c_lflag;
      v12 = ::termios_p.c_lflag & 8;
      v13 = (int *)(::termios_p.c_lflag & 0x200);
      dword_48B6A8 = (int)v13;
      if ( v9 )
        v13 = &dword_46DEE4;
      c_iflag = termios_p.c_iflag;
      if ( v9 )
        *v13 = v9;
      v15 = v1;
      if ( v1 )
        v15 = 1;
      dword_48AAB8 = v12;
      if ( (termios_p.c_cflag & 0x30) == 0x30 )
        v15 |= 1u;
      v17 = v15 == 0;
      v16 = c_lflag & 0xFFFFFFF4 | 1;
      if ( !v17 )
        c_iflag &= 0xFFFFFFCF;
      v17 = (c_lflag & 0x1000) == 0;
      if ( (c_lflag & 0x1000) != 0 )
        c_lflag &= ~0x1000u;
      v18 = c_iflag & 0xFFFFFEBF;
      if ( !v17 )
        c_lflag = c_lflag & 0xFFFFFFF4 | 1;
      termios_p.c_iflag = v18;
      termios_p.c_lflag = v16;
      if ( !v17 )
        termios_p.c_lflag = c_lflag;
      *(_WORD *)&termios_p.c_cc[5] = 256;
      termios_p.c_cc[15] = 0;
      v5 = sub_283FA4(v3, &termios_p);
      if ( v5 >= 0 )
      {
        if ( dword_490118 )
          sub_29468C(1);
        v5 = fflush((FILE *)dword_48AAB0);
        dword_48ABE8 = 1;
        dword_48AAA0 |= 4u;
      }
    }
    return sub_290E74(v5);
  }
  return result;
}
