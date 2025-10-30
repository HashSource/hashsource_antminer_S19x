int __fastcall sub_44064(int a1, int a2)
{
  int result; // r0
  char v5[4]; // [sp+10h] [bp-804h] BYREF

  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
  {
    snprintf(
      v5,
      0x800u,
      "%s%d: invalid nonce - HW error",
      *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
      *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
    sub_1DB6C(3, v5, 0);
  }
  sub_2D2FC(&stru_90DC4, "cgminer.c", "inc_hw_errors_with_diff", 8849);
  dword_94090 += a2;
  *(_DWORD *)(*(_DWORD *)(a1 + 36) + 44) += a2;
  result = sub_2D434(&stru_90DC4, "cgminer.c", "inc_hw_errors_with_diff", 8852);
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 84))(a1);
  return result;
}
