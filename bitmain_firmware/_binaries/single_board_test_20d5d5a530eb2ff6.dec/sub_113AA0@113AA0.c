int __fastcall sub_113AA0(int a1)
{
  signed int v1; // r1
  _DWORD v3[17]; // [sp+8h] [bp-44h] BYREF

  v3[0] = a1;
  if ( dword_6E1C54 && (v1 = sub_10BC4C(dword_6E1C54, (int)v3), v1 >= 0) )
    return sub_10C01C((_DWORD *)dword_6E1C54, v1);
  else
    return sub_EAC70((int)v3, (int)&off_20F34C, 5, 64, (int (__fastcall *)(int, int))sub_11338C);
}
