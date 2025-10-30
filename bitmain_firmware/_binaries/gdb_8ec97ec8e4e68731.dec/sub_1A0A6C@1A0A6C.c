void __fastcall sub_1A0A6C(char *a1, int a2, int a3)
{
  char *v3; // r3
  _BYTE *v4; // r4
  int v5; // r0
  char *v6; // [sp+4h] [bp-4h] BYREF

  v3 = a1;
  v6 = a1;
  if ( !a1 )
    sub_946E0("usage: macro undef NAME", a2, a3, 0);
  while ( sub_1A2818((unsigned __int8)*v3) )
    v3 = ++v6;
  v4 = sub_1A096C((const void **)&v6, 0);
  if ( !v4 )
    sub_946E0("Invalid macro name.");
  v5 = ((int (__fastcall *)(int))loc_1A349C)(dword_487A1C);
  sub_1A3C54(v5, -1, v4);
  free(v4);
}
