__int64 __fastcall sub_12B8(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x19
  __int64 v6; // x22
  _QWORD *v7; // x0
  _QWORD *v8; // x2
  __int64 v9; // x3

  v3 = a2;
  if ( a3 )
  {
    if ( a3 != 1 )
      return -22;
    v3 = a2 + a1[19];
  }
  if ( (v3 & 0x8000000000000000LL) == 0 )
  {
    if ( v3 == a1[19] )
      return v3;
    a1[19] = v3;
    if ( v3 <= 1 )
      return v3;
    v4 = *(_QWORD *)(a1[3] + 144LL);
    v5 = v3 - 2;
    v6 = a1[32] + 8LL;
    raw_spin_lock(&configfs_dirent_lock);
    list_del(v6);
    v7 = *(_QWORD **)(v4 + 24);
    if ( v3 != 2 )
    {
      v8 = (_QWORD *)(v4 + 24);
      if ( v7 == (_QWORD *)(v4 + 24) )
        goto LABEL_14;
      while ( 1 )
      {
        v9 = v7[6];
        v7 = (_QWORD *)*v7;
        if ( v9 )
        {
          if ( !--v5 )
            break;
        }
        if ( v8 == v7 )
          goto LABEL_14;
      }
    }
    v8 = v7;
LABEL_14:
    _list_add(v6, v8[1], v8);
    raw_spin_unlock(&configfs_dirent_lock);
    return v3;
  }
  return -22;
}
