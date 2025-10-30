int __fastcall sub_999D4(unsigned int a1)
{
  int v2; // r0

  if ( a1 <= 0x98 )
    return *(_DWORD *)&aConstCharGdbSi[12 * a1 + 52];
  v2 = sub_94700(
         (int)"common/signals.c",
         61,
         "%s: Assertion `%s' failed.",
         "const char* gdb_signal_to_symbol_string(gdb_signal)",
         "(int) sig >= GDB_SIGNAL_FIRST && (int) sig <= GDB_SIGNAL_LAST");
  return sub_99A28(v2);
}
