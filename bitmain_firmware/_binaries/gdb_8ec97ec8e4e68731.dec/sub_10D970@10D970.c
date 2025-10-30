int __fastcall sub_10D970(int a1, int a2, int a3)
{
  int (__fastcall *v6)(int, int, int); // r3

  v6 = *(int (__fastcall **)(int, int, int))(((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_4872C4) + 8);
  if ( v6 )
    return v6(a1, a2, a3);
  else
    return a2;
}
