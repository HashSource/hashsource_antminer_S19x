int __fastcall sub_3630C(int a1)
{
  _BYTE v3[32]; // [sp+8h] [bp-7Ch] BYREF
  _BYTE v4[80]; // [sp+28h] [bp-5Ch] BYREF
  _BYTE *v5; // [sp+78h] [bp-Ch]
  int v6; // [sp+7Ch] [bp-8h]

  v6 = a1;
  v5 = v4;
  sub_2E2B0((unsigned int)v4, a1);
  sub_1F4D0((int)v4, 80, (int)v3);
  return sub_1F4D0((int)v3, 32, a1 + 192);
}
