int __fastcall sub_432DC(int a1, int a2)
{
  int v4; // r8
  int *v5; // r4
  int v6; // r0
  int *v7; // r6
  int v8; // r2
  int v9; // r8
  int v10; // r3
  struct termios v12; // [sp+0h] [bp-44h] BYREF

  v4 = open64("/dev/datum", 2);
  if ( v4 < 0 )
  {
    v9 = 0;
    sub_64E00(3, "Datum_PTS: open(\"%s\", O_RDWR) failed: %m", "/dev/datum");
  }
  else
  {
    v5 = (int *)sub_63BA4(0, 96, 0, 1);
    v5[2] = a1;
    v5[1] = v4;
    *((_QWORD *)v5 + 10) = 0;
    v5[8] = 0;
    if ( fcntl(v4, 4, 0) == -1 )
      sub_64E00(3, "MSF_ARCRON(%d): fcntl(F_SETFL, 0): %m.", a1);
    memset(&v12.c_oflag, 0, 0x38u);
    v12.c_cc[5] = 30;
    v6 = v5[1];
    v12.c_iflag = 1;
    v12.c_cflag = 2493;
    if ( tcsetattr(v6, 0, &v12) < 0 )
    {
      v9 = 0;
      sub_64E00(3, "Datum_PTS: tcsetattr(\"%s\") failed: %m", "/dev/datum");
      close(v5[1]);
      free(v5);
    }
    else
    {
      v7 = *(int **)(a2 + 84);
      v8 = v5[1];
      *v5 = a2;
      v7[5] = a2;
      v7[3] = (int)sub_42FF0;
      v7[6] = 0;
      v7[7] = v8;
      v9 = sub_18DF0(v7 + 2);
      if ( v9 )
      {
        v9 = 1;
        v10 = dword_BCD58;
        **(_DWORD **)(a2 + 84) = v5;
        dword_BCD58 = v10 + 1;
      }
      else
      {
        v7[7] = -1;
        sub_64E00(3, "Datum_PTS: Problem adding clock");
        close(v5[1]);
        free(v5);
      }
    }
  }
  return v9;
}
