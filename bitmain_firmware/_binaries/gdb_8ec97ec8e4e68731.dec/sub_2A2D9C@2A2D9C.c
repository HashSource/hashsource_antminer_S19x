int __fastcall sub_2A2D9C(int a1, int a2)
{
  char v4[32]; // [sp+0h] [bp-20h] BYREF

  sprintf(v4, "%08lx", a1);
  return (*(int (**)(_DWORD, const char *, ...))a2)(*(_DWORD *)(a2 + 4), "0x%s", v4);
}
