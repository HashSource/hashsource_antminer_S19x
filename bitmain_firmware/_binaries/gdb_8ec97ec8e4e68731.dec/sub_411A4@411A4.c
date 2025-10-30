int __fastcall sub_411A4(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  __pid_t v9; // r0
  int v10; // r4
  int *v12; // r0
  int v13; // [sp+0h] [bp-Ch] BYREF
  int v14; // [sp+4h] [bp-8h] BYREF

  if ( sub_960B0(a4, &v13) == -1 || sub_96104(a5, &v14) == -1 )
  {
    v10 = -1;
    *a7 = 22;
    return v10;
  }
  if ( !a2 || *(_BYTE *)(a2 + 16) || (v9 = *(_DWORD *)(a2 + 12)) == 0 )
    v9 = getpid();
  v10 = ((int (__fastcall *)(__pid_t, int, int, int))loc_4D27C)(v9, a3, v13, v14);
  if ( v10 != -1 )
    return v10;
  v12 = _errno_location();
  *a7 = sub_96090(*v12);
  return -1;
}
