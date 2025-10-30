int __fastcall sub_2FB7AC(int result, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a2 + 20) & 4) != 0 )
  {
    sub_2A6A5C("%B: Relocations in generic ELF (EM: %d)", result, *(unsigned __int16 *)(*(_DWORD *)(result + 160) + 38));
    result = ((int (__fastcall *)(int))loc_2A6C48)(3);
    *a3 = 1;
  }
  return result;
}
