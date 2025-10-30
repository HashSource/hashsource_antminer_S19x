bool __fastcall sub_160F1C(int a1, int a2, int a3, int a4)
{
  if ( *(_DWORD *)a2
    && (sub_B550C(a3, "%*scrlUrl: ", a4, &byte_1A4198) <= 0
     || !sub_128190(a3, *(int **)a2)
     || sub_B69CC(a3, (int)"\n", 1) <= 0)
    || *(_DWORD *)(a2 + 4)
    && (sub_B550C(a3, "%*scrlNum: ", a4, &byte_1A4198) <= 0
     || sub_12D3A0(a3, *(_DWORD **)(a2 + 4)) <= 0
     || sub_B69CC(a3, (int)"\n", 1) <= 0) )
  {
    return 0;
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    if ( sub_B550C(a3, "%*scrlTime: ", a4, &byte_1A4198) > 0 && sub_12614C(a3, *(_DWORD *)(a2 + 8)) )
      return sub_B69CC(a3, (int)"\n", 1) > 0;
    return 0;
  }
  return 1;
}
