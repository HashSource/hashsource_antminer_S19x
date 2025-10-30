int __fastcall sub_12E620(int *a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r1
  __int16 v8; // r3
  _DWORD *v9; // r5
  int v10; // r6
  int v11; // r3
  bool v12; // zf
  int result; // r0
  int v14; // r4
  const char *v15; // r0

  v6 = sub_11CF18(a2);
  v8 = *(_WORD *)(a2 + 2);
  v9 = (_DWORD *)*a3;
  v10 = v6;
  v11 = v8 & 0x7FFF;
  v12 = v11 == 7968;
  if ( v11 == 7968 )
    v7 = 1;
  else
    v11 = v9[34];
  if ( !v12 )
    v7 = (*(unsigned __int8 *)(v11 + 10) >> 3) & 1;
  result = ((int (__fastcall *)(int, int, _DWORD *, int))loc_12E49C)(v6, v7, a3, v11);
  if ( !result )
  {
    v14 = *a1;
    v15 = (const char *)sub_1B87A8(*v9);
    sub_946E0("Dwarf Error: Cannot find DIE at 0x%x referenced from DIE at 0x%x [in module %s]", v10, v14, v15);
  }
  return result;
}
