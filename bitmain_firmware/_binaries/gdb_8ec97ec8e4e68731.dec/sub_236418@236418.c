int __fastcall sub_236418(int a1, signed int a2, void *a3)
{
  int v6; // r4
  int v7; // r0
  int result; // r0
  int (__fastcall *v9)(int, signed int, void *); // r3

  v6 = ((int (*)(void))loc_166E9C)();
  v7 = ((int (__fastcall *)(int))loc_166F48)(a1);
  if ( v6 <= a2 && v6 + v7 > a2 )
  {
    v9 = *(int (__fastcall **)(int, signed int, void *))(((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_48A4B4)
                                                       + 20);
    if ( v9 )
      return v9(a1, a2, a3);
  }
  result = sub_236390(a1, a2, a3);
  if ( result == -1 )
    return sub_1E0754(a1, a2, (_UNKNOWN **)a3);
  return result;
}
