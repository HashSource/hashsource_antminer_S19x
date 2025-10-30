int __fastcall sub_2A87D8(int a1, unsigned int a2, int a3)
{
  int v3; // r3
  unsigned int v5; // r12
  unsigned __int64 v6; // r2
  int (__fastcall **v7)(int, int, unsigned int, _DWORD); // r3
  int result; // r0
  int v9; // r1

  v3 = *(_DWORD *)(a3 + 136);
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = *(_QWORD *)(a3 + 24);
    if ( v6 + a2 > v5 )
    {
      if ( v6 >= v5 )
        return 0;
      a2 = v5 - v6;
    }
  }
  v7 = *(int (__fastcall ***)(int, int, unsigned int, _DWORD))(a3 + 12);
  if ( !v7 )
  {
    v9 = 0;
    result = 0;
    goto LABEL_7;
  }
  result = (*v7)(a3, a1, a2, 0);
  if ( result != -1 )
  {
    v9 = result;
LABEL_7:
    *(_QWORD *)(a3 + 24) += (unsigned int)v9;
  }
  return result;
}
