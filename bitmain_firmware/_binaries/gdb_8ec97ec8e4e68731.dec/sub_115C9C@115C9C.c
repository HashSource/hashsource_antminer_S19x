int __fastcall sub_115C9C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r4
  int v11; // r8
  int v12; // r0
  const char *v14; // r0
  int v15; // [sp+1Ch] [bp-8h] BYREF

  v7 = *(_DWORD *)(a1 + 36);
  v11 = sub_1322C8(*(_DWORD *)(v7 + 12));
  v12 = ((int (__fastcall *)(int, int *, int))loc_115880)(v7, &v15, a5);
  if ( !v15 )
  {
    v14 = (const char *)sub_21B3C4(a1);
    sub_946E0("symbol \"%s\" is optimized out", v14);
  }
  return sub_27C9B4(a2, a6, a1, a5, a3, a4, v11, v12, v12 + v15, *(_DWORD *)(v7 + 12));
}
