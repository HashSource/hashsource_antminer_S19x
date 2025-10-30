int __fastcall sub_7778C(int a1, unsigned int a2)
{
  char v4; // r7
  char v5; // r0
  __int16 v6; // r2
  char v8; // r0
  int v9; // [sp+8h] [bp-8h] BYREF
  unsigned int v10; // [sp+Ch] [bp-4h] BYREF

  if ( a2 <= (unsigned int)&unk_2DC6C0 )
  {
    sub_78850(0, a1, 0, 40, &v10);
    v8 = sub_189090(25000000, 8 * a2);
    v10 = v10 & 0xFFFE00FF | ((unsigned __int8)(v8 - 1) << 8);
    HIBYTE(v10) = HIBYTE(v10) & 0xA3 | 0x10;
  }
  else
  {
    sub_78850(0, a1, 0, 96, &v9);
    HIBYTE(v9) = HIBYTE(v9) & 0x9F | 0x40;
    BYTE1(v9) = BYTE1(v9) & 0xC0 | 1;
    LOBYTE(v9) = v9 & 0x88 | 0x11;
    v4 = (unsigned __int16)(HIWORD(v9) & 0xF000 | 0x60) >> 8;
    BYTE2(v9) = 96;
    HIBYTE(v9) = v4 | 0x10;
    sub_771FC(a1, 1, 0, 96, v9);
    usleep(0x2710u);
    sub_771FC(a1, 1, 0, 96, v9);
    usleep(0x2710u);
    sub_78850(0, a1, 0, 40, &v10);
    v5 = sub_189090(400000000, 8 * a2);
    v10 = v10 & 0xFFFE00FF | ((unsigned __int8)(v5 - 1) << 8);
    HIBYTE(v10) = HIBYTE(v10) & 0xE7 | 0x10;
    v6 = HIWORD(v10) & 0xFC0F | 0x50;
    BYTE2(v10) = BYTE2(v10) & 0xF | 0x50;
    HIBYTE(v10) = HIBYTE(v6) | 0x84;
  }
  sub_771FC(a1, 1, 0, 40, v10);
  usleep(0x2710u);
  usleep(0xC350u);
  sub_71D60(a1, a2);
  return 0;
}
