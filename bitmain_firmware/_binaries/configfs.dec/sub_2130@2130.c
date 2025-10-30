__int64 __fastcall sub_2130(__int64 a1)
{
  __int64 v1; // x30
  __int64 result; // x0
  __int64 v4; // x22
  _QWORD *v5; // x22
  _QWORD *v6; // t1
  _QWORD *v7; // x19
  __int64 i; // x21
  unsigned int v15; // w0
  unsigned int v16; // w0
  __int64 v17; // x1

  result = v1;
  if ( a1 )
  {
    lockref_get(a1 + 88);
    if ( (word_6E5A & 4) != 0 )
      _dynamic_pr_debug(off_6E38, "configfs: configfs %s: dropping attrs for  dir\n", *(const char **)(a1 + 40));
    v4 = *(_QWORD *)(a1 + 144);
    v6 = *(_QWORD **)(v4 + 24);
    v5 = (_QWORD *)(v4 + 24);
    v7 = v6;
    _X20 = (__int64)(v6 - 1);
    for ( i = *v6 - 8LL; v7 != v5; i = *(_QWORD *)(i + 8) - 8LL )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(_X20 + 56) && (*(_DWORD *)(_X20 + 64) & 0xC) != 0 )
        {
          raw_spin_lock(&configfs_dirent_lock);
          _list_del_entry(v7);
          *(_QWORD *)(_X20 + 8) = v7;
          *(_QWORD *)(_X20 + 16) = v7;
          raw_spin_unlock(&configfs_dirent_lock);
          configfs_drop_dentry(_X20, a1);
          if ( !*(_DWORD *)_X20 )
            __break(0x800u);
          __asm { PRFM            #0x11, [X20] }
          do
          {
            v15 = __ldxr((unsigned int *)_X20);
            v16 = v15 - 1;
          }
          while ( __stlxr(v16, (unsigned int *)_X20) );
          __dmb(0xBu);
          if ( !v16 && (*(_DWORD *)(_X20 + 64) & 1) == 0 )
            break;
        }
        _X20 = i;
        v7 = (_QWORD *)(i + 8);
        i = *(_QWORD *)(i + 8) - 8LL;
        if ( v7 == v5 )
          return dput(a1);
      }
      kfree(*(_QWORD *)(_X20 + 80));
      v17 = _X20;
      _X20 = i;
      kmem_cache_free(configfs_dir_cachep, v17);
      v7 = (_QWORD *)(i + 8);
    }
    return dput(a1);
  }
  return result;
}
