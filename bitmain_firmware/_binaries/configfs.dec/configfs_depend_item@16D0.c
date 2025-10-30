unsigned __int64 __fastcall configfs_depend_item(__int64 a1, __int64 a2)
{
  __int64 v2; // x30
  unsigned __int64 result; // x0
  unsigned __int64 v6; // x20
  __int64 v7; // x2
  __int64 v8; // x2
  __int64 v9; // t1
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int v12; // w19
  __int64 v13; // x0

  result = configfs_pin_fs(v2);
  v6 = result;
  if ( result > 0xFFFFFFFFFFFFF000LL )
    return (unsigned int)result;
  down_write(*(_QWORD *)(result + 48) + 176LL);
  v7 = *(_QWORD *)(v6 + 144);
  v9 = *(_QWORD *)(v7 + 24);
  v8 = v7 + 24;
  v10 = v9 - 8;
  if ( v8 == v9 )
    goto LABEL_6;
  while ( (*(_DWORD *)(v10 + 64) & 2) == 0 || a1 != *(_QWORD *)(v10 + 56) )
  {
    v11 = *(_QWORD *)(v10 + 8);
    v10 = v11 - 8;
    if ( v8 == v11 )
      goto LABEL_6;
  }
  if ( !v10 )
LABEL_6:
    v12 = -2;
  else
    v12 = sub_15B0(*(_QWORD *)(v10 + 72), a2);
  v13 = up_write(*(_QWORD *)(v6 + 48) + 176LL);
  configfs_release_fs(v13);
  return v12;
}
