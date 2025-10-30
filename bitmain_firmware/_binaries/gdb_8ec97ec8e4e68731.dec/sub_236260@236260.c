int __fastcall sub_236260(int a1, char *a2)
{
  __int64 v3; // r4
  int v4; // r0
  int v5; // r0

  v3 = *(_QWORD *)((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_48A4B4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
    return 0;
  while ( 1 )
  {
    if ( *(_DWORD *)v3 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)v3 + 88);
      if ( v4 )
      {
        v5 = v4 + 4;
        if ( *(_DWORD *)(v3 + 4) )
        {
          if ( !sub_33CAA0(v5, a2) )
            break;
        }
      }
    }
    LODWORD(v3) = v3 + 8;
    if ( HIDWORD(v3) == (_DWORD)v3 )
      return 0;
  }
  return *(_DWORD *)(v3 + 4);
}
