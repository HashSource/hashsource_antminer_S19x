int __fastcall sub_236F0(_QWORD *a1)
{
  int result; // r0
  _DWORD v3[4]; // [sp+8h] [bp-10h] BYREF

  result = lldiv(v3);
  *a1 = __PAIR64__(v3[2], v3[0]);
  return result;
}
