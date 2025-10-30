int __fastcall sub_12A850(int a1)
{
  signed int v1; // r1
  _DWORD v3[6]; // [sp+Ch] [bp-18h] BYREF

  v3[0] = a1;
  if ( dword_6E1C60 && (v1 = sub_10BC4C(dword_6E1C60, (int)v3), v1 >= 0) )
    return sub_10C01C((_DWORD *)dword_6E1C60, v1);
  else
    return sub_EAC70((int)v3, (int)"\r", 27, 20, (int (__fastcall *)(int, int))sub_12A780);
}
