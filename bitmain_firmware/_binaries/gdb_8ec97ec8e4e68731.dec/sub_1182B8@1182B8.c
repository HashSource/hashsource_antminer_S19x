int __fastcall sub_1182B8(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r0
  int v8; // [sp+14h] [bp-4h] BYREF

  if ( !a2 )
    a3 = 0;
  v5 = *(_DWORD *)(a1 + 36);
  if ( a2 )
    a3 = sub_15DE14(a2);
  v6 = ((int (__fastcall *)(int, int *, int))loc_115880)(v5, &v8, a3);
  return sub_117684(*(_DWORD *)(a1 + 24), a2, v6, v8, *(_DWORD *)(v5 + 12), 0, 0);
}
