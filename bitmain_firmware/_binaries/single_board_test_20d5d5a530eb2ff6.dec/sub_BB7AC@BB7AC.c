int __fastcall sub_BB7AC(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int (__fastcall *v5)(_DWORD *); // r5
  int result; // r0
  int v8; // r1

  v5 = *(int (__fastcall **)(_DWORD *))(*a1 + 20);
  if ( !v5 )
    return -1;
  result = v5(a1);
  if ( result > 0 )
  {
    v8 = a1[4];
    a1[3] += a5;
    a1[4] = result + v8;
  }
  return result;
}
