int __fastcall sub_568A0(double *a1)
{
  int v2; // r3
  double v3; // d16
  int result; // r0
  int v5; // r2
  int *v6; // r3

  v2 = *(_DWORD *)a1;
  v3 = a1[*(_DWORD *)a1 + 3];
  result = *((_DWORD *)a1 + 1) + 1;
  *((_DWORD *)a1 + 1) = result;
  v5 = v2 - 1;
  if ( result == v2 )
  {
    result = 0;
    *((_DWORD *)a1 + 1) = 0;
  }
  if ( v5 > 0 )
  {
    v6 = (int *)&a1[v2 + 4];
    do
    {
      --v5;
      *((_QWORD *)v6 - 1) = *((_QWORD *)v6 - 2);
      v6 -= 2;
    }
    while ( v5 );
  }
  a1[4] = (double)(int)v3;
  return result;
}
