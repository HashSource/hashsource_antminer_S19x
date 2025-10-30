int __fastcall sub_1CE520(unsigned __int8 *a1)
{
  unsigned int v1; // r3
  unsigned __int8 v3; // r12
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // [sp+4h] [bp-Ch] BYREF
  int v10; // [sp+8h] [bp-8h] BYREF
  unsigned int v11; // [sp+Ch] [bp-4h] BYREF

  v1 = a1[24];
  v3 = a1[20];
  v10 = v1 & 7;
  v11 = v1 >> 3;
  v9 = v3 & 0x1F;
  v4 = sub_C1600(a1 + 8, 8, 0);
  v5 = sub_C1600((unsigned __int8 *)&v9, 4, v4);
  v6 = sub_C1600((unsigned __int8 *)&v10, 4, v5);
  v7 = sub_C1600((unsigned __int8 *)&v11, 4, v6);
  return sub_C1600(a1, 4, v7);
}
