int __fastcall sub_7D3E4(_DWORD *a1)
{
  const void *v2; // [sp+0h] [bp-Ch]

  if ( !a1 )
    return sub_89984(2, "src/conf.c", 83, "a_conf is null or 0");
  if ( a1[1290] )
    sub_80B9C(a1[1290]);
  if ( a1[2320] )
    sub_7FBB8(a1[2320]);
  if ( a1[2316] )
    sub_7F518(a1[2316]);
  if ( a1[2321] )
    sub_885E4(a1[2321]);
  if ( a1[2322] )
    sub_885E4(a1[2322]);
  free(a1);
  return sub_89984(0, "src/conf.c", 90, "zlog_conf_del[%p]", v2);
}
