int __fastcall sub_45768(int a1, int a2, int a3, void *a4)
{
  int v5; // r7
  int *v6; // r5
  _DWORD v8[4]; // [sp+4h] [bp-10h] BYREF

  v8[0] = a1;
  v8[1] = a2;
  v8[2] = a3;
  v5 = sub_98F68(v8);
  if ( !v5 )
    v5 = ps_getpid_0(v8);
  v6 = _errno_location();
  *v6 = 0;
  ptrace(PTRACE_GETSIGINFO, v5, 0, a4);
  if ( !*v6 )
    return 1;
  memset(a4, 0, 0x80u);
  return 0;
}
