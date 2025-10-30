__int64 __fastcall configfs_get_name(__int64 a1)
{
  __int64 v2; // x0
  int v3; // w1

  if ( !a1 || (v2 = *(_QWORD *)(a1 + 56)) == 0 )
  {
    __break(0x800u);
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 64);
  if ( (v3 & 0x22) != 0 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 72) + 40LL);
  if ( (v3 & 0xC) == 0 )
    return 0;
  return *(_QWORD *)v2;
}
