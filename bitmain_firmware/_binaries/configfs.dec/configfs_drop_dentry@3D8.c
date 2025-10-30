__int64 __fastcall configfs_drop_dentry(__int64 a1, __int64 a2)
{
  __int64 v2; // x30
  __int64 result; // x0
  __int64 v6; // x19

  result = v2;
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
  {
    raw_spin_lock(v6 + 88);
    if ( *(_QWORD *)(v6 + 48) && *(_QWORD *)(v6 + 16) )
    {
      ++*(_DWORD *)(v6 + 112);
      _d_drop(v6);
      raw_spin_unlock(v6 + 88);
      return simple_unlink(*(_QWORD *)(a2 + 48), v6);
    }
    else
    {
      return raw_spin_unlock(v6 + 88);
    }
  }
  return result;
}
