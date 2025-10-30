int __fastcall sub_1385B0(_DWORD *a1, int a2)
{
  int result; // r0
  int *v4; // r4
  int v5; // r5

  result = sub_138ED0(a2);
  v4 = (int *)result;
  if ( result )
  {
    v5 = *(_DWORD *)result;
    if ( *(_DWORD *)result || (v5 = sub_B2068(), (*v4 = v5) != 0) )
    {
      *(_DWORD *)(v5 + 12) = *(_DWORD *)(v5 + 12) & 0xFFFFFFCF | 0x10;
      *a1 = v5 + 8;
      return 1;
    }
    else
    {
      sub_D0048(46, 155, 65, (int)"crypto/cms/cms_io.c", 31);
      return 0;
    }
  }
  return result;
}
