__int64 __fastcall configfs_unregister_group(_QWORD *a1)
{
  __int64 v2; // x19
  __int64 v3; // x22
  __int64 v4; // x21

  v2 = a1[9];
  v3 = *(_QWORD *)(a1[6] + 72LL);
  v4 = a1[12] + 136LL;
  down_write(*(_QWORD *)(v3 + 48) + 176LL);
  raw_spin_lock(&configfs_dirent_lock);
  sub_1E00(*(_QWORD *)(v2 + 144), 0);
  raw_spin_unlock(&configfs_dirent_lock);
  sub_24E8((__int64)a1);
  *(_DWORD *)(*(_QWORD *)(v2 + 48) + 12LL) |= 0x10u;
  raw_spin_lock(v2 + 88);
  *(_DWORD *)v2 |= 0x100u;
  raw_spin_unlock(v2 + 88);
  d_delete(v2);
  up_write(*(_QWORD *)(v3 + 48) + 176LL);
  dput(v2);
  mutex_lock(v4);
  sub_1490(a1);
  return mutex_unlock(v4);
}
