void __fastcall sub_91CF8(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  __int64 v4; // r0

  if ( *a1 == 1 )
  {
    v3 = (void *)a1[1];
    if ( v3 )
      free(v3);
    a1[1] = 0;
  }
  else if ( *a1 )
  {
    if ( *a1 == 2 )
    {
      v2 = (void *)a1[3];
      if ( v2 )
        free(v2);
    }
    else
    {
      v4 = sub_94700("common/btrace-common.c", 92, "Unkown branch trace format.");
      sub_91D60(v4, HIDWORD(v4));
    }
  }
}
