int __fastcall sub_102464(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r8
  __int64 v10; // r0
  int v11; // r4
  int v12; // r0
  int v14; // [sp+8h] [bp-8h] BYREF
  unsigned int v15; // [sp+Ch] [bp-4h] BYREF

  v8 = sub_170040(a2);
  v9 = ((int (__fastcall *)(int))loc_165BB8)(v8);
  v14 = ((int (__fastcall *)(int))loc_1708E0)(a2);
  v10 = sub_15C190(a1, *(_DWORD *)(a2 + 20), v9);
  if ( v10 == -1 )
    return sub_25A418(a3, "NULL");
  v11 = v10;
  sub_101184(&v14, &v15, 8 * v10);
  if ( !v14 )
    return sub_25A418(a3, "%ld", v11);
  sub_25A6BC(a4, a3);
  v12 = sub_170CC4(v14);
  if ( v12 )
    sub_25A6BC(v12, a3);
  else
    sub_EBBCC(v14, a3, 0, 0);
  sub_25A418(a3, "::");
  return sub_25A6BC(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + 24 * v15 + 16), a3);
}
