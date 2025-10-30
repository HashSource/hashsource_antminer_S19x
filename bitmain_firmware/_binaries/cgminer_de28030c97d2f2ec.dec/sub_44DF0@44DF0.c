int __fastcall sub_44DF0(int a1, int a2)
{
  int result; // r0
  char v5[4]; // [sp+10h] [bp-804h] BYREF

  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
  {
    snprintf(
      v5,
      0x800u,
      "%s%d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_1E4EC(3, v5, 0);
  }
  sub_2E354(&stru_91F5C, "cgminer.c", "inc_hw_errors_with_diff", 8849);
  dword_95228 += a2;
  *(_DWORD *)(*(_DWORD *)(a1 + 36) + 44) += a2;
  result = sub_2E484(&stru_91F5C, "cgminer.c", "inc_hw_errors_with_diff", 8852);
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84))(a1);
  return result;
}
