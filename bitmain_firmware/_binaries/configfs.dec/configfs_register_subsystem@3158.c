__int64 __fastcall configfs_register_subsystem(_QWORD *a1)
{
  __int64 v1; // x30
  unsigned __int64 v3; // x19
  unsigned int v4; // w22
  __int64 v5; // x0
  _QWORD *v6; // x21
  __int64 v7; // x0

  v3 = configfs_pin_fs(v1);
  v4 = v3;
  if ( v3 > 0xFFFFFFFFFFFFF000LL )
    return v4;
  if ( !*a1 )
    goto LABEL_11;
  while ( 1 )
  {
    sub_20A0(*(_QWORD *)(*(_QWORD *)(v3 + 144) + 56LL), (__int64)a1);
    down_write(*(_QWORD *)(v3 + 48) + 176LL);
    v5 = d_alloc_name(v3);
    v6 = (_QWORD *)v5;
    if ( !v5 )
    {
      v4 = -12;
      goto LABEL_7;
    }
    d_add(v5, 0);
    v4 = sub_2DE8((__int64)a1, v6);
    if ( !v4 )
      break;
    if ( !v6[6] )
    {
      d_drop(v6);
      dput(v6);
LABEL_7:
      up_write(*(_QWORD *)(v3 + 48) + 176LL);
      v7 = sub_1490(a1);
      configfs_release_fs(v7);
      return v4;
    }
    __break(0x800u);
LABEL_11:
    *a1 = a1 + 1;
  }
  raw_spin_lock(&configfs_dirent_lock);
  sub_1068(v6[18]);
  raw_spin_unlock(&configfs_dirent_lock);
  up_write(*(_QWORD *)(v3 + 48) + 176LL);
  return 0;
}
