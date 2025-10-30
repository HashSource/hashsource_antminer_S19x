int __fastcall sub_71140(int a1, const char *a2, size_t a3)
{
  char *v5; // r0
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  v5 = strncpy((char *)savedregs, a2, a3);
  *((_BYTE *)savedregs + a3) = 0;
  return sub_9E570(a1, v5, 1);
}
