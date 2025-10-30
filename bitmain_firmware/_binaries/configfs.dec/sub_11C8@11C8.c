__int64 __fastcall sub_11C8(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // x19
  __int64 result; // x0

  v6 = kmem_cache_alloc(configfs_dir_cachep, 37781696);
  result = -12;
  if ( v6 )
  {
    *(_DWORD *)v6 = 1;
    *(_QWORD *)(v6 + 32) = v6 + 24;
    *(_QWORD *)(v6 + 40) = v6 + 40;
    *(_QWORD *)(v6 + 48) = v6 + 40;
    *(_QWORD *)(v6 + 56) = a2;
    *(_DWORD *)(v6 + 64) = a3;
    *(_QWORD *)(v6 + 24) = v6 + 24;
    raw_spin_lock(&configfs_dirent_lock);
    if ( (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
    {
      raw_spin_unlock(&configfs_dirent_lock);
      kmem_cache_free(configfs_dir_cachep, v6);
      return -2;
    }
    else
    {
      _list_add(v6 + 8, a1 + 24, *(_QWORD *)(a1 + 24));
      raw_spin_unlock(&configfs_dirent_lock);
      return v6;
    }
  }
  return result;
}
