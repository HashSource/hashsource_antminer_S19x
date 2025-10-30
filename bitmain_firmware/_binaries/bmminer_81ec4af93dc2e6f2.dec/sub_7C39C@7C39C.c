int __fastcall sub_7C39C(int a1, _DWORD *a2)
{
  int v6; // [sp+14h] [bp-18h]
  int v7; // [sp+1Ch] [bp-10h]
  int v8; // [sp+20h] [bp-Ch]
  int i; // [sp+24h] [bp-8h]

  v8 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 1096) )
    sub_885E4(*(_DWORD *)(a1 + 1096));
  memset((void *)(a1 + 1032), 0, 0x20u);
  *(_DWORD *)(a1 + 1096) = sub_884DC(0);
  if ( !*(_DWORD *)(a1 + 1096) )
  {
    sub_89984(2, "src/category.c", 72, "zc_arraylist_new fail");
    return -1;
  }
  for ( i = 0; i < a2[1]; ++i )
  {
    v6 = *(_DWORD *)(*a2 + 4 * i);
    if ( sub_85C7C(v6, a1) )
    {
      if ( sub_888DC(*(_DWORD *)(a1 + 1096), v6) )
      {
        sub_89984(2, "src/category.c", 81, "zc_arrylist_add fail");
        goto LABEL_22;
      }
      sub_7C300(a1, v6);
      ++v8;
    }
    if ( sub_85C04(v6) )
      v7 = v6;
  }
  if ( v8 )
    return 0;
  if ( !v7 )
  {
    sub_89984(0, "src/category.c", 103, "category[%s], no match rules & no wastebin_rule", (const char *)a1);
    return 0;
  }
  sub_89984(0, "src/category.c", 95, "category[%s], no match rules, use wastebin_rule", (const char *)a1);
  if ( !sub_888DC(*(_DWORD *)(a1 + 1096), v7) )
  {
    sub_7C300(a1, v7);
    return 0;
  }
  sub_89984(2, "src/category.c", 97, "zc_arrylist_add fail");
LABEL_22:
  sub_885E4(*(_DWORD *)(a1 + 1096));
  *(_DWORD *)(a1 + 1096) = 0;
  return -1;
}
