int __fastcall sub_1DFE6C(_DWORD **a1, int a2, _QWORD *a3)
{
  int result; // r0
  int v7; // r4
  int v8; // r0
  __int64 v9; // r0
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  ((void (*)(void))loc_1DD940)();
  result = ((int (__fastcall *)(_DWORD **, int, _DWORD *))loc_1DDDC0)(a1, a2, savedregs);
  if ( result == 1 )
  {
    v7 = *(_DWORD *)((*a1)[5] + 4 * a2);
    v8 = ((int (__fastcall *)(_DWORD))loc_165BB8)(**a1);
    LODWORD(v9) = sub_15C190((unsigned __int8 *)savedregs, v7, v8);
    *a3 = v9;
    return 1;
  }
  else
  {
    *a3 = 0;
  }
  return result;
}
