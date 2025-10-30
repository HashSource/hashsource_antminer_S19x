int __fastcall sub_21AB84(_BYTE *a1)
{
  int v2; // [sp+0h] [bp-14h] BYREF
  _DWORD v3[3]; // [sp+4h] [bp-10h] BYREF

  v2 = 0;
  v3[0] = &v2;
  v3[1] = v3;
  v3[2] = &loc_2197D8;
  sub_21AA24(a1, (int)v3, (int)&loc_2197D8);
  return v2;
}
