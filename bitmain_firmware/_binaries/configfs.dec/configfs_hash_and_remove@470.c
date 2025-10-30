__int64 __fastcall configfs_hash_and_remove(__int64 a1, const char *a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  __int64 v6; // x21
  __int64 v7; // t1
  __int64 v8; // x19
  const char *name; // x0
  unsigned int v16; // w0
  unsigned int v17; // w0

  result = *(_QWORD *)(a1 + 48);
  if ( result )
  {
    v5 = *(_QWORD *)(a1 + 144);
    down_write(result + 176);
    v7 = *(_QWORD *)(v5 + 24);
    v6 = v5 + 24;
    v8 = v7;
    _X20 = v7 - 8;
    if ( v7 != v6 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(_X20 + 56) )
        {
          name = (const char *)configfs_get_name(_X20);
          if ( !strcmp(name, a2) )
            break;
        }
        v8 = *(_QWORD *)(_X20 + 8);
        _X20 = v8 - 8;
        if ( v8 == v6 )
          return up_write(*(_QWORD *)(a1 + 48) + 176LL);
      }
      raw_spin_lock(&configfs_dirent_lock);
      _list_del_entry(v8);
      *(_QWORD *)(_X20 + 8) = v8;
      *(_QWORD *)(_X20 + 16) = v8;
      raw_spin_unlock(&configfs_dirent_lock);
      configfs_drop_dentry(_X20, a1);
      if ( !*(_DWORD *)_X20 )
        __break(0x800u);
      __asm { PRFM            #0x11, [X20] }
      do
      {
        v16 = __ldxr((unsigned int *)_X20);
        v17 = v16 - 1;
      }
      while ( __stlxr(v17, (unsigned int *)_X20) );
      __dmb(0xBu);
      if ( !v17 && (*(_DWORD *)(_X20 + 64) & 1) == 0 )
      {
        kfree(*(_QWORD *)(_X20 + 80));
        kmem_cache_free(configfs_dir_cachep, _X20);
      }
    }
    return up_write(*(_QWORD *)(a1 + 48) + 176LL);
  }
  return result;
}
