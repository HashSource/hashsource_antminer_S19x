int __fastcall sub_72320(int a1, char *a2)
{
  size_t v2; // r0
  int v7; // [sp+Ch] [bp-10h]
  int v8; // [sp+14h] [bp-8h]

  v2 = strlen(a2);
  v8 = sub_708E4((unsigned __int8 *)a2, v2, dword_5369E0);
  v7 = sub_719C4(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * (v8 & ((1 << *(_DWORD *)(a1 + 8)) - 1))), a2, v8);
  if ( v7 )
    return v7 + 8;
  else
    return 0;
}
