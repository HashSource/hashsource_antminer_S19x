void __fastcall sub_67FF8(_DWORD *a1)
{
  __int64 v1; // r0

  if ( a1 && *a1 == 3 )
  {
    v1 = sub_67C98((int)a1);
    sub_68E84(v1, HIDWORD(v1));
  }
  else if ( a1 )
  {
    if ( *a1 == 4 )
      sub_67E80();
  }
}
