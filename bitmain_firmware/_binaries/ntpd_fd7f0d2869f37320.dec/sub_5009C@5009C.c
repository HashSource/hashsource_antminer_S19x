int __fastcall sub_5009C(int a1, int a2)
{
  char *v3; // r9
  tcflag_t v4; // r4
  int v6; // r6
  _WORD *v7; // r10
  int v8; // r1
  struct termios v10; // [sp+14h] [bp-58h] BYREF
  char v11[20]; // [sp+50h] [bp-1Ch] BYREF

  if ( a1 > 0 )
  {
    sub_65D40(3, "leitch_start: unit %d invalid", a1);
    return 0;
  }
  else
  {
    v3 = (char *)word_BE58C + a1;
    v4 = *((unsigned __int8 *)&word_BE58C[54] + a1);
    if ( *((_BYTE *)&word_BE58C[54] + a1) )
    {
      sub_65D40(3, "leitch_start: unit %d in use", a1);
      return 0;
    }
    else
    {
      sub_6D00C(v11, 20, "/dev/leitch%d", a1);
      v6 = open64(v11, 2);
      if ( v6 == -1 )
      {
        sub_65D40(3, "leitch_start: open of %s: %m", v11);
        return v4;
      }
      else
      {
        v7 = &word_BE58C[54 * a1];
        memset(v7, v4, 0x6Cu);
        if ( tcgetattr(v6, &v10) < 0 )
        {
          sub_65D40(3, "leitch_start: tcgetattr(%s): %m", v11);
        }
        else
        {
          v10.c_oflag = v4;
          v10.c_cc[3] = v4;
          v10.c_cc[2] = v4;
          v10.c_iflag = 261;
          v10.c_cflag = 2231;
          v10.c_lflag = 2;
          if ( tcsetattr(v6, v4, &v10) < 0 )
          {
            sub_65D40(3, "leitch_start: tcsetattr(%s): %m", v11);
          }
          else if ( tcflush(v6, 2) < 0 )
          {
            sub_65D40(3, "leitch_start: tcflush(%s): %m", v11);
          }
          else
          {
            *((_BYTE *)v7 + 36) = a1;
            *((_DWORD *)v7 + 2) = sub_4F958;
            *((_DWORD *)v7 + 4) = a2;
            v7[27] = 15;
            v7[26] = v4;
            *((_DWORD *)v7 + 5) = v4;
            *(_DWORD *)&word_BE58C[54 * a1] = a2;
            *((_DWORD *)v7 + 6) = v6;
            if ( sub_19084((_DWORD *)v7 + 1) )
            {
              v8 = *(_DWORD *)&word_BE58C[2 * a1 + 56];
              *(_BYTE *)(a2 + 93) = v3[116];
              v3[108] = 1;
              *(_DWORD *)(a2 + 112) = v8;
              *(_BYTE *)(a2 + 95) = -20;
              return 1;
            }
            *((_DWORD *)v7 + 6) = -1;
          }
        }
        close(v6);
        return 0;
      }
    }
  }
}
