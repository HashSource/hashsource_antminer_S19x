int __fastcall sub_2D788(int result, char a2, char a3)
{
  char v3; // r3
  char v4; // r12
  char v5; // r2

  *(_DWORD *)result = 0;
  v3 = *(_BYTE *)(result + 1);
  v4 = *(_BYTE *)(result + 2);
  *(_BYTE *)result = a3;
  v5 = *(_BYTE *)(result + 3);
  *(_BYTE *)(result + 2) = v4 & 0x80;
  *(_BYTE *)(result + 1) = v3 & 0xB0 | a2 & 0xF | 0x80;
  *(_BYTE *)(result + 3) = v5 | 0x80;
  return result;
}
