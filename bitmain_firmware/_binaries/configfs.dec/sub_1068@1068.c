__int64 __fastcall sub_1068(__int64 a1)
{
  __int64 result; // x0
  __int64 v2; // x20
  __int64 i; // x19

  *(_DWORD *)(a1 + 64) &= ~0x400u;
  v2 = a1 + 24;
  result = *(_QWORD *)(a1 + 24);
  for ( i = result - 8; v2 != result; i = result - 8 )
  {
    while ( (*(_DWORD *)(i + 64) & 0x400) == 0 )
    {
      result = *(_QWORD *)(i + 8);
      i = result - 8;
      if ( v2 == result )
        return result;
    }
    sub_1068(i);
    result = *(_QWORD *)(i + 8);
  }
  return result;
}
