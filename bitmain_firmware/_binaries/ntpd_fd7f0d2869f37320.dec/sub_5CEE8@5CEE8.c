int __fastcall sub_5CEE8(int a1, int a2)
{
  int v4; // r7
  int v5; // r11
  int v6; // r10
  int v7; // r0
  int v8; // r4
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r3
  int v12; // r2
  _DWORD *ptr; // [sp+4h] [bp-60h]
  struct termios termios_p; // [sp+Ch] [bp-58h] BYREF
  char v16[20]; // [sp+48h] [bp-1Ch] BYREF

  sub_65D40(5, "MSF_ARCRON %s: opening unit %d", "V1.3 2003/02/21", a1);
  sub_6D00C(v16, 20, "/dev/arc%d", a1);
  v4 = sub_3AA90(v16, 7u, 1);
  if ( v4 <= 0 )
    return 0;
  v6 = open64(v16, 258);
  if ( v6 < 0 )
  {
    v5 = 0;
    sub_65D40(3, "MSF_ARCRON(%d): failed second open(%s, 0777): %m.", a1, v16);
    close(v4);
  }
  else
  {
    close(v4);
    if ( fcntl(v6, 4, 0) == -1 )
      sub_65D40(3, "MSF_ARCRON(%d): fcntl(F_SETFL, 0): %m.", a1);
    if ( tcgetattr(v6, &termios_p) < 0 )
    {
      v5 = 0;
      sub_65D40(3, "MSF_ARCRON(%d): tcgetattr(%s): %m.", a1, v16);
      close(v6);
    }
    else
    {
      termios_p.c_oflag = 0;
      termios_p.c_lflag = 0;
      termios_p.c_cc[5] = 0;
      termios_p.c_iflag = 33;
      termios_p.c_cflag = 2295;
      termios_p.c_cc[6] = 1;
      if ( tcsetattr(v6, 0, &termios_p) < 0 )
      {
        v5 = 0;
        sub_65D40(3, "MSF_ARCRON(%d): tcsetattr(%s): %m.", a1, v16);
        close(v6);
      }
      else
      {
        v7 = sub_64B04(0, 40, 0, 1);
        v8 = *(_DWORD *)(a2 + 84);
        *(_DWORD *)(v8 + 20) = a2;
        *(_DWORD *)(v8 + 24) = 0;
        *(_DWORD *)(v8 + 28) = v6;
        *(_DWORD *)(v8 + 12) = sub_5D46C;
        ptr = (_DWORD *)v7;
        v5 = sub_19084((_DWORD *)(v8 + 8));
        if ( v5 )
        {
          v9 = *(_DWORD *)(a2 + 76);
          *(_DWORD *)v8 = ptr;
          *(_BYTE *)(a2 + 95) = -4;
          *(_BYTE *)(a2 + 93) = 2;
          *(_DWORD *)(v8 + 44) = "ARCRON MSF/DCF/WWVB Receiver";
          if ( v9 > 3 )
          {
            v5 = 0;
            sub_65D40(5, "ARCRON: Invalid mode %d", v9);
          }
          else
          {
            switch ( v9 )
            {
              case 2u:
                strcpy((char *)(v8 + 764), "DCF");
                break;
              case 3u:
                *(_DWORD *)(v8 + 764) = *(_DWORD *)"WWVB";
                break;
              case 1u:
                strcpy((char *)(v8 + 764), "MSF");
                break;
              default:
                *(_DWORD *)(v8 + 764) = *(_DWORD *)"MSFa";
                break;
            }
            v10 = *(_DWORD *)(a2 + 84);
            v5 = 1;
            v11 = current_time + 500;
            v12 = current_time + 2;
            ptr[3] = -1;
            ptr[5] = v11 + 67 * a1 % 1009;
            *(_DWORD *)(v10 + 48) = v12;
            *(_DWORD *)(v10 + 52) = sub_5CD70;
          }
        }
        else
        {
          close(v6);
          *(_DWORD *)(v8 + 28) = -1;
          free(ptr);
        }
      }
    }
  }
  return v5;
}
