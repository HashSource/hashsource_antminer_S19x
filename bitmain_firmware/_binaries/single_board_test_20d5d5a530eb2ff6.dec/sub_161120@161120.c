int __fastcall sub_161120(int a1, int a2, int a3, int a4)
{
  int v7; // r8
  int v8; // r5
  int *v9; // r6
  bool v10; // cc
  unsigned int v11; // r1

  if ( sub_B550C(a3, "%*sIssuer: ", a4, &byte_1A4198) <= 0 || sub_129FD4(a3, *(int **)a2, 0, 8520479) <= 0 )
    return 0;
  v7 = 2 * a4;
  v8 = 0;
  while ( 1 )
  {
    v10 = v8 < sub_10C010(*(_DWORD *)(a2 + 4));
    v11 = v8++;
    if ( !v10 )
      break;
    v9 = (int *)sub_10C01C(*(_DWORD **)(a2 + 4), v11);
    if ( sub_B550C(a3, (unsigned __int8 *)"\n%*s", v7, &byte_1A4198) <= 0
      || sub_127D14(a3, *v9) <= 0
      || sub_B6C30(a3, (int)" - ") <= 0
      || sub_16FDE0(a3, v9[1]) <= 0 )
    {
      return 0;
    }
  }
  return 1;
}
