__int64 __fastcall sub_14F8(__int64 a1, __int64 a2)
{
  __int64 v2; // x30
  __int64 v4; // x20
  __int64 v5; // x20
  __int64 v6; // t1
  __int64 v7; // x19
  __int64 v8; // x0

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 144);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 56) != a2 )
      {
        v6 = *(_QWORD *)(v4 + 24);
        v5 = v4 + 24;
        v7 = v6 - 8;
        if ( v5 == v6 )
          return 4294967294LL;
        while ( (*(_DWORD *)(v7 + 64) & 0x502) != 2 || (unsigned int)sub_14F8(*(_QWORD *)(v7 + 72), a2) )
        {
          v8 = *(_QWORD *)(v7 + 8);
          v7 = v8 - 8;
          if ( v5 == v8 )
            return 4294967294LL;
        }
      }
      return 0;
    }
  }
  __break(0x800u);
  return sub_15B0(v2);
}
