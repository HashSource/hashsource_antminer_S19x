int __fastcall sub_94A44(int a1, int a2)
{
  int v2; // r3
  int v3; // r4
  int (*v5)(void); // r6
  int v8; // r1
  int v9; // [sp+8h] [bp-8h]
  int v10; // [sp+Ch] [bp-4h]

  v2 = *(_DWORD *)(a1 + 124);
  v3 = *(_DWORD *)(v2 + 828);
  *(_DWORD *)(v2 + 828) = 0;
  if ( !v3 )
    return 2;
  v5 = *(int (**)(void))(*(_DWORD *)(a1 + 1232) + 384);
  if ( !v5 )
    return 2;
  if ( v5() )
    return 1;
  if ( sub_A8450(a2, v8, 13172, 0, 2) && sub_A8544(a2, v9, v10, 2) )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 124) + 828) = 1;
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 457, 68, "ssl/statem/extensions_srvr.c", 1557);
    return 0;
  }
}
