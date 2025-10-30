__int64 __fastcall sub_598(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v5; // x0

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a2 + 256);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 144) + 56LL) + 8LL);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 144LL) + 56LL) )
    config_item_put();
  module_put(v4);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    if ( v5 )
      free_pages(v5, 0);
    mutex_destroy(v3 + 32);
    kfree(v3);
  }
  return 0;
}
