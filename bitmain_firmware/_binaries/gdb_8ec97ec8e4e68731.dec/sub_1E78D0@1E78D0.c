int __fastcall sub_1E78D0(int a1, int a2, int a3, int a4)
{
  if ( !sub_9904C((int *)(a3 + 4), *(int **)a4) )
    return 1;
  *(_DWORD *)(a4 + 4) = a3;
  ((void (__fastcall *)(int, int))loc_1E77D4)(a1, a2);
  return 0;
}
