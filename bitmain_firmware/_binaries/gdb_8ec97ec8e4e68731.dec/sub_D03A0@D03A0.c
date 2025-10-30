int __fastcall sub_D03A0(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int result; // r0
  int v10; // r12
  int s[9]; // [sp+2Ch] [bp-28h] BYREF

  memset(s, 0, sizeof(s));
  v8 = sub_214838(a2);
  s[4] = a2;
  s[2] = v8;
  result = sub_D02E0(a1, dword_487D2C, s[0], s[1], v8, s[3], a2, s[5], s[6], s[7], s[8], a3, a4);
  *(_DWORD *)(result + 20) = 3;
  v10 = dword_46C098 - 1;
  *(_DWORD *)(result + 24) = dword_46C098;
  dword_46C098 = v10;
  return result;
}
