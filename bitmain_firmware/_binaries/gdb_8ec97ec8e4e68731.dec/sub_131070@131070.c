int __fastcall sub_131070(int a1, int a2, _DWORD *a3)
{
  __int16 v3; // r3
  unsigned int v4; // r12
  __int64 v7; // r6
  int v8; // r0
  int result; // r0
  int *v10; // r0
  char *v11; // r0
  _DWORD *v12; // r3
  const char *v13; // r6
  int v14; // r4
  const char *v15; // r0
  char *v16; // r0
  _DWORD *v17; // r3
  const char *v18; // r6
  int v19; // r4
  const char *v20; // r0
  int *v21; // r0
  const char *v22; // r0

  v3 = *(_WORD *)(a2 + 2);
  v4 = v3 & 0x7FFF;
  if ( v4 >= 0x10 && (v4 <= 0x15 || v4 == 7968) )
    return sub_12E620((int *)(a1 + 8), a2, a3);
  if ( (v3 & 0x7FFF) != 0x20 )
  {
    v21 = (int *)sub_242FB4(a1);
    sub_124BE8(*v21, 0, (unsigned __int16 *)a1);
    v22 = (const char *)sub_1B87A8(*(_DWORD *)*a3);
    sub_946E0("Dwarf Error: Expected reference attribute [in module %s]", v22);
  }
  v7 = *(_QWORD *)(a2 + 8);
  v8 = ((int (__fastcall *)(_DWORD, int, _DWORD, _DWORD))loc_126C98)(*a3, a2, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12));
  if ( !v8 )
  {
    v16 = sub_98B08(v7, SHIDWORD(v7));
    v17 = (_DWORD *)*a3;
    v18 = v16;
    v19 = *(_DWORD *)(a1 + 8);
    v20 = (const char *)sub_1B87A8(*v17);
    sub_946E0("Dwarf Error: Cannot find signatured DIE %s referenced from DIE at 0x%x [in module %s]", v18, v19, v20);
  }
  result = ((int (__fastcall *)(int, _DWORD *))loc_130EFC)(v8, a3);
  if ( !result )
  {
    v10 = (int *)sub_242FB4(0);
    sub_124BE8(*v10, 0, (unsigned __int16 *)a1);
    v11 = sub_98B08(v7, SHIDWORD(v7));
    v12 = (_DWORD *)*a3;
    v13 = v11;
    v14 = *(_DWORD *)(a1 + 8);
    v15 = (const char *)sub_1B87A8(*v12);
    sub_946E0(
      "Dwarf Error: Problem reading signatured DIE %s referenced from DIE at 0x%x [in module %s]",
      v13,
      v14,
      v15);
  }
  return result;
}
