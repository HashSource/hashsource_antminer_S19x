int __fastcall sub_2D744(int result, char a2)
{
  char v2; // r3
  char v3; // lr
  char v4; // r2

  *(_DWORD *)result = 0;
  v2 = *(_BYTE *)(result + 1);
  *(_BYTE *)result = -1;
  v3 = *(_BYTE *)(result + 2);
  v4 = *(_BYTE *)(result + 3);
  *(_BYTE *)(result + 1) = v2 & 0x30 | a2 & 0xF;
  *(_BYTE *)(result + 2) = v3 & 0x80;
  *(_BYTE *)(result + 3) = v4 | 0x80;
  return result;
}
