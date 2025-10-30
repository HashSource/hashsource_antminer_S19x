int __fastcall sub_231F84(int a1, int a2, int a3)
{
  int v3; // r6
  int result; // r0
  _BYTE v8[12]; // [sp+20h] [bp-28h] BYREF
  int v9; // [sp+2Ch] [bp-1Ch]
  int v10; // [sp+30h] [bp-18h]
  int v11; // [sp+34h] [bp-14h]
  _DWORD v12[4]; // [sp+38h] [bp-10h] BYREF

  v3 = dword_487950;
  dword_487950 = 1;
  sub_231EB4();
  v9 = a1;
  v10 = a2;
  v11 = a3;
  memset(v12, 0, sizeof(v12));
  result = off_4899D8(v8, &dword_4899A0, a1, a2, a3, v12, 0);
  dword_487950 = v3;
  return result;
}
