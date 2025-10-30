int __fastcall sub_2350C(int a1, int a2, int a3, int a4)
{
  int result; // r0
  _BYTE v9[4]; // [sp+Ch] [bp-Ch] BYREF
  int v10; // [sp+10h] [bp-8h] BYREF
  int v11; // [sp+14h] [bp-4h]

  sub_791C0(&v10, v9, 0);
  BYTE2(v11) = v9[0];
  result = sub_283A0(a1, 0, (unsigned __int8)a2, a4, v10, v11);
  dword_533B44[256 * a1 + a2] = a3;
  return result;
}
