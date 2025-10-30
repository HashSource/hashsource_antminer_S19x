__int64 __fastcall sub_2528(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // w22
  __int64 v3; // x26
  __int64 v5; // x23
  _QWORD *v6; // x19
  __int64 v7; // x0
  int v8; // w1
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x24
  __int64 v12; // x25
  __int64 *v13; // x0
  __int64 v14; // x0
  int v15; // w1
  __int64 v16; // x0
  __int64 *v17; // x0
  __int64 v18; // x20
  __int64 v19; // x25
  __int64 v21; // [xsp+58h] [xbp+58h] BYREF

  v5 = a2[18];
  if ( (*(_DWORD *)(v5 + 64) & 0x80) != 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v6 = (_QWORD *)a2[3];
    raw_spin_lock(v6 + 11);
    if ( v6[2] )
    {
      v7 = v6[18];
      v8 = *(_DWORD *)(v7 + 64);
      v9 = *(_QWORD *)(v7 + 56);
      if ( (v8 & 0x20) != 0 )
        v10 = config_item_get(*(_QWORD *)(v9 + 16));
      else
        v10 = config_item_get(v9);
      v11 = v10;
      raw_spin_unlock(v6 + 11);
    }
    else
    {
      v11 = 0;
      raw_spin_unlock(v6 + 11);
    }
    v12 = *(_QWORD *)(v11 + 96);
    if ( !v12 )
    {
      __break(0x800u);
      goto LABEL_31;
    }
    if ( *(_QWORD *)(v11 + 64) )
    {
      v13 = *(__int64 **)(v12 + 64);
      if ( v13 )
      {
        v3 = *v13;
        while ( 1 )
        {
          mutex_lock(&configfs_symlink_mutex);
          raw_spin_lock(&configfs_dirent_lock);
          if ( *(_DWORD *)(v5 + 4) )
          {
            raw_spin_unlock(&configfs_dirent_lock);
            v2 = -16;
            mutex_unlock(&configfs_symlink_mutex);
LABEL_23:
            config_item_put(v11);
            return v2;
          }
          v2 = sub_1E00(a2[18], &v21);
          if ( !v2 )
            break;
          sub_1EF0(a2[18]);
          raw_spin_unlock(&configfs_dirent_lock);
          mutex_unlock(&configfs_symlink_mutex);
          if ( v2 != -11 )
            goto LABEL_23;
          down_write(*(_QWORD *)(v21 + 48) + 176LL);
          up_write(*(_QWORD *)(v21 + 48) + 176LL);
          dput(v21);
        }
        raw_spin_unlock(&configfs_dirent_lock);
        mutex_unlock(&configfs_symlink_mutex);
        v6 = 0;
        raw_spin_lock(a2 + 11);
        if ( a2[2] )
        {
          v14 = a2[18];
          v15 = *(_DWORD *)(v14 + 64);
          v16 = *(_QWORD *)(v14 + 56);
          if ( (v15 & 0x20) != 0 )
            v6 = (_QWORD *)config_item_get(*(_QWORD *)(v16 + 16));
          else
            v6 = (_QWORD *)config_item_get(v16);
        }
        raw_spin_unlock(a2 + 11);
        config_item_put(v11);
        v17 = (__int64 *)v6[8];
        if ( v17 )
        {
          v18 = *v17;
          goto LABEL_17;
        }
        goto LABEL_32;
      }
LABEL_31:
      __break(0x800u);
LABEL_32:
      v18 = 0;
LABEL_17:
      v19 = v12 + 136;
      if ( (*(_DWORD *)(v5 + 64) & 0x40) != 0 )
      {
        sub_24E8((__int64)v6);
        mutex_lock(v19);
        sub_1FD8(v11, (__int64)v6);
        sub_1490(v6);
      }
      else
      {
        sub_2130(v6[9]);
        sub_22A0(v6[9]);
        mutex_lock(v19);
        sub_1FD8(v11, (__int64)v6);
        sub_1430(v6);
      }
      sub_2030(v11, (__int64)v6);
      mutex_unlock(v19);
      config_item_put(v6);
      module_put(v18);
      module_put(v3);
      return v2;
    }
    v2 = -22;
    config_item_put(v11);
  }
  return v2;
}
