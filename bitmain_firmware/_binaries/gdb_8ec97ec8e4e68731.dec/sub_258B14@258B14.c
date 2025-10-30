void __fastcall sub_258B14(char *a1)
{
  void *ptr; // [sp+0h] [bp-1Ch] BYREF
  char v2; // [sp+8h] [bp-14h] BYREF

  sub_2587C0(&ptr, a1);
  sub_946B0("%s", (const char *)ptr);
  if ( ptr != &v2 )
    sub_339E64(ptr);
}
