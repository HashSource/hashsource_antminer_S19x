int __fastcall sub_2A2D34(int a1, int a2, int a3)
{
  char v5[32]; // [sp+0h] [bp-20h] BYREF

  if ( a1 != 5 )
    return (*(int (**)(_DWORD, const char *, ...))a3)(*(_DWORD *)(a3 + 4), "Unknown error %d\n", a1);
  sprintf(v5, "%08lx", a2);
  return (*(int (**)(_DWORD, const char *, ...))a3)(*(_DWORD *)(a3 + 4), "Address 0x%s is out of bounds.\n", v5);
}
