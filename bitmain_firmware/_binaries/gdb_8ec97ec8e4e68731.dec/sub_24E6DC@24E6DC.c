int __fastcall sub_24E6DC(int a1, int *a2)
{
  int (**v5)(); // [sp+4h] [bp-20h] BYREF
  _DWORD v6[2]; // [sp+8h] [bp-1Ch] BYREF
  char v7; // [sp+10h] [bp-14h] BYREF

  sub_256760(&v5);
  v6[0] = &v7;
  v5 = &off_3F2924;
  v6[1] = 0;
  v7 = 0;
  sub_154C74(a2);
  sub_25040C(a1 + 72, v6);
  return sub_256478(&v5);
}
