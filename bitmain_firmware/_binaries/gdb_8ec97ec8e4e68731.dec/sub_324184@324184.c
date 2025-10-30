int __fastcall sub_324184(_DWORD *a1, int (__fastcall *a2)(int, int), int a3)
{
  unsigned int v6; // r2
  unsigned int v7; // r3
  unsigned int *v8; // r4
  unsigned int *v9; // r5
  unsigned int v10; // r3
  int result; // r0

  v6 = a1[4];
  v7 = 8 * (a1[5] - a1[6]);
  if ( v7 < 0x20 )
    v7 = 32;
  if ( v6 > v7 )
  {
    sub_323784((int)a1);
    v6 = a1[4];
  }
  v8 = (unsigned int *)a1[3];
  v9 = &v8[v6];
  do
  {
    v10 = *v8;
    result = (int)v8++;
    if ( v10 > 1 )
    {
      result = a2(result, a3);
      if ( !result )
        break;
    }
  }
  while ( v9 > v8 );
  return result;
}
