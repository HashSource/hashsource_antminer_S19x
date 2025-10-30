void __fastcall sub_27B220(int a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  const char *v9; // r4
  char *v10; // r0
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  char v12; // [sp+10h] [bp-14h] BYREF

  sub_278948((char **)&ptr, a4, a5);
  *(_BYTE *)(a3 + a5) = 1;
  if ( a6 )
  {
    v9 = (const char *)ptr;
    v10 = sub_98B08(a6, SHIDWORD(a6));
    sub_27B108(a1, a2, "__regs->%s + (__gdb_uintptr) %s", v9, v10);
  }
  else
  {
    sub_27B108(a1, a2, "__regs->%s", (const char *)ptr);
  }
  if ( ptr != &v12 )
    sub_339E64(ptr);
}
