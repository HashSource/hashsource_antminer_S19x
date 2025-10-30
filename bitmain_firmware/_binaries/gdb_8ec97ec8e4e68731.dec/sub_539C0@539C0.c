int __fastcall sub_539C0(char *a1, int a2, int a3, int a4)
{
  int result; // r0
  int v6; // r3

  result = sub_52DB8(a1, a2, a4, (int **)&dword_474744);
  *(_DWORD *)(result + 20) = a3;
  if ( a3 )
    LOWORD(v6) = 11328;
  else
    *(_DWORD *)(result + 16) = 0;
  if ( a3 )
  {
    HIWORD(v6) = 5;
    *(_DWORD *)(result + 16) = v6;
  }
  return result;
}
