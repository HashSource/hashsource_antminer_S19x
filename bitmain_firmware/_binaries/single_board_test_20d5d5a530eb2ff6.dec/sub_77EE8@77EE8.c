int __fastcall sub_77EE8(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v8 = sub_78944(1, a1, a2, a3, a4);
  v9 = v8;
  if ( !v8 )
    return sub_771FC(a1, 0, a2, a3, a4);
  snprintf(s, 0x800u, "set_register_cache_value returns %d\n", v8);
  nullsub_8();
  return v9;
}
