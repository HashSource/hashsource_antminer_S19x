int __fastcall sub_2D700(int result, char a2, char a3)
{
  char v3; // r3
  char v4; // lr
  char v5; // r3
  char v6; // r2

  *(_DWORD *)result = 0;
  v3 = *(_BYTE *)(result + 1);
  v4 = *(_BYTE *)(result + 3);
  *(_BYTE *)result = -1;
  v5 = v3 & 0xF0 | a3 & 0xF;
  v6 = *(_BYTE *)(result + 2);
  *(_BYTE *)(result + 3) = v4 & 0x7F;
  *(_BYTE *)(result + 1) = v5 & 0x3F;
  *(_BYTE *)(result + 2) = v6 & 0x80 | a2 & 0x7F;
  return result;
}
