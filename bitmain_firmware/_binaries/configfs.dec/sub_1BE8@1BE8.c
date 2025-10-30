__int64 __fastcall sub_1BE8(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x19
  __int64 v6; // x26
  __int64 *v7; // x22
  __int64 v8; // x25
  __int64 v9; // x24
  __int64 *v10; // x24
  __int64 *i; // x19
  __int64 v13; // x1
  __int64 v14; // x26
  const char *name; // x27
  unsigned int v16; // w0
  __int64 *v17; // x2
  __int64 *v18; // x1
  __int64 v19; // x1
  unsigned int (__fastcall *v20)(__int64, const char *, __int64, __int64, __int64, __int64); // x23
  _QWORD *v21; // x0
  __int64 v22; // x19
  __int64 v23; // x2

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD **)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 256);
  v7 = (__int64 *)(v6 + 8);
  v8 = v5[16];
  v9 = v5[18];
  if ( !v4 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64, const char *, __int64, _QWORD, _QWORD, __int64))a2)(
           a2,
           ".",
           1,
           0,
           *(_QWORD *)(v5[6] + 56LL),
           4) )
    {
      return 0;
    }
    *(_QWORD *)(a2 + 8) = 1;
    v5 = *(_QWORD **)(a1 + 24);
    goto LABEL_18;
  }
  if ( v4 == 1 )
  {
LABEL_18:
    v20 = *(unsigned int (__fastcall **)(__int64, const char *, __int64, __int64, __int64, __int64))a2;
    raw_spin_lock(v5 + 11);
    v21 = v5 + 11;
    v22 = *(_QWORD *)(*(_QWORD *)(v5[3] + 48LL) + 56LL);
    raw_spin_unlock(v21);
    if ( v20(a2, "..", 2, 1, v22, 4) )
      return 0;
    *(_QWORD *)(a2 + 8) = 2;
  }
  raw_spin_lock(&configfs_dirent_lock);
  if ( *(_QWORD *)(a2 + 8) == 2 )
  {
    _list_del_entry(v6 + 8);
    v23 = *(_QWORD *)(v9 + 24);
    v10 = (__int64 *)(v9 + 24);
    _list_add(v6 + 8, v10, v23);
  }
  else
  {
    v10 = (__int64 *)(v9 + 24);
  }
  for ( i = *(__int64 **)(v6 + 8); i != v10; i = (__int64 *)*i )
  {
    if ( i[6] )
    {
      v19 = i[8];
      if ( v19 && (v13 = *(_QWORD *)(v19 + 48)) != 0 )
      {
        v14 = *(_QWORD *)(v13 + 56);
        raw_spin_unlock(&configfs_dirent_lock);
      }
      else
      {
        raw_spin_unlock(&configfs_dirent_lock);
        v14 = iunique(v8, 2);
      }
      name = (const char *)configfs_get_name((__int64)(i - 1));
      v16 = strlen(name);
      if ( (*(unsigned int (__fastcall **)(__int64, const char *, _QWORD, _QWORD, __int64, _QWORD))a2)(
             a2,
             name,
             v16,
             *(_QWORD *)(a2 + 8),
             v14,
             *((unsigned __int16 *)i + 30) >> 12) )
      {
        return 0;
      }
      raw_spin_lock(&configfs_dirent_lock);
      _list_del_entry(v7);
      v17 = (__int64 *)*i;
      v18 = i;
      i = v7;
      _list_add(v7, v18, v17);
      ++*(_QWORD *)(a2 + 8);
    }
  }
  raw_spin_unlock(&configfs_dirent_lock);
  return 0;
}
