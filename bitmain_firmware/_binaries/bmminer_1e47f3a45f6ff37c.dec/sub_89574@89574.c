int __fastcall sub_89574(int a1, int a2, int a3)
{
  int v7; // [sp+1Ch] [bp-8h]

  v7 = sub_83920(*(_DWORD **)(a2 + 4), a1 + 4112);
  if ( v7 )
    return sub_8E904(a3, v7 + 1025, *(_DWORD *)(v7 + 2052));
  sub_8CD10(2, "src/spec.c", 123, "zlog_mdc_get_kv key[%s] fail", (const char *)(a1 + 4112));
  return 0;
}
