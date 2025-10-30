void __fastcall sub_76144(int a1, int a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  char v9; // r5
  int v11; // r7
  int v13; // [sp+Ch] [bp-8h] BYREF

  v11 = (unsigned __int8)asc_9B514[a2];
  sub_7740C(0, a1, 0, v11, &v13);
  LOBYTE(v13) = v13 & 0x88 | (16 * (a3 & 7)) | v9 & 7;
  sub_751F0(a1, 1, 0, v11, v13);
  __asm { POP             {R4-R7,PC} }
}
