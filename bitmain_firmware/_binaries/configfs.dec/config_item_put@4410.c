__int64 __fastcall config_item_put(__int64 *a1)
{
  __int64 v1; // x30
  __int64 result; // x0
  unsigned int v10; // w0
  __int64 v11; // x21
  __int64 v12; // x22
  __int64 v13; // x20

  result = v1;
  if ( a1 )
  {
    _X2 = (unsigned int *)a1 + 7;
    __asm { PRFM            #0x11, [X2] }
    do
    {
      v10 = __ldxr(_X2);
      result = v10 - 1;
    }
    while ( __stlxr(result, _X2) );
    __dmb(0xBu);
    if ( !(_DWORD)result )
    {
      v11 = a1[6];
      v12 = a1[7];
      v13 = a1[8];
      if ( (word_6F4A & 4) != 0 )
        _dynamic_pr_debug(off_6F28, "config_item %s: cleaning up\n", (const char *)*a1);
      result = *a1;
      if ( (__int64 *)*a1 != a1 + 1 )
        result = kfree(result);
      *a1 = 0;
      if ( v13 )
      {
        result = *(_QWORD *)(v13 + 8);
        if ( result )
        {
          if ( *(_QWORD *)result )
            result = (*(__int64 (__fastcall **)(__int64 *))result)(a1);
        }
      }
      if ( v12 )
        result = config_item_put(v12);
      if ( v11 )
        return config_item_put(v11);
    }
  }
  return result;
}
