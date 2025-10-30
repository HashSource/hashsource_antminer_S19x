int __fastcall sub_6E798(int a1, unsigned int a2, int a3)
{
  int v5; // r0
  unsigned int v6; // r3
  __int64 v8; // r0

  if ( !*(_BYTE *)(a1 + 84) )
    sub_6E68C(a1, a3);
  v5 = *(_DWORD *)(a1 + 60);
  v6 = (*(_DWORD *)(a1 + 64) - v5) >> 5;
  if ( a2 <= v6 )
    return v5 + 32 * a2;
  v8 = sub_94700(
         "dtrace-probe.c",
         662,
         "Probe '%s' has %d arguments, but GDB is requesting\n"
         "argument %u.  This should not happen.  Please\n"
         "report this bug.",
         (const char *)*(_DWORD *)(a1 + 4),
         v6,
         a2);
  return sub_6E808(v8, HIDWORD(v8));
}
