int __fastcall sub_126F04(int result)
{
  bool v1; // cf
  __int64 v2; // [sp+0h] [bp-Ch] BYREF

  if ( result )
  {
    if ( sub_126AF4((int)&v2, (unsigned int *)result) )
    {
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
