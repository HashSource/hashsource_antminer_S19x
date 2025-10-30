void __fastcall sub_1517A0(int a1)
{
  int v1; // r10
  int v2; // r11
  _BYTE v3[15]; // [sp+0h] [bp-D0h] BYREF
  _BYTE v4[64]; // [sp+40h] [bp-90h] BYREF
  _DWORD v5[23]; // [sp+80h] [bp-50h] BYREF

  v1 = a1 + 128;
  v2 = a1 + 192;
  v5[20] = a1 + 64;
  sub_17B628(v5, a1, a1 + 64);
  sub_17B628(v4, v1, v2);
  v5[21] = sub_156154(v5, v4);
  sub_17BE0C(v5);
  sub_17BE0C(v4);
  sub_155C98(v5, v4, v5);
  sub_17BE0C(v4);
  sub_17BBF0(v3, v4, 39082);
  sub_155C98(v3, &unk_1D6460, v3);
  sub_17BE0C(v4);
  sub_155E5C(v4, v4, v3);
  sub_156154(v5, v4);
  sub_156154(v1, &unk_1D6460);
  __asm { POP.W           {R4-R11,PC} }
}
