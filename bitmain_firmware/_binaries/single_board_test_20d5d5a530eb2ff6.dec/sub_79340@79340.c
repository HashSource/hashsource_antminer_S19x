int __fastcall sub_79340(_DWORD *a1, int (__fastcall *a2)(const char *, int, int), int a3, int a4)
{
  int v8; // r4
  _BYTE v10[32]; // [sp+Ch] [bp-20h] BYREF

  if ( (a4 & 0x200) == 0 && (!a1 || *a1 > 1u) || sub_798A4(v10, a2, a4 << 22) )
    return -1;
  v8 = sub_78EE4(a1, a4, 0, (int)v10, a2, a3);
  sub_798F0(v10);
  return v8;
}
