int __fastcall sub_74B18(int a1, unsigned int a2, int a3)
{
  bool v4; // cc
  int v6; // r1
  unsigned __int8 v7; // r7
  unsigned __int8 v9; // r6
  int v10; // [sp+Ch] [bp-10h] BYREF
  int v11; // [sp+10h] [bp-Ch] BYREF
  int v12[2]; // [sp+14h] [bp-8h] BYREF

  v4 = a2 > 0x2DC6C0;
  v6 = 8 * a2;
  if ( v4 )
  {
    v7 = sub_77070(400000000, v6, a3) - 1;
    sub_75D9C(0, a1, 0, 104, &v11);
    sub_75D9C(0, a1, 0, 40, v12);
    HIBYTE(v11) = HIBYTE(v11) & 0x9F | 0x40;
    LOBYTE(v11) = v11 & 0x88 | 0x11;
    BYTE1(v11) = BYTE1(v11) & 0xC0 | 1;
    HIWORD(v11) = HIWORD(v11) & 0xF000 | 0x70;
    sub_748C4(a1, 1, 0, 104, v11);
    sub_748C4(a1, 1, 0, 104, v11);
    LOBYTE(v12[0]) = 15;
    HIBYTE(v12[0]) = HIBYTE(v12[0]) & 0x30 | 6;
    *(_WORD *)((char *)v12 + 1) = BYTE1(v12[0]) & 0xF;
    sub_748C4(a1, 1, 0, 40, v12[0]);
    sub_75D9C(0, a1, 0, 24, &v10);
    HIBYTE(v10) = HIBYTE(v10) & 0xF0 | (v7 >> 5) & 0xF;
    BYTE1(v10) = BYTE1(v10) & 0xE0 | v7 & 0x1F;
    BYTE2(v10) |= 1u;
  }
  else
  {
    v9 = sub_77070(25000000, v6, a3) - 1;
    sub_75D9C(0, a1, 0, 104, &v11);
    sub_75D9C(0, a1, 0, 40, v12);
    sub_75D9C(0, a1, 0, 24, &v10);
    HIBYTE(v10) = HIBYTE(v10) & 0xF0 | (v9 >> 5) & 0xF;
    BYTE1(v10) = BYTE1(v10) & 0xE0 | v9 & 0x1F;
    BYTE2(v10) &= ~1u;
  }
  sub_748C4(a1, 1, 0, 24, v10);
  sub_70CE4(a1, a2);
  return 0;
}
