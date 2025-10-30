int __fastcall sub_1272D4(int result)
{
  bool v1; // cf
  __int64 v2; // [sp+0h] [bp-10h] BYREF

  if ( result )
  {
    if ( (*(_DWORD *)(result + 4) & 0xFFFFFEFF) == 0xA && *(int *)result <= 4 )
    {
      if ( !sub_12707C((int)&v2, (unsigned int *)result) )
        return -1;
      result = v2;
      v1 = (unsigned __int64)(v2 + 0x80000000LL) >> 32 != 0;
      if ( (unsigned __int64)(v2 + 0x80000000LL) >> 32 == 1 )
        v1 = 1;
      if ( v1 )
        return -1;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
