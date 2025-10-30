__int64 __fastcall sub_3288(__int64 a1, __int64 a2)
{
  __int64 v2; // x26
  __int64 v4; // x23
  int v5; // w20
  __int64 v6; // x19
  __int64 v7; // x24
  __int64 v8; // x0
  int v9; // w1
  __int64 v10; // x0
  __int64 v11; // x19
  __int64 v12; // x25
  __int64 v13; // x24
  _QWORD *v14; // x0
  _QWORD *v15; // x0
  char *v16; // x0
  char *v17; // x27
  __int64 v18; // x24
  __int64 (__fastcall **v19)(__int64, char *); // x0
  __int64 (__fastcall *v20)(__int64, char *); // x2
  unsigned __int64 v21; // x0
  _QWORD *v22; // x28
  _QWORD *v23; // x0
  __int64 v24; // x27
  unsigned int v25; // w25
  __int64 v27; // x0
  unsigned __int64 v28; // x0
  _QWORD *v29; // [xsp+68h] [xbp+68h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 144LL);
  raw_spin_lock(&configfs_dirent_lock);
  v5 = *(_DWORD *)(v4 + 64) & 0x400;
  raw_spin_unlock(&configfs_dirent_lock);
  if ( v5 )
    return (unsigned int)-2;
  if ( (*(_DWORD *)(v4 + 64) & 0x40) == 0 )
    return (unsigned int)-1;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = v6 + 88;
  raw_spin_lock(v6 + 88);
  if ( *(_QWORD *)(v6 + 16) )
  {
    v8 = *(_QWORD *)(v6 + 144);
    v9 = *(_DWORD *)(v8 + 64);
    v10 = *(_QWORD *)(v8 + 56);
    if ( (v9 & 0x20) != 0 )
      v11 = config_item_get(*(_QWORD *)(v10 + 16));
    else
      v11 = config_item_get(v10);
    raw_spin_unlock(v7);
    v12 = *(_QWORD *)(v11 + 64);
  }
  else
  {
    v27 = v6 + 88;
    v11 = 0;
    raw_spin_unlock(v27);
    v12 = loc_40;
  }
  v13 = *(_QWORD *)(v11 + 96);
  if ( !v13 )
  {
    __break(0x800u);
    goto LABEL_33;
  }
  if ( !v12 || (v14 = *(_QWORD **)(v12 + 16)) == 0 || !v14[1] && !*v14 )
  {
    v25 = -1;
    goto LABEL_26;
  }
  v15 = *(_QWORD **)(v13 + 64);
  if ( v15 )
  {
    v2 = *v15;
    if ( (unsigned __int8)try_module_get(*v15) )
    {
      v16 = (char *)_kmalloc((unsigned int)(*(_DWORD *)(a2 + 36) + 1), 37748928);
      v17 = v16;
      if ( v16 )
      {
        v18 = v13 + 136;
        snprintf(v16, (unsigned int)(*(_DWORD *)(a2 + 36) + 1), "%s", *(const char **)(a2 + 40));
        mutex_lock(v18);
        v19 = *(__int64 (__fastcall ***)(__int64, char *))(v12 + 16);
        v20 = v19[1];
        if ( v20 )
        {
          v21 = v20(v11, v17);
          v22 = (_QWORD *)v21;
          if ( v21 )
          {
            if ( v21 <= 0xFFFFFFFFFFFFF000LL )
            {
              sub_20A0(v11, v21);
              v29 = v22;
              goto LABEL_18;
            }
            v25 = v21;
LABEL_51:
            mutex_unlock(v18);
            kfree(v17);
            goto LABEL_34;
          }
        }
        else
        {
          v28 = (*v19)(v11, v17);
          v29 = (_QWORD *)v28;
          if ( v28 )
          {
            if ( v28 <= 0xFFFFFFFFFFFFF000LL )
            {
              v22 = 0;
              sub_1978(v11, v28);
LABEL_18:
              mutex_unlock(v18);
              kfree(v17);
              v23 = (_QWORD *)v29[8];
              if ( !v23 )
              {
                v24 = 0;
                v25 = -22;
                goto LABEL_20;
              }
              v24 = *v23;
              v25 = -22;
              if ( !(unsigned __int8)try_module_get(*v23) )
              {
LABEL_20:
                mutex_lock(v18);
                sub_1FD8(v11, (__int64)v29);
                if ( v22 )
                  sub_1490(v22);
                else
                  sub_1430(v29);
                sub_2030(v11, (__int64)v29);
                mutex_unlock(v18);
                if ( v5 )
                  module_put(v24);
                goto LABEL_34;
              }
              raw_spin_lock(&configfs_dirent_lock);
              *(_DWORD *)(v4 + 64) |= 0x200u;
              raw_spin_unlock(&configfs_dirent_lock);
              if ( v22 )
              {
                v25 = sub_2DE8((__int64)v29, (_QWORD *)a2);
              }
              else
              {
                v25 = sub_2C30((__int64)v29, (_QWORD *)a2);
                if ( v25 )
                {
                  raw_spin_lock(&configfs_dirent_lock);
                  *(_DWORD *)(v4 + 64) &= ~0x200u;
LABEL_44:
                  v5 = 1;
                  raw_spin_unlock(&configfs_dirent_lock);
                  goto LABEL_20;
                }
                v25 = sub_2A40((__int64)v29, a2);
              }
              raw_spin_lock(&configfs_dirent_lock);
              *(_DWORD *)(v4 + 64) &= ~0x200u;
              if ( !v25 )
              {
                sub_1068(*(_QWORD *)(a2 + 144));
                raw_spin_unlock(&configfs_dirent_lock);
                goto LABEL_26;
              }
              goto LABEL_44;
            }
            v25 = v28;
            goto LABEL_51;
          }
        }
        mutex_unlock(v18);
        v25 = -12;
        kfree(v17);
LABEL_34:
        module_put(v2);
        goto LABEL_26;
      }
LABEL_33:
      v25 = -12;
      goto LABEL_34;
    }
  }
  v25 = -22;
LABEL_26:
  config_item_put(v11);
  return v25;
}
