int __fastcall sub_E6770(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  ((void (__fastcall *)(int, int))loc_E65F8)(a2, a4);
  dword_4788DC = (int)sub_E48AC(a1, a3, a5);
  *(_DWORD *)(dword_4788DC + 24) = sub_212FE0(a1, a2);
  ((void (__fastcall *)(int))loc_E5D8C)(a2);
  result = *(_DWORD *)(dword_4788DC + 24);
  *(_DWORD *)(dword_4788DC + 8) = dword_4788E0;
  return result;
}
