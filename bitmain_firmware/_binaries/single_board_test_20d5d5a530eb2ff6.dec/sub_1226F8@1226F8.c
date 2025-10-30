int __fastcall sub_1226F8(int a1, int *a2)
{
  int v4; // r4

  v4 = sub_122498(0, *(unsigned __int8 **)(a1 + 8));
  if ( v4 )
  {
    *a2 = v4;
    return 1;
  }
  else
  {
    sub_D1240(6, "section:", *(_DWORD *)a1, ",name:", *(_DWORD *)(a1 + 4), ",value:", *(_DWORD *)(a1 + 8));
    return 0;
  }
}
