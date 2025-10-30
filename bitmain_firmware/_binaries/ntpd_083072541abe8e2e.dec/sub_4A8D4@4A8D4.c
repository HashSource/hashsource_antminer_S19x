int __fastcall sub_4A8D4(__int16 *a1, int a2)
{
  int v3; // r3
  size_t v5; // r8
  char v7[48]; // [sp+Ch] [bp-34h] BYREF

  if ( (*(_BYTE *)(a2 + 768) & 1) != 0 )
    v3 = 80;
  else
    v3 = 84;
  sub_6C054(v7, 46, "ATDW%c%s\r\n", v3, (const char *)sys_phone[0]);
  v5 = strlen(v7);
  if ( write(*(_DWORD *)(a2 + 28), v7, v5) != v5 )
    sub_394A0(a1, 3);
  sub_4A084((int)a1, 2, v7);
  return 0;
}
