void __fastcall sub_11A860(int a1, int a2, int a3)
{
  int v4; // r4
  int v6; // r7
  char *v7; // r0
  int v8; // [sp+Ch] [bp-8h] BYREF

  v4 = *(_DWORD *)(a1 + 36);
  v6 = sub_1322C8(*(_DWORD *)(v4 + 12));
  v7 = (char *)((int (__fastcall *)(int, int *, _DWORD))loc_115880)(v4, &v8, *(_DWORD *)(a2 + 16));
  if ( v8 )
    sub_119600(a2, (_DWORD *)a3, v6, v7, &v7[v8], *(_DWORD *)(v4 + 12));
  else
    *(_BYTE *)(a3 + 8) = 1;
}
