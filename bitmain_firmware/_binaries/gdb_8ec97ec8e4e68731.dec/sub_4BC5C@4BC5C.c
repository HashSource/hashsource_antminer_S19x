bool __fastcall sub_4BC5C(int a1)
{
  int v2; // [sp+0h] [bp-ECh] BYREF
  _BYTE v3[132]; // [sp+68h] [bp-84h] BYREF

  sub_93170(v3, 128, "/proc/%ld/task", a1);
  return _xstat64(3, v3, &v2) == 0;
}
