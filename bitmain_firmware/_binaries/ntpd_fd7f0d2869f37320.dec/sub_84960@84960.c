int __fastcall sub_84960(int a1, int a2)
{
  void (__fastcall *v4)(int, _DWORD *); // r3
  _DWORD s[16]; // [sp+4h] [bp-48h] BYREF

  memset(s, 0, sizeof(s));
  v4 = *(void (__fastcall **)(int, _DWORD *))(a1 + 40);
  s[6] = a2;
  v4(3, s);
  return s[6];
}
