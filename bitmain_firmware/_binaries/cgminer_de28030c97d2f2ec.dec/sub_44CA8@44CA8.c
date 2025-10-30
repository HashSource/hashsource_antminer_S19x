int __fastcall sub_44CA8(int a1)
{
  int result; // r0
  char v3[4]; // [sp+10h] [bp-804h] BYREF

  if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    snprintf(
      v3,
      0x800u,
      "%s %d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_1E4EC(6, v3, 0);
  }
  sub_2E354(&stru_91F5C, "cgminer.c", "inc_hw_errors", 8835);
  ++dword_95228;
  ++*(_DWORD *)(*(_DWORD *)(a1 + 36) + 44);
  result = sub_2E484(&stru_91F5C, "cgminer.c", "inc_hw_errors", 8838);
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84))(a1);
  return result;
}
