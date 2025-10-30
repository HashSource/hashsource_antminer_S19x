int __fastcall sub_2CD6C0(int a1, int a2, _WORD *a3)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 88))(a2);
  *a3 = result;
  return result;
}
