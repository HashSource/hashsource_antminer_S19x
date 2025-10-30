int __fastcall sub_23603C(int a1, int a2)
{
  __int64 v2; // r6
  int v3; // r4
  int v5; // t1

  v2 = *(_QWORD *)(a1 + 12);
  if ( (_DWORD)v2 == HIDWORD(v2) )
    return 0;
  v3 = *(_DWORD *)v2;
  if ( a2 != *(_DWORD *)v2 )
  {
    LODWORD(v2) = v2 + 4;
    do
    {
      if ( (*(int (__fastcall **)(int, int))(a2 + 36))(a2, v3) || (*(int (__fastcall **)(int, int))(v3 + 36))(v3, a2) )
        break;
      if ( HIDWORD(v2) == (_DWORD)v2 )
        return 0;
      v5 = *(_DWORD *)v2;
      LODWORD(v2) = v2 + 4;
      v3 = v5;
    }
    while ( v5 != a2 );
  }
  return 1;
}
