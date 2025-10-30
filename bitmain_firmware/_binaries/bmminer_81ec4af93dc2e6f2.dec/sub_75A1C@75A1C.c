int __fastcall sub_75A1C(int a1, unsigned int a2)
{
  int v4; // r7
  char v5; // r12
  char v6; // r0
  __int16 v7; // r2
  char v9; // r0
  int v10; // [sp+8h] [bp-8h] BYREF
  unsigned int v11; // [sp+Ch] [bp-4h] BYREF

  v4 = 8 * a2;
  if ( a2 <= (unsigned int)&unk_2DC6C0 )
  {
    sub_7740C(0, a1, 0, 40, &v11);
    v9 = sub_8C218(25000000, v4);
    v11 = v11 & 0xFFFE00FF | ((unsigned __int8)(v9 - 1) << 8);
    HIBYTE(v11) = HIBYTE(v11) & 0xA3 | 0x10;
  }
  else
  {
    sub_7740C(0, a1, 0, 96, &v10);
    HIBYTE(v10) = HIBYTE(v10) & 0x9F | 0x40;
    BYTE1(v10) = BYTE1(v10) & 0xC0 | 1;
    LOBYTE(v10) = v10 & 0x88 | 0x11;
    v5 = (unsigned __int16)(HIWORD(v10) & 0xF000 | 0x60) >> 8;
    BYTE2(v10) = 96;
    HIBYTE(v10) = v5 | 0x10;
    sub_751F0(a1, 1, 0, 96, v10);
    usleep(0x2710u);
    sub_751F0(a1, 1, 0, 96, v10);
    usleep(0x2710u);
    sub_7740C(0, a1, 0, 40, &v11);
    v6 = sub_8C218(400000000, v4);
    v11 = v11 & 0xFFFE00FF | ((unsigned __int8)(v6 - 1) << 8);
    HIBYTE(v11) = HIBYTE(v11) & 0xE7 | 0x10;
    v7 = HIWORD(v11) & 0xFC0F | 0x50;
    BYTE2(v11) = BYTE2(v11) & 0xF | 0x50;
    HIBYTE(v11) = HIBYTE(v7) | 0x84;
  }
  sub_751F0(a1, 1, 0, 40, v11);
  usleep(0x2710u);
  usleep(0xC350u);
  sub_5CFF8(a1, (void *)a2);
  return 0;
}
