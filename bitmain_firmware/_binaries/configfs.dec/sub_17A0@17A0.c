__int64 __fastcall sub_17A0(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x23
  int v5; // w19
  unsigned __int64 v6; // x0
  unsigned int v7; // w19

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(v3 + 144);
  down_write(*(_QWORD *)(v3 + 48) + 176LL);
  raw_spin_lock(&configfs_dirent_lock);
  v5 = *(_DWORD *)(v4 + 64) & 0x400;
  raw_spin_unlock(&configfs_dirent_lock);
  if ( v5 )
  {
    v7 = -2;
  }
  else
  {
    v6 = sub_11C8(v4, 0, 0);
    *(_QWORD *)(a2 + 256) = v6;
    if ( v6 >= 0xFFFFFFFFFFFFF001LL )
      v7 = v6;
    else
      v7 = 0;
  }
  up_write(*(_QWORD *)(v3 + 48) + 176LL);
  return v7;
}
