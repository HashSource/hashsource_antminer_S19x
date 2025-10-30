__int64 __fastcall sub_2F40(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x0
  _QWORD *v4; // x19
  unsigned int v5; // w20

  if ( !*a2 )
    *a2 = a2 + 1;
  v3 = d_alloc_name(a1);
  v4 = (_QWORD *)v3;
  if ( !v3 )
    return (unsigned int)-12;
  d_add(v3, 0);
  v5 = sub_2DE8((__int64)a2, v4);
  if ( v5 )
  {
    if ( !v4[6] )
    {
      d_drop(v4);
      dput(v4);
      return v5;
    }
    __break(0x800u);
    return (unsigned int)-12;
  }
  *(_DWORD *)(v4[18] + 64LL) |= 0x80u;
  return 0;
}
