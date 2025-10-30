__int64 __fastcall sub_1E00(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // t1
  __int64 v5; // x19
  __int64 v6; // x0
  int v7; // w0
  __int64 result; // x0
  __int64 v9; // x19

  *(_DWORD *)(a1 + 64) |= 0x100u;
  if ( a1 + 40 != *(_QWORD *)(a1 + 40) )
    return 4294967280LL;
  v4 = *(_QWORD *)(a1 + 24);
  v3 = a1 + 24;
  v5 = v4 - 8;
  if ( a1 + 24 == v4 )
    return 0;
  while ( 1 )
  {
    if ( !*(_QWORD *)(v5 + 56) )
      goto LABEL_4;
    v7 = *(_DWORD *)(v5 + 64);
    if ( (v7 & 0xC) != 0 )
      goto LABEL_4;
    if ( (v7 & 0x80) == 0 )
      return 4294967257LL;
    if ( (v7 & 0x200) != 0 )
      break;
    result = sub_1E00(*(_QWORD *)(*(_QWORD *)(v5 + 72) + 144LL), a2);
    if ( (_DWORD)result )
      return result;
LABEL_4:
    v6 = *(_QWORD *)(v5 + 8);
    v5 = v6 - 8;
    if ( v3 == v6 )
      return 0;
  }
  if ( !a2 )
    return 4294967285LL;
  v9 = *(_QWORD *)(v5 + 72);
  if ( v9 )
    lockref_get(v9 + 88);
  *a2 = v9;
  return 4294967285LL;
}
