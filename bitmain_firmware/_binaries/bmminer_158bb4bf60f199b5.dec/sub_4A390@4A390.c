int __fastcall sub_4A390(_QWORD *a1)
{
  int result; // r0
  __int64 v3; // r2
  _DWORD v4[4]; // [sp+8h] [bp-10h] BYREF

  result = lldiv(v4);
  LODWORD(v3) = v4[0];
  HIDWORD(v3) = 1000 * v4[2];
  *a1 = v3;
  return result;
}
