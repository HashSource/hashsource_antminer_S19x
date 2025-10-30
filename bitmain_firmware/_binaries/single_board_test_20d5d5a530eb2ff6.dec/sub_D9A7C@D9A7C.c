int __fastcall sub_D9A7C(int a1, int a2)
{
  int v4; // r3
  _DWORD v6[2]; // [sp+0h] [bp-Ch] BYREF

  sub_DE05C(8, 0, 0);
  v6[0] = a2;
  v6[1] = a1;
  return ((int (__fastcall *)(int, int (__fastcall *)(_DWORD *, _DWORD *), _DWORD *, int))sub_EA5D0)(
           1,
           sub_D9908,
           v6,
           v4);
}
