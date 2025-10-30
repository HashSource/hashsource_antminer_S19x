int __fastcall sub_78EA0(int a1, int (*a2)())
{
  char v4; // r1
  char v5; // r0
  __int16 v6; // r3
  char v8; // r0
  int v9; // [sp+8h] [bp-Ch] BYREF
  int v10[2]; // [sp+Ch] [bp-8h] BYREF

  if ( (char *)a2 <= (char *)&unk_2DC6C0 )
  {
    sub_7A850(0, a1, 0, 40, v10);
    v8 = sub_8F588(25000000, 8 * (_DWORD)a2);
    v10[0] = v10[0] & 0xFFFE00FF | ((unsigned __int8)(v8 - 1) << 8);
    HIBYTE(v10[0]) = HIBYTE(v10[0]) & 0xA3 | 0x10;
  }
  else
  {
    sub_7A850(0, a1, 0, 96, &v9);
    HIBYTE(v9) = HIBYTE(v9) & 0x9F | 0x40;
    LOBYTE(v9) = v9 & 0x88 | 0x11;
    v4 = (unsigned __int16)(HIWORD(v9) & 0xF000 | 0x60) >> 8;
    BYTE2(v9) = 96;
    BYTE1(v9) = BYTE1(v9) & 0xC0 | 1;
    HIBYTE(v9) = v4 | 0x10;
    sub_7864C(a1, 1, 0, 96, v9);
    usleep(0x2710u);
    sub_7864C(a1, 1, 0, 96, v9);
    usleep(0x2710u);
    sub_7A850(0, a1, 0, 40, v10);
    v5 = sub_8F588(400000000, 8 * (_DWORD)a2);
    v10[0] = v10[0] & 0xFFFE00FF | ((unsigned __int8)(v5 - 1) << 8);
    HIBYTE(v10[0]) = HIBYTE(v10[0]) & 0xE7 | 0x10;
    v6 = HIWORD(v10[0]) & 0xFC0F | 0x50;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF | 0x50;
    HIBYTE(v10[0]) = HIBYTE(v6) | 0x84;
  }
  sub_7864C(a1, 1, 0, 40, v10[0]);
  usleep(0x2710u);
  usleep(0xC350u);
  sub_3FBFC(a1, a2);
  return 0;
}
