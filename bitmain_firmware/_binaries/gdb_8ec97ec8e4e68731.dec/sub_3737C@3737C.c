int __fastcall sub_3737C(int a1)
{
  int v3; // r0
  int v4; // [sp+0h] [bp-8h] BYREF
  int v5; // [sp+4h] [bp-4h] BYREF

  if ( sub_BC304(&dword_4899A0, 9, &v4) <= 0 )
  {
    v3 = sub_92F64(14, "Cannot find AT_ENTRY auxiliary vector entry.");
    return sub_373F0(v3);
  }
  else
  {
    v4 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(a1, v4, &dword_4899A0);
    ((void (__fastcall *)(int, int *, int *))loc_1690CC)(a1, &v4, &v5);
    return v4 + 2 * v5;
  }
}
