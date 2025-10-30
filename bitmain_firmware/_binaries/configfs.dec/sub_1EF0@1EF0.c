__int64 __fastcall sub_1EF0(__int64 a1)
{
  __int64 result; // x0
  __int64 v2; // x20
  __int64 i; // x19

  *(_DWORD *)(a1 + 64) &= ~0x100u;
  v2 = a1 + 24;
  result = *(_QWORD *)(a1 + 24);
  for ( i = result - 8; v2 != result; i = result - 8 )
  {
    while ( (*(_DWORD *)(i + 64) & 0x80) == 0 )
    {
      result = *(_QWORD *)(i + 8);
      i = result - 8;
      if ( v2 == result )
        return result;
    }
    sub_1EF0(*(_QWORD *)(*(_QWORD *)(i + 72) + 144LL));
    result = *(_QWORD *)(i + 8);
  }
  return result;
}
