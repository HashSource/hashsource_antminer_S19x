bool __fastcall sub_C4A8(int a1, int *a2)
{
  char v3; // r1
  unsigned int v4; // r8
  unsigned int v5; // lr
  int v6; // r3
  unsigned int v7; // r12
  unsigned int v8; // r2
  unsigned int v9; // r1
  unsigned int v10; // r3
  int v12; // [sp+Ch] [bp+0h] BYREF
  int v13; // [sp+10h] [bp+4h]

  sub_B2A4(&v12, a2);
  v3 = v13;
  v4 = (v13 >> 31) ^ v13;
  v5 = (v13 >> 31) ^ (v4 / 0x15180);
  v6 = v5 + v12 + 693595;
  v7 = (v13 >> 31) ^ (v4 / 0xE10);
  v8 = (v13 >> 31) ^ (v4 / 0x3C);
  *(_BYTE *)(a1 + 4) = v7 - 24 * v5;
  *(_BYTE *)(a1 + 5) = v8 - 60 * v7;
  *(_BYTE *)(a1 + 6) = v3 - 60 * v8;
  v9 = (v6 >> 31) ^ ((v6 ^ (unsigned int)(v6 >> 31)) / 7);
  *(_BYTE *)(a1 + 3) = v6 - 7 * v9 + 1;
  sub_C3C4(&v12, v9);
  v10 = v12;
  *(_BYTE *)(a1 + 2) = v13 + 1;
  *(_WORD *)a1 = v10 + 1;
  return v10 <= 0xFFFE;
}
