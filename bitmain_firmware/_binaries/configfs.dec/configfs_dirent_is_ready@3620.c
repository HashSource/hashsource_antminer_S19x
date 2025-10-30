bool __fastcall configfs_dirent_is_ready(__int64 a1)
{
  _BOOL4 v2; // w19

  raw_spin_lock(&configfs_dirent_lock);
  v2 = (*(_DWORD *)(a1 + 64) & 0x400LL) == 0;
  raw_spin_unlock(&configfs_dirent_lock);
  return v2;
}
