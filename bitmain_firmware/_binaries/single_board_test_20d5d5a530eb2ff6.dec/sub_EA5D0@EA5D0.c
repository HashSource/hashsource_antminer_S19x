int __fastcall sub_EA5D0(int a1, int a2, int a3)
{
  _DWORD v4[4]; // [sp+4h] [bp-10h] BYREF

  v4[1] = a2;
  v4[0] = a1;
  v4[2] = a3;
  return sub_DFB9C(dword_6E1A94, (int (__fastcall *)(_DWORD, int))sub_EA204, (int)v4);
}
