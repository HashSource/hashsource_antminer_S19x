int __fastcall sub_324138(int a1, int (__fastcall *a2)(int, int), int a3)
{
  unsigned int *v5; // r4
  unsigned int *v6; // r5
  unsigned int v7; // r3
  int result; // r0

  v5 = *(unsigned int **)(a1 + 12);
  v6 = &v5[*(_DWORD *)(a1 + 16)];
  do
  {
    v7 = *v5;
    result = (int)v5++;
    if ( v7 > 1 )
    {
      result = a2(result, a3);
      if ( !result )
        break;
    }
  }
  while ( v6 > v5 );
  return result;
}
