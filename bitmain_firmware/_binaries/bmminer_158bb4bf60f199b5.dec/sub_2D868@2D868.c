int __fastcall sub_2D868(int a1, char a2, char a3, char a4)
{
  int v9; // [sp+4h] [bp-20h]
  _BYTE v10[12]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v11[4]; // [sp+14h] [bp-10h] BYREF

  sub_2E9B8();
  BYTE1(v9) = a4 & 0xF;
  HIWORD(v9) = a3 & 0x7F;
  LOBYTE(v9) = -1;
  sub_2D7C8((int)v10, a2, 60, v9);
  sub_2A29C(v11, v10, 9u);
  return sub_70808(v11, a1);
}
