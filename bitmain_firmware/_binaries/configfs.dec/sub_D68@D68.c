__int64 __fastcall sub_D68(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // x19
  __int64 v9; // x20
  __int64 v11; // x0
  __int64 v12; // x25
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 zeroed_page; // x0

  v8 = *(_QWORD *)(a1 + 256);
  mutex_lock(v8 + 32);
  if ( !*(_DWORD *)(v8 + 96) )
    goto LABEL_2;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 144) + 56LL);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 144LL) + 56LL);
  if ( !*(_QWORD *)(v8 + 16) )
    goto LABEL_13;
  while ( 1 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(v12 + 24))(v13);
    if ( v14 <= 4096 )
      break;
    __break(0x800u);
LABEL_13:
    zeroed_page = get_zeroed_page(37748928);
    *(_QWORD *)(v8 + 16) = zeroed_page;
    if ( !zeroed_page )
    {
      v9 = -12;
      goto LABEL_5;
    }
  }
  if ( (v14 & 0x8000000000000000LL) == 0 )
  {
    *(_QWORD *)v8 = v14;
    *(_DWORD *)(v8 + 96) = 0;
    goto LABEL_2;
  }
  v9 = (int)v14;
  if ( !(_DWORD)v14 )
  {
LABEL_2:
    if ( (word_6E32 & 4) != 0 )
      _dynamic_pr_debug(
        off_6E10,
        "configfs: %s: count = %zd, ppos = %lld, buf = %s\n",
        "configfs_read_file",
        a3,
        *a4,
        *(const char **)(v8 + 16));
    v9 = simple_read_from_buffer(a2, a3, a4, *(_QWORD *)(v8 + 16), *(_QWORD *)v8);
  }
LABEL_5:
  mutex_unlock(v8 + 32);
  return v9;
}
