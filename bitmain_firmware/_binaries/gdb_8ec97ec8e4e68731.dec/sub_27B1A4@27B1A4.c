void __fastcall sub_27B1A4(int a1, int a2, int a3, int a4, int a5)
{
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v9; // [sp+8h] [bp-14h] BYREF

  sub_278948((char **)&ptr, a4, a5);
  *(_BYTE *)(a3 + a5) = 1;
  sub_27B108(a1, a2, "(__gdb_uintptr) &__regs->%s", (const char *)ptr);
  if ( ptr != &v9 )
    sub_339E64(ptr);
}
