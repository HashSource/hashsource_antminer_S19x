int __fastcall sub_29E640(int a1, int a2, int a3)
{
  int v4; // r1

  v4 = *(_DWORD *)(a2 + 104);
  if ( v4 == 2 )
    return (*(int (**)(_DWORD, const char *, ...))a2)(*(_DWORD *)(a2 + 4), ".short\t0x%04lx", a3);
  if ( v4 == 4 )
    return (*(int (**)(_DWORD, const char *, ...))a2)(*(_DWORD *)(a2 + 4), ".word\t0x%08lx", a3);
  if ( v4 != 1 )
    abort();
  return (*(int (**)(_DWORD, const char *, ...))a2)(*(_DWORD *)(a2 + 4), ".byte\t0x%02lx", a3);
}
