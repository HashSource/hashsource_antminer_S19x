bool __fastcall sub_17077C(int a1, int a2)
{
  return ((int (*)(void))loc_1706C8)()
      && ((int (__fastcall *)(int, int))loc_1706C8)(a1 + 16, a2 + 16)
      && ((*(unsigned __int8 *)(a1 + 32) ^ *(unsigned __int8 *)(a2 + 32)) & 3) == 0;
}
