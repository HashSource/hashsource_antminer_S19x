int sub_EFEBC(int a1, int a2, int a3, int a4, ...)
{
  va_list va; // [sp+10h] [bp+Ch] BYREF

  va_start(va, a4);
  return sub_25A4C0(*(_DWORD *)(*(_DWORD *)(a1 + 28) - 4), a4, (char *)va);
}
