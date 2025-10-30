int __fastcall sub_613CC(int a1, char *a2)
{
  size_t v2; // r0
  int v7; // [sp+Ch] [bp-10h]
  int v8; // [sp+14h] [bp-8h]

  v2 = strlen(a2);
  v8 = sub_5FB98((unsigned __int8 *)a2, v2, dword_90C48);
  v7 = sub_60C80(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * (v8 & ((1 << *(_DWORD *)(a1 + 8)) - 1))), a2, v8);
  if ( v7 )
    return *(_DWORD *)(v7 + 20);
  else
    return 0;
}
