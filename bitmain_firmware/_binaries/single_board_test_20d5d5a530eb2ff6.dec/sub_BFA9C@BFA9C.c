int __fastcall sub_BFA9C(unsigned __int8 *a1, int a2, int a3)
{
  int result; // r0
  unsigned __int8 *v5; // r1
  int v7; // r3
  size_t v8; // r4
  size_t n; // [sp+0h] [bp-8h]
  char v10; // [sp+4h] [bp-4h]

  n = 0;
  v10 = 1;
  result = (*(int (**)(void))(*(_DWORD *)(a3 + 64) + 8))();
  if ( result > 0 )
  {
    v5 = a1;
    do
    {
      if ( *v5++ )
        v7 = 0;
      else
        v7 = v10 & 1;
      v10 = v7;
      n += v7;
    }
    while ( &a1[result] != v5 );
    v8 = result - n;
    memmove(a1, &a1[n], result - n);
    memset(&a1[v8], 0, n);
    return v8;
  }
  return result;
}
