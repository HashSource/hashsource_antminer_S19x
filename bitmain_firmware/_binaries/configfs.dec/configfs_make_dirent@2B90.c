unsigned __int64 __fastcall configfs_make_dirent(__int64 a1, __int64 a2, __int64 a3, __int16 a4, int a5)
{
  unsigned __int64 result; // x0
  unsigned int v13; // w1

  result = sub_11C8(a1, a3, a5);
  if ( result <= 0xFFFFFFFFFFFFF000LL )
  {
    *(_WORD *)(result + 68) = a4;
    *(_QWORD *)(result + 72) = a2;
    if ( a2 )
    {
      if ( result )
      {
        if ( !*(_DWORD *)result )
          __break(0x800u);
        __asm { PRFM            #0x11, [X0] }
        do
          v13 = __ldxr((unsigned int *)result);
        while ( __stxr(v13 + 1, (unsigned int *)result) );
      }
      *(_QWORD *)(a2 + 144) = result;
      return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
