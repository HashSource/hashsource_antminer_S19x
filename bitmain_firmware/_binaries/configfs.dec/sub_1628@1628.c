__int64 __fastcall sub_1628(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x19

  v2 = *(_QWORD *)(a2 + 24);
  v3 = *(_QWORD *)(a2 + 256);
  down_write(*(_QWORD *)(v2 + 48) + 176LL);
  raw_spin_lock(&configfs_dirent_lock);
  _list_del_entry(v3 + 8);
  *(_QWORD *)(v3 + 8) = v3 + 8;
  *(_QWORD *)(v3 + 16) = v3 + 8;
  raw_spin_unlock(&configfs_dirent_lock);
  up_write(*(_QWORD *)(v2 + 48) + 176LL);
  if ( (*(_DWORD *)(v3 + 64) & 1) == 0 )
  {
    kfree(*(_QWORD *)(v3 + 80));
    kmem_cache_free(configfs_dir_cachep, v3);
  }
  return 0;
}
