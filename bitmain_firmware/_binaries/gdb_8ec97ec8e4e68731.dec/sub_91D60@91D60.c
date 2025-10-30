int __fastcall sub_91D60(_DWORD *a1)
{
  _DWORD *v2; // r2
  __int64 v3; // r0

  switch ( *a1 )
  {
    case 1:
      v2 = (_DWORD *)a1[1];
      if ( v2 )
        return *v2 == 0;
      return 1;
    case 0:
      return 1;
    case 2:
      return a1[4] == 0;
  }
  v3 = sub_94700("common/btrace-common.c", 112, "Unkown branch trace format.");
  return sub_91DC8(v3, HIDWORD(v3));
}
