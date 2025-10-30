int __fastcall sub_65B84(int a1, unsigned __int8 *a2, int a3)
{
  int *v6; // r0
  _BYTE v8[256]; // [sp+4h] [bp-108h] BYREF

  v6 = _errno_location();
  sub_65710((size_t)v8, 256, a2, *v6);
  return _vfprintf_chk(a1, 1, v8, a3);
}
