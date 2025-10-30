__int64 __fastcall configfs_register_group(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x20
  __int64 v5; // x20
  unsigned int v6; // w19

  v4 = *(_QWORD *)(a1 + 96) + 136LL;
  mutex_lock(v4);
  sub_20A0(a1, (__int64)a2);
  mutex_unlock(v4);
  v5 = *(_QWORD *)(a1 + 72);
  down_write(*(_QWORD *)(v5 + 48) + 176LL);
  v6 = sub_2F40(*(_QWORD *)(a1 + 72), a2);
  if ( !v6 )
  {
    raw_spin_lock(&configfs_dirent_lock);
    sub_1068(*(_QWORD *)(a2[9] + 144LL));
    raw_spin_unlock(&configfs_dirent_lock);
  }
  up_write(*(_QWORD *)(v5 + 48) + 176LL);
  return v6;
}
