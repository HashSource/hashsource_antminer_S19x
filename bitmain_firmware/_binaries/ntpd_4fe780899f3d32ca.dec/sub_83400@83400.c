int __fastcall sub_83400(int a1, int a2)
{
  void *v4; // r0
  void (__fastcall *v5)(int, void *); // r3
  _DWORD s[16]; // [sp+4h] [bp-44h] BYREF

  v4 = memset(s, 0, sizeof(s));
  v5 = *(void (__fastcall **)(int, void *))(a1 + 40);
  s[6] = a2;
  v5(3, v4);
  return s[6];
}
