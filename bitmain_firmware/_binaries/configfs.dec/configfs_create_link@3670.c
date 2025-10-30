__int64 __fastcall configfs_create_link(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int dirent; // w19
  unsigned int v12; // w0
  unsigned int v13; // w0

  dirent = configfs_make_dirent(*(_QWORD *)(a2 + 144), (__int64)a3, a1, -24065, 32);
  if ( !dirent )
  {
    dirent = configfs_create(a3, -24065, (void (__fastcall *)(__int64))sub_1030);
    if ( dirent )
    {
      _X20 = a3[18];
      if ( _X20 )
      {
        raw_spin_lock(&configfs_dirent_lock);
        _list_del_entry(_X20 + 8);
        *(_QWORD *)(_X20 + 8) = _X20 + 8;
        *(_QWORD *)(_X20 + 16) = _X20 + 8;
        raw_spin_unlock(&configfs_dirent_lock);
        if ( !*(_DWORD *)_X20 )
          __break(0x800u);
        __asm { PRFM            #0x11, [X20] }
        do
        {
          v12 = __ldxr((unsigned int *)_X20);
          v13 = v12 - 1;
        }
        while ( __stlxr(v13, (unsigned int *)_X20) );
        __dmb(0xBu);
        if ( !v13 && (*(_DWORD *)(_X20 + 64) & 1) == 0 )
        {
          kfree(*(_QWORD *)(_X20 + 80));
          kmem_cache_free(configfs_dir_cachep, _X20);
        }
      }
    }
  }
  return dirent;
}
