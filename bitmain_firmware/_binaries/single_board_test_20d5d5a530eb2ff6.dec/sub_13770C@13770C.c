int __fastcall sub_13770C(int a1, int *a2)
{
  int v2; // r5
  int result; // r0

  v2 = *a2;
  if ( a1 == 1 )
  {
    result = sub_D7A5C();
    *(_DWORD *)(v2 + 24) = result;
    if ( result )
    {
      sub_D8DFC(result, 1);
      *(_DWORD *)(v2 + 20) = 0;
      return 1;
    }
  }
  else
  {
    if ( a1 == 3 )
    {
      sub_DB4BC(*(_DWORD *)(v2 + 20));
      sub_D7A6C(*(int **)(v2 + 24));
    }
    return 1;
  }
  return result;
}
