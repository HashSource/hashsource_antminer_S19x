int __fastcall sub_5D8D0(int a1, int a2)
{
  int result; // r0

  result = _stack_chk_guard;
  ++*(_DWORD *)(*(_DWORD *)(a2 + 84) + 776);
  return result;
}
