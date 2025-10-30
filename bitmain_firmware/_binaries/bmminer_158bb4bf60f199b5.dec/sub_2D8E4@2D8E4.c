int __fastcall sub_2D8E4(int a1, char a2, char a3)
{
  int v7; // [sp+4h] [bp-1Ch]
  _BYTE v8[12]; // [sp+8h] [bp-18h] BYREF
  _DWORD v9[3]; // [sp+14h] [bp-Ch] BYREF

  sub_2E9B8();
  LOBYTE(v7) = -1;
  HIBYTE(v7) = 0x80;
  *(_WORD *)((char *)&v7 + 1) = a3 & 0xF;
  sub_2D7C8((int)v8, a2, 60, v7);
  sub_2A29C(v9, v8, 9u);
  return sub_70808(v9, a1);
}
