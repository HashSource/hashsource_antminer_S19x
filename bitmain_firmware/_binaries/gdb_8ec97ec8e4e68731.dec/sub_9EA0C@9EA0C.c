int sub_9EA0C()
{
  int result; // r0
  int v1; // r2
  int v2; // r3
  __int64 v3; // r0
  int v4; // r4
  int v5; // [sp+4h] [bp-10h] BYREF
  _DWORD v6[3]; // [sp+8h] [bp-Ch] BYREF

  sub_1B141C((int)v6, "__gnat_ada_main_program_name");
  result = v6[0];
  if ( !v6[0] )
    return result;
  v1 = *(__int16 *)(v6[0] + 22);
  v2 = *(_DWORD *)(v6[0] + 8);
  if ( v1 == -1 )
  {
    v3 = sub_94700((int)"ada-lang.c", 933, "Section index is uninitialized", v2);
LABEL_11:
    sub_946E0("Invalid address for Ada main program name.", HIDWORD(v3));
  }
  HIDWORD(v3) = *(_DWORD *)(v6[1] + 144);
  v4 = v2 + *(_DWORD *)(HIDWORD(v3) + 4 * v1);
  if ( !v4 )
    goto LABEL_11;
  if ( dword_477C88 )
    free((void *)dword_477C88);
  ((void (__fastcall *)(int, int *, int, int *))loc_230078)(v4, &dword_477C88, 1024, &v5);
  if ( v5 )
    return 0;
  else
    return dword_477C88;
}
