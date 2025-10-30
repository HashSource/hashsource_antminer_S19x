__int64 __fastcall sub_2C30(__int64 a1, _QWORD *a2)
{
  unsigned int dirent; // w20
  __int64 v6; // x24
  __int64 v7; // x0
  const char *v8; // x21
  __int64 v9; // x20
  __int64 v10; // t1
  __int64 v11; // x19
  const char *name; // x0
  __int64 v13; // x0
  unsigned int v19; // w0
  unsigned int v20; // w0

  v6 = a2[3];
  if ( !a1 )
  {
    __break(0x800u);
    goto LABEL_20;
  }
  v7 = *(_QWORD *)(v6 + 144);
  v8 = (const char *)a2[5];
  v10 = *(_QWORD *)(v7 + 24);
  v9 = v7 + 24;
  v11 = v10 - 8;
  if ( v7 + 24 == v10 )
  {
LABEL_7:
    dirent = configfs_make_dirent(v7, (__int64)a2, a1, 16877, 1026);
    if ( dirent )
      return dirent;
    dirent = configfs_create(a2, 16877, (void (__fastcall *)(__int64))sub_19D8);
    if ( !dirent )
    {
      inc_nlink(*(_QWORD *)(v6 + 48));
      *(_QWORD *)(a1 + 72) = a2;
      return 0;
    }
    _X19 = a2[18];
    if ( !_X19 )
      return dirent;
    raw_spin_lock(&configfs_dirent_lock);
    _list_del_entry(_X19 + 8);
    *(_QWORD *)(_X19 + 8) = _X19 + 8;
    *(_QWORD *)(_X19 + 16) = _X19 + 8;
    raw_spin_unlock(&configfs_dirent_lock);
    if ( *(_DWORD *)_X19 )
    {
LABEL_11:
      __asm { PRFM            #0x11, [X19] }
      do
      {
        v19 = __ldxr((unsigned int *)_X19);
        v20 = v19 - 1;
      }
      while ( __stlxr(v20, (unsigned int *)_X19) );
      __dmb(0xBu);
      if ( !v20 && (*(_DWORD *)(_X19 + 64) & 1) == 0 )
      {
        kfree(*(_QWORD *)(_X19 + 80));
        kmem_cache_free(configfs_dir_cachep, _X19);
        return dirent;
      }
      return dirent;
    }
LABEL_20:
    __break(0x800u);
    goto LABEL_11;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v11 + 56) )
    {
      name = (const char *)configfs_get_name(v11);
      if ( !strcmp(name, v8) )
        return 4294967279LL;
    }
    v13 = *(_QWORD *)(v11 + 8);
    v11 = v13 - 8;
    if ( v9 == v13 )
    {
      v7 = *(_QWORD *)(v6 + 144);
      goto LABEL_7;
    }
  }
}
