_DWORD *__fastcall sub_162CF4(int a1)
{
  _DWORD *result; // r0
  int *v2; // r2
  void *v3; // r5
  int v4; // r2
  void *v5; // [sp+4h] [bp-8h] BYREF

  result = (_DWORD *)sub_F05AC(a1, 167);
  if ( result )
  {
    if ( *result == 16 )
    {
      v2 = (int *)result[1];
      v3 = (void *)v2[2];
      v4 = *v2;
      v5 = v3;
      return (_DWORD *)sub_B0A18(0, &v5, v4, (int)X509_ALGORS_it);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
