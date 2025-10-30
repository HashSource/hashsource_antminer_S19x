__int64 __fastcall sub_1E9F2C(int a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  int v6; // r0
  const char **v7; // r5
  __int64 v8; // r2
  int v9; // r0
  int v10; // r0
  unsigned __int8 *v11; // r0

  v6 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v6);
  v7 = (const char **)dword_488C94;
  v8 = a3;
  LODWORD(a3) = *(_DWORD *)dword_488C94 + 9;
  strcpy(*(char **)dword_488C94, "qTBuffer:");
  v9 = sub_1E0F74(a3, v8);
  *(_BYTE *)(a3 + v9) = 44;
  *(_BYTE *)(a3 + v9 + 1 + sub_1E0F74(a3 + v9 + 1, a4)) = 0;
  v10 = sub_1E7DEC(*v7);
  v11 = (unsigned __int8 *)sub_1E98E8(v10);
  if ( !v11 || !*v11 )
    return -1;
  if ( *v11 == 108 )
    return 0;
  return (int)sub_991F8(v11, a2, a4);
}
