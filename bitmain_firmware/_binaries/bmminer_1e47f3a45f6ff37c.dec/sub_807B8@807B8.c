int __fastcall sub_807B8(_DWORD *a1)
{
  const void *v2; // [sp+0h] [bp-Ch]

  if ( !a1 )
    return sub_8CD10(2, "src/conf.c", 83, "a_conf is null or 0");
  if ( a1[1290] )
    sub_83F54(a1[1290]);
  if ( a1[2320] )
    sub_82F70(a1[2320]);
  if ( a1[2316] )
    sub_828D0(a1[2316]);
  if ( a1[2321] )
    sub_8B980(a1[2321]);
  if ( a1[2322] )
    sub_8B980(a1[2322]);
  free(a1);
  return sub_8CD10(0, "src/conf.c", 90, "zlog_conf_del[%p]", v2);
}
