int __fastcall sub_1C3EC0(_DWORD *src)
{
  int v1; // r5
  void *v3; // r0
  _DWORD savedregs[4]; // [sp+0h] [bp-Ch] BYREF

  v1 = src[2];
  v3 = memcpy(savedregs, src, 16 * (v1 + 2));
  return sub_1C2FCC((int)v3, (int)src, v1, 0);
}
