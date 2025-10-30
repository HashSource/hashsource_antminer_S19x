__int64 __fastcall sub_22A0(__int64 a1)
{
  __int64 v1; // x30
  __int64 result; // x0
  __int64 v4; // x21
  unsigned int v11; // w0
  unsigned int v12; // w0

  result = v1;
  if ( a1 )
  {
    lockref_get(a1 + 88);
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
      lockref_get(v4 + 88);
    _X19 = *(_QWORD *)(a1 + 144);
    raw_spin_lock(&configfs_dirent_lock);
    _list_del_entry(_X19 + 8);
    *(_QWORD *)(_X19 + 8) = _X19 + 8;
    *(_QWORD *)(_X19 + 16) = _X19 + 8;
    raw_spin_unlock(&configfs_dirent_lock);
    if ( !*(_DWORD *)_X19 )
      __break(0x800u);
    __asm { PRFM            #0x11, [X19] }
    do
    {
      v11 = __ldxr((unsigned int *)_X19);
      v12 = v11 - 1;
    }
    while ( __stlxr(v12, (unsigned int *)_X19) );
    __dmb(0xBu);
    if ( !v12 && (*(_DWORD *)(_X19 + 64) & 1) == 0 )
    {
      kfree(*(_QWORD *)(_X19 + 80));
      kmem_cache_free(configfs_dir_cachep, _X19);
    }
    if ( *(_QWORD *)(a1 + 48) )
      simple_rmdir(*(_QWORD *)(v4 + 48), a1);
    if ( (word_6E82 & 4) != 0 )
      _dynamic_pr_debug(off_6E60, "configfs:  o %pd removing done (%d)\n", (const void *)a1, *(_DWORD *)(a1 + 112));
    dput(v4);
    return dput(a1);
  }
  return result;
}
