int __fastcall sub_16C6F8(int a1, int a2, int *a3)
{
  int v5; // r3
  int (__fastcall *v6)(int *, _DWORD *); // r3
  int result; // r0
  bool v8; // cc
  _DWORD s[9]; // [sp+4h] [bp-24h] BYREF

  memset(s, 0, sizeof(s));
  v5 = *a3;
  s[1] = a1;
  s[0] = 5;
  v6 = *(int (__fastcall **)(int *, _DWORD *))(v5 + 8);
  result = (int)v6;
  if ( v6 )
  {
    v8 = v6(a3, s) <= 0;
    result = -1;
    if ( !v8 )
      return 0;
  }
  return result;
}
