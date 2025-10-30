__int64 __fastcall sub_10E8(__int64 a1, __int64 a2)
{
  unsigned int v9; // w0
  unsigned int v10; // w0

  _X19 = *(_QWORD *)(a1 + 144);
  if ( !_X19 )
    return iput(a2);
  raw_spin_lock(&configfs_dirent_lock);
  if ( *(int *)_X19 <= 2 )
    *(_QWORD *)(_X19 + 72) = 0;
  raw_spin_unlock(&configfs_dirent_lock);
  if ( !*(_DWORD *)_X19 )
    __break(0x800u);
  __asm { PRFM            #0x11, [X19] }
  do
  {
    v9 = __ldxr((unsigned int *)_X19);
    v10 = v9 - 1;
  }
  while ( __stlxr(v10, (unsigned int *)_X19) );
  __dmb(0xBu);
  if ( v10 || (*(_DWORD *)(_X19 + 64) & 1) != 0 )
    return iput(a2);
  kfree(*(_QWORD *)(_X19 + 80));
  kmem_cache_free(configfs_dir_cachep, _X19);
  return iput(a2);
}
