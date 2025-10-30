int __fastcall sub_8972C(int a1, int a2, int a3)
{
  char *v7; // [sp+14h] [bp-8h]

  v7 = strrchr(*(const char **)(*(_DWORD *)(a2 + 8) + 272), 47);
  if ( v7 )
    return sub_8E904(
             a3,
             v7 + 1,
             *(_DWORD *)(*(_DWORD *)(a2 + 8) + 272) + *(_DWORD *)(*(_DWORD *)(a2 + 8) + 276) - (_DWORD)v7 - 1);
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 272) )
    return sub_8E904(a3, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 272), *(_DWORD *)(*(_DWORD *)(a2 + 8) + 276));
  return sub_8E904(a3, "(file=null)", 11);
}
