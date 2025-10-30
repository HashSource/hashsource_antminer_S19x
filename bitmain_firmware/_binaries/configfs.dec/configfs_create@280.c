__int64 __fastcall configfs_create(_QWORD *a1, __int16 a2, void (__fastcall *a3)(__int64))
{
  __int64 result; // x0
  __int64 v7; // x21
  int v8; // w20
  _QWORD *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( !a1 )
    return 4294967294LL;
  result = 4294967279LL;
  if ( !a1[6] )
  {
    v7 = configfs_new_inode(a2, a1[18], a1[16]);
    if ( v7 )
    {
      v8 = a2 & 0xF000;
      v9 = *(_QWORD **)(a1[3] + 48LL);
      v10 = current_time(v9);
      v9[14] = v10;
      v9[15] = v11;
      v9[12] = v10;
      v9[13] = v11;
      a3(v7);
      if ( v8 == 0x4000 || v8 == 40960 )
      {
        d_instantiate(a1, v7);
        lockref_get(a1 + 11);
        return 0;
      }
      else
      {
        d_add(a1, v7);
        return 0;
      }
    }
    else
    {
      return 4294967284LL;
    }
  }
  return result;
}
