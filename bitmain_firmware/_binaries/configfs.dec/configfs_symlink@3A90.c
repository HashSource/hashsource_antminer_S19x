__int64 __fastcall configfs_symlink(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // x19
  __int64 v6; // x0
  int v7; // w1
  __int64 v8; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x0
  unsigned int link; // w19
  __int64 v13; // x24
  __int64 v14; // x19
  __int64 v15; // x0
  int v16; // w1
  __int64 v17; // x0
  __int64 v18; // x23
  __int64 v20; // x19
  _QWORD *v21; // x24
  void (__fastcall *v22)(__int64, __int64); // x2
  _BYTE v23[8]; // [xsp+50h] [xbp+50h] BYREF
  __int64 v24; // [xsp+58h] [xbp+58h]

  if ( !configfs_dirent_is_ready(*(_QWORD *)(a2[3] + 144LL)) )
    return (unsigned int)-2;
  v5 = a2[3];
  raw_spin_lock(v5 + 88);
  if ( *(_QWORD *)(v5 + 16) )
  {
    v6 = *(_QWORD *)(v5 + 144);
    v7 = *(_DWORD *)(v6 + 64);
    v8 = *(_QWORD *)(v6 + 56);
    if ( (v7 & 0x20) != 0 )
    {
      v9 = config_item_get(*(_QWORD *)(v8 + 16));
      raw_spin_unlock(v5 + 88);
      v10 = *(_QWORD *)(v9 + 64);
      if ( !v10 )
        goto LABEL_19;
      goto LABEL_6;
    }
    v9 = config_item_get(v8);
  }
  else
  {
    v9 = 0;
  }
  raw_spin_unlock(v5 + 88);
  v10 = *(_QWORD *)(v9 + 64);
  if ( !v10 )
  {
LABEL_19:
    link = -1;
    goto LABEL_16;
  }
LABEL_6:
  v11 = *(_QWORD *)(v10 + 8);
  if ( !v11 )
    goto LABEL_19;
  link = -1;
  if ( !*(_QWORD *)(v11 + 8) )
    goto LABEL_16;
  v13 = a2[16];
  link = kern_path(a3, 3, v23);
  if ( link )
    goto LABEL_16;
  v14 = v24;
  if ( v13 != *(_QWORD *)(v24 + 128) )
  {
    link = -1;
    path_put(v23);
    goto LABEL_16;
  }
  raw_spin_lock(v24 + 88);
  if ( !*(_QWORD *)(v14 + 16) )
  {
    raw_spin_unlock(v14 + 88);
LABEL_25:
    link = -2;
    path_put(v23);
    goto LABEL_16;
  }
  v15 = *(_QWORD *)(v14 + 144);
  v16 = *(_DWORD *)(v15 + 64);
  v17 = *(_QWORD *)(v15 + 56);
  if ( (v16 & 0x20) != 0 )
    v18 = config_item_get(*(_QWORD *)(v17 + 16));
  else
    v18 = config_item_get(v17);
  raw_spin_unlock(v14 + 88);
  if ( !v18 )
    goto LABEL_25;
  link = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 8) + 8LL))(v9, v18);
  if ( !link )
  {
    mutex_lock(&configfs_symlink_mutex);
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 72) + 144LL);
    if ( configfs_dirent_is_ready(v20) )
    {
      v21 = (_QWORD *)kmem_cache_alloc_trace(kmalloc_caches[7], 37748928, 24);
      if ( v21 )
      {
        raw_spin_lock(&configfs_dirent_lock);
        if ( (*(_DWORD *)(v20 + 64) & 0x100) != 0 )
        {
          raw_spin_unlock(&configfs_dirent_lock);
          link = -2;
          kfree(v21);
        }
        else
        {
          v21[2] = config_item_get(v18);
          _list_add(v21, v20 + 40, *(_QWORD *)(v20 + 40));
          raw_spin_unlock(&configfs_dirent_lock);
          link = configfs_create_link((__int64)v21, *(_QWORD *)(v9 + 72), a2);
          if ( !link )
          {
            mutex_unlock(&configfs_symlink_mutex);
            goto LABEL_15;
          }
          raw_spin_lock(&configfs_dirent_lock);
          _list_del_entry(v21);
          *v21 = v21;
          v21[1] = v21;
          raw_spin_unlock(&configfs_dirent_lock);
          config_item_put(v18);
          kfree(v21);
        }
      }
      else
      {
        link = -12;
      }
    }
    else
    {
      link = -2;
    }
    mutex_unlock(&configfs_symlink_mutex);
    v22 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 8) + 16LL);
    if ( v22 )
      v22(v9, v18);
  }
LABEL_15:
  config_item_put(v18);
  path_put(v23);
LABEL_16:
  config_item_put(v9);
  return link;
}
