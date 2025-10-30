int __fastcall sub_139228(int *a1, int a2)
{
  int result; // r0
  int *v4; // r4
  int v5; // r5

  result = sub_138ED0(a1);
  v4 = (int *)result;
  if ( result )
  {
    if ( a2 )
    {
      j_ASN1_STRING_free(*(_DWORD *)result);
      *v4 = 0;
      return 1;
    }
    else
    {
      v5 = *(_DWORD *)result;
      if ( *(_DWORD *)result || (v5 = sub_B2068(), (*v4 = v5) != 0) )
      {
        *(_DWORD *)(v5 + 12) |= 0x20u;
        return 1;
      }
      else
      {
        sub_D0048(46, 147, 65, (int)"crypto/cms/cms_lib.c", 281);
        return 0;
      }
    }
  }
  return result;
}
