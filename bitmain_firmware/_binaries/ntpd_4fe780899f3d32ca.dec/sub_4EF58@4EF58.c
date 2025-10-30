int __fastcall sub_4EF58(int a1, int a2)
{
  char *v3; // r8
  tcflag_t v4; // r4
  int v6; // r7
  int v7; // r2
  _WORD *v9; // [sp+Ch] [bp-60h]
  struct termios v10; // [sp+14h] [bp-58h] BYREF
  char v11[20]; // [sp+50h] [bp-1Ch] BYREF

  if ( a1 > 0 )
  {
    sub_64E00(3, "leitch_start: unit %d invalid", a1);
    return 0;
  }
  else
  {
    v3 = (char *)word_BD578 + a1;
    v4 = *((unsigned __int8 *)&word_BD578[54] + a1);
    if ( *((_BYTE *)&word_BD578[54] + a1) )
    {
      sub_64E00(3, "leitch_start: unit %d in use", a1);
      return 0;
    }
    else
    {
      sub_6C054(v11, 20, "/dev/leitch%d", a1);
      v6 = open64(v11, 2);
      if ( v6 == -1 )
      {
        sub_64E00(3, "leitch_start: open of %s: %m", v11);
        return v4;
      }
      else
      {
        v9 = &word_BD578[54 * a1];
        memset(v9, v4, 0x6Cu);
        if ( tcgetattr(v6, &v10) < 0 )
        {
          sub_64E00(3, "leitch_start: tcgetattr(%s): %m", v11);
        }
        else
        {
          v10.c_cflag = 2231;
          v10.c_oflag = v4;
          v10.c_cc[3] = v4;
          v10.c_cc[2] = v4;
          v10.c_iflag = 261;
          v10.c_lflag = 2;
          if ( tcsetattr(v6, v4, &v10) < 0 )
          {
            sub_64E00(3, "leitch_start: tcsetattr(%s): %m", v11);
          }
          else if ( tcflush(v6, 2) < 0 )
          {
            sub_64E00(3, "leitch_start: tcflush(%s): %m", v11);
          }
          else
          {
            *(_DWORD *)&word_BD578[54 * a1] = a2;
            *((_DWORD *)v9 + 5) = v4;
            *((_DWORD *)v9 + 2) = sub_4E854;
            *((_BYTE *)v9 + 36) = a1;
            *((_DWORD *)v9 + 4) = a2;
            *((_DWORD *)v9 + 6) = v6;
            *((_DWORD *)v9 + 13) = 983040;
            if ( sub_18DF0((int *)&word_BD578[54 * a1 + 2]) )
            {
              v7 = *(_DWORD *)&word_BD578[2 * a1 + 56];
              *(_BYTE *)(a2 + 93) = v3[116];
              *(_BYTE *)(a2 + 95) = -20;
              *(_DWORD *)(a2 + 112) = v7;
              v3[108] = 1;
              return 1;
            }
            *((_DWORD *)v9 + 6) = -1;
          }
        }
        close(v6);
        return 0;
      }
    }
  }
}
