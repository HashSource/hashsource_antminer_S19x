__int64 __fastcall sub_23E0(__int64 a1)
{
  __int64 v1; // x30
  __int64 result; // x0
  __int64 v4; // x23
  _QWORD *v5; // x23
  _QWORD *v6; // t1
  _QWORD *v7; // x20
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x0

  result = v1;
  if ( a1 )
  {
    lockref_get(a1 + 88);
    v4 = *(_QWORD *)(a1 + 144);
    v6 = *(_QWORD **)(v4 + 24);
    v5 = (_QWORD *)(v4 + 24);
    v7 = v6 - 1;
    v8 = *v6 - 8LL;
    if ( v5 != v6 )
    {
      do
      {
        while ( !v7[7] || (v7[8] & 0x80) == 0 )
        {
          v7 = (_QWORD *)v8;
          v9 = v8 + 8;
          v8 = *(_QWORD *)(v8 + 8) - 8LL;
          if ( (_QWORD *)v9 == v5 )
            return dput(a1);
        }
        v10 = v7[9];
        down_write(*(_QWORD *)(v10 + 48) + 176LL);
        v11 = v7[7];
        v7 = (_QWORD *)v8;
        sub_24E8(v11);
        *(_DWORD *)(*(_QWORD *)(v10 + 48) + 12LL) |= 0x10u;
        raw_spin_lock(v10 + 88);
        *(_DWORD *)v10 |= 0x100u;
        raw_spin_unlock(v10 + 88);
        up_write(*(_QWORD *)(v10 + 48) + 176LL);
        d_delete(v10);
        dput(v10);
        v12 = v8 + 8;
        v8 = *(_QWORD *)(v8 + 8) - 8LL;
      }
      while ( (_QWORD *)v12 != v5 );
    }
    return dput(a1);
  }
  return result;
}
