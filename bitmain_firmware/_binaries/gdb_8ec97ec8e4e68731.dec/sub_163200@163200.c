int *__fastcall sub_163200(int a1, int *a2)
{
  int v2; // r5
  int *v3; // r4
  int *result; // r0
  int **v5; // r3
  int **v6; // r2
  int *v7; // [sp+4h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 164);
  v3 = a2;
  result = sub_1627C4(a2);
  v5 = *(int ***)(v2 + 48);
  v6 = *(int ***)(v2 + 52);
  v7 = v3;
  if ( v5 == v6 )
  {
    result = (int *)sub_1632B0(v2 + 44, v5, &v7);
    v3 = v7;
  }
  else
  {
    if ( v5 )
    {
      *v5 = v3;
      *(_DWORD *)(v2 + 48) = v5 + 1;
      return result;
    }
    *(_DWORD *)(v2 + 48) = 4;
  }
  if ( v3 )
    return (int *)((int (__fastcall *)(int *))loc_1625A8)(v3);
  return result;
}
