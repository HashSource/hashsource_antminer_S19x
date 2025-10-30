__int64 __fastcall sub_1A20(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  int v4; // w19
  __int64 result; // x0
  __int64 v6; // x20
  __int64 v7; // t1
  const char *name; // x0
  __int64 v10; // x0
  __int64 v11; // x20
  unsigned int v17; // w0
  void (__fastcall *v18)(__int64); // x2
  int v19; // w20
  unsigned int v21; // w0
  unsigned int v22; // w0

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 144LL);
  raw_spin_lock(&configfs_dirent_lock);
  v4 = *(_DWORD *)(v3 + 64);
  raw_spin_unlock(&configfs_dirent_lock);
  result = -2;
  if ( (v4 & 0x400) == 0 )
  {
    v7 = *(_QWORD *)(v3 + 24);
    v6 = v3 + 24;
    _X19 = v7 - 8;
    if ( v6 == v7 )
    {
LABEL_3:
      result = -36;
      if ( *(_DWORD *)(a2 + 36) <= 0xFFu )
      {
        d_add(a2, 0);
        return 0;
      }
    }
    else
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(_X19 + 64) & 0xC) != 0 )
        {
          name = (const char *)configfs_get_name(_X19);
          if ( !strcmp(name, *(const char **)(a2 + 40)) )
            break;
        }
        v10 = *(_QWORD *)(_X19 + 8);
        _X19 = v10 - 8;
        if ( v6 == v10 )
          goto LABEL_3;
      }
      v11 = *(_QWORD *)(_X19 + 56);
      raw_spin_lock(&configfs_dirent_lock);
      if ( _X19 )
      {
        if ( !*(_DWORD *)_X19 )
          __break(0x800u);
        __asm { PRFM            #0x11, [X19] }
        do
          v17 = __ldxr((unsigned int *)_X19);
        while ( __stxr(v17 + 1, (unsigned int *)_X19) );
      }
      *(_QWORD *)(a2 + 144) = _X19;
      *(_QWORD *)(_X19 + 72) = a2;
      raw_spin_unlock(&configfs_dirent_lock);
      if ( (*(_DWORD *)(_X19 + 64) & 8) != 0 )
        v18 = (void (__fastcall *)(__int64))sub_FF8;
      else
        v18 = (void (__fastcall *)(__int64))sub_FB8;
      v19 = configfs_create((_QWORD *)a2, *(_WORD *)(v11 + 16) & 0xFFF | 0x8000u, v18);
      result = 0;
      if ( v19 )
      {
        if ( !*(_DWORD *)_X19 )
          __break(0x800u);
        __asm { PRFM            #0x11, [X19] }
        do
        {
          v21 = __ldxr((unsigned int *)_X19);
          v22 = v21 - 1;
        }
        while ( __stlxr(v22, (unsigned int *)_X19) );
        __dmb(0xBu);
        if ( v22 || (*(_DWORD *)(_X19 + 64) & 1) != 0 )
        {
          return v19;
        }
        else
        {
          kfree(*(_QWORD *)(_X19 + 80));
          kmem_cache_free(configfs_dir_cachep, _X19);
          return v19;
        }
      }
    }
  }
  return result;
}
