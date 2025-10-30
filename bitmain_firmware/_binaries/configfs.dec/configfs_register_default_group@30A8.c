__int64 __fastcall configfs_register_default_group(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  _QWORD *v7; // x19
  int v8; // w20
  __int64 result; // x0

  v6 = kmem_cache_alloc_trace(kmalloc_caches[8], 37781696, 136);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return -12;
  config_group_init_type_name(v6, a2, a3);
  v8 = configfs_register_group(a1, v7);
  result = (__int64)v7;
  if ( v8 )
  {
    kfree(v7);
    return v8;
  }
  return result;
}
