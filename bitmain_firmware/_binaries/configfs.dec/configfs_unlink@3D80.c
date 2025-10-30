__int64 __fastcall configfs_unlink(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *v5; // x20
  __int64 v6; // x0
  int v7; // w1
  __int64 v8; // x0
  __int64 v9; // x24
  __int64 v10; // x25
  unsigned int v16; // w0
  unsigned int v17; // w0
  __int64 v18; // x0
  void (__fastcall *v19)(__int64, _QWORD); // x2

  _X19 = *(_QWORD *)(a2 + 144);
  if ( (*(_DWORD *)(_X19 + 64) & 0x20) == 0 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD **)(_X19 + 56);
  raw_spin_lock(v4 + 88);
  if ( *(_QWORD *)(v4 + 16) )
  {
    v6 = *(_QWORD *)(v4 + 144);
    v7 = *(_DWORD *)(v6 + 64);
    v8 = *(_QWORD *)(v6 + 56);
    if ( (v7 & 0x20) != 0 )
      v9 = config_item_get(*(_QWORD *)(v8 + 16));
    else
      v9 = config_item_get(v8);
  }
  else
  {
    v9 = 0;
  }
  raw_spin_unlock(v4 + 88);
  v10 = *(_QWORD *)(v9 + 64);
  raw_spin_lock(&configfs_dirent_lock);
  _list_del_entry(_X19 + 8);
  *(_QWORD *)(_X19 + 8) = _X19 + 8;
  *(_QWORD *)(_X19 + 16) = _X19 + 8;
  raw_spin_unlock(&configfs_dirent_lock);
  configfs_drop_dentry(_X19, *(_QWORD *)(a2 + 24));
  dput(a2);
  if ( !*(_DWORD *)_X19 )
    __break(0x800u);
  __asm { PRFM            #0x11, [X19] }
  do
  {
    v16 = __ldxr((unsigned int *)_X19);
    v17 = v16 - 1;
  }
  while ( __stlxr(v17, (unsigned int *)_X19) );
  __dmb(0xBu);
  if ( !v17 && (*(_DWORD *)(_X19 + 64) & 1) == 0 )
  {
    kfree(*(_QWORD *)(_X19 + 80));
    kmem_cache_free(configfs_dir_cachep, _X19);
  }
  if ( v10 )
  {
    v18 = *(_QWORD *)(v10 + 8);
    if ( v18 )
    {
      v19 = *(void (__fastcall **)(__int64, _QWORD))(v18 + 16);
      if ( v19 )
        v19(v9, v5[2]);
    }
  }
  raw_spin_lock(&configfs_dirent_lock);
  _list_del_entry(v5);
  *v5 = v5;
  v5[1] = v5;
  raw_spin_unlock(&configfs_dirent_lock);
  config_item_put(v5[2]);
  kfree(v5);
  config_item_put(v9);
  return 0;
}
