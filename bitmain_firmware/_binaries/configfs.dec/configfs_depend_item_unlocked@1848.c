__int64 __fastcall configfs_depend_item_unlocked(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x19
  __int64 v5; // x20
  __int64 v6; // x3
  __int64 v7; // x2
  __int64 v8; // x2
  __int64 v9; // t1
  __int64 v10; // x0
  __int64 v11; // x1
  unsigned int v12; // w20

  if ( (unsigned int)configfs_is_root(a2) )
    return (unsigned int)-22;
  v4 = *(_QWORD **)(a2 + 56);
  v5 = a2;
  if ( (unsigned int)configfs_is_root(v4) )
  {
    if ( a2 != a1 )
      goto LABEL_4;
  }
  else
  {
    v5 = v4[12];
    while ( !(unsigned int)configfs_is_root(v4) )
      v4 = (_QWORD *)v4[7];
    if ( v5 != a1 )
    {
LABEL_4:
      down_write(*(_QWORD *)(v4[9] + 48LL) + 176LL);
      v6 = v4[9];
      v7 = *(_QWORD *)(v6 + 144);
      v9 = *(_QWORD *)(v7 + 24);
      v8 = v7 + 24;
      v10 = v9 - 8;
      if ( v8 == v9 )
        goto LABEL_8;
      while ( (*(_DWORD *)(v10 + 64) & 2) == 0 || v5 != *(_QWORD *)(v10 + 56) )
      {
        v11 = *(_QWORD *)(v10 + 8);
        v10 = v11 - 8;
        if ( v8 == v11 )
          goto LABEL_8;
      }
      if ( !v10 )
      {
LABEL_8:
        v12 = -2;
      }
      else
      {
        v12 = sub_15B0(*(_QWORD *)(v10 + 72), a2);
        v6 = v4[9];
      }
      up_write(*(_QWORD *)(v6 + 48) + 176LL);
      return v12;
    }
  }
  return (unsigned int)sub_15B0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 72) + 144LL) + 72LL), a2);
}
