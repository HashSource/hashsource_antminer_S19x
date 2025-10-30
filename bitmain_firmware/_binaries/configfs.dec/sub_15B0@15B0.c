__int64 __fastcall sub_15B0(__int64 a1, __int64 a2)
{
  unsigned int v4; // w19

  raw_spin_lock(&configfs_dirent_lock);
  v4 = sub_14F8(a1, a2);
  if ( !v4 )
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 144LL) + 4LL);
  raw_spin_unlock(&configfs_dirent_lock);
  return v4;
}
