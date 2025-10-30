int __fastcall sub_139588(int *a1, int a2)
{
  int result; // r0

  result = sub_139500(a1);
  if ( result )
  {
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = a2;
    return 1;
  }
  return result;
}
