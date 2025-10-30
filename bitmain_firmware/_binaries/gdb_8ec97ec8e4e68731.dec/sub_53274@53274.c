int __fastcall sub_53274(char *a1, int a2, int a3, int a4, int **a5)
{
  int result; // r0
  int v7; // r3

  result = sub_52DB8(a1, a2, a4, a5);
  *(_DWORD *)(result + 20) = a3;
  if ( a3 )
    LOWORD(v7) = 11328;
  else
    *(_DWORD *)(result + 16) = 0;
  if ( a3 )
  {
    HIWORD(v7) = 5;
    *(_DWORD *)(result + 16) = v7;
  }
  return result;
}
