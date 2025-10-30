int __fastcall sub_52610(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r4
  _DWORD *v7; // r9
  int v8; // r3
  int v9; // r11
  int v10; // r3
  int v11; // r3
  __int16 v13; // [sp+Ch] [bp-60h] BYREF
  void *ptr; // [sp+10h] [bp-5Ch]
  struct termios v15; // [sp+14h] [bp-58h] BYREF
  char v16[20]; // [sp+50h] [bp-1Ch] BYREF

  sub_6C054(v16, 20, "/dev/palisade%d", a1);
  v4 = sub_3A298(v16, 0xDu, 32);
  v5 = v4;
  if ( v4 <= 0 )
    return 0;
  sub_64E00(5, "Palisade(%d) fd: %d dev: %s", a1, v4, v16);
  if ( tcgetattr(v5, &v15) < 0 )
  {
    v6 = 0;
    sub_64E00(3, "Palisade(%d) tcgetattr(fd, &tio): %m", a1);
    close(v5);
  }
  else
  {
    v15.c_cflag |= 0x300u;
    v15.c_iflag &= ~0x100u;
    v7 = (_DWORD *)sub_63BA4(0, 148, 0, 1);
    v8 = *(_DWORD *)(a2 + 76) & 0x7F;
    v7[35] = v8;
    switch ( v8 )
    {
      case 0:
        break;
      case 1:
        sub_64E00(5, "Palisade(%d) Praecis mode enabled", a1);
        break;
      case 2:
        sub_64E00(5, "Palisade(%d) Thunderbolt mode enabled", a1);
        v15.c_cflag = 2224;
        break;
      case 3:
        sub_64E00(5, "Palisade(%d) Acutime Gold mode enabled", a1);
        break;
      default:
        sub_64E00(5, "Palisade(%d) mode unknown", a1);
        break;
    }
    if ( tcsetattr(v5, 0, &v15) == -1 )
    {
      v6 = 0;
      sub_64E00(3, "Palisade(%d) tcsetattr(fd, &tio): %m", a1);
      close(v5);
      free(v7);
    }
    else
    {
      v9 = *(_DWORD *)(a2 + 84);
      *(_DWORD *)(v9 + 20) = a2;
      *(_DWORD *)(v9 + 28) = v5;
      *(_DWORD *)(v9 + 12) = sub_530E4;
      *(_DWORD *)(v9 + 24) = 0;
      v6 = sub_18DF0((int *)(v9 + 8));
      if ( v6 )
      {
        *(_DWORD *)v9 = v7;
        *(_DWORD *)(v9 + 44) = "Trimble Palisade GPS";
        *(_BYTE *)(a2 + 95) = -20;
        *(_BYTE *)(a2 + 90) = 4;
        *(_BYTE *)(a2 + 65) = 4;
        *(_BYTE *)(a2 + 66) = 5;
        strcpy((char *)(v9 + 764), "GPS");
        v10 = v7[35];
        *(_WORD *)v7 = a1;
        v7[2] = 0;
        if ( v10 == 2 )
        {
          ptr = (void *)sub_63BA4(0, 100, 0, 0);
          *(_BYTE *)ptr = 16;
          *((_BYTE *)ptr + 1) = -114;
          *((_BYTE *)ptr + 2) = -94;
          v13 = 4;
          *((_BYTE *)ptr + 3) = 3;
          sub_523A0(&v13, v5);
          *(_BYTE *)ptr = 16;
          *((_BYTE *)ptr + 1) = -114;
          *((_BYTE *)ptr + 2) = -91;
          *((_BYTE *)ptr + 3) = 0;
          v13 = 5;
          *((_BYTE *)ptr + 4) = 5;
          sub_523A0(&v13, v5);
          free(ptr);
          v10 = v7[35];
        }
        if ( v10 == 3 )
        {
          v13 = 0;
          ptr = (void *)sub_63BA4(0, 100, 0, 0);
          *(_BYTE *)ptr = 16;
          v6 = 1;
          *((_BYTE *)ptr + 1) = -114;
          *((_BYTE *)ptr + 2) = -91;
          *((_BYTE *)ptr + 3) = 2;
          *((_BYTE *)ptr + 4) = 0;
          v13 = 6;
          *((_BYTE *)ptr + 5) = 0;
          v11 = v13++;
          *((_BYTE *)ptr + v11) = 0;
          sub_523A0(&v13, v5);
          free(ptr);
        }
        else
        {
          return 1;
        }
      }
      else
      {
        close(v5);
        *(_DWORD *)(v9 + 28) = -1;
        free(v7);
      }
    }
  }
  return v6;
}
