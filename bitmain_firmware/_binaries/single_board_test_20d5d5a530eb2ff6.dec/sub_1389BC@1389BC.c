int __fastcall sub_1389BC(int a1, int *a2)
{
  int v3; // r4
  int *v4; // r0
  int v5; // r5

  v3 = *(_DWORD *)(a1 + 4);
  sub_DB4BC(*(_DWORD *)(v3 + 20));
  *(_DWORD *)(v3 + 20) = 0;
  if ( !a2 )
    return 1;
  v4 = sub_DB4F8(a2, 0);
  v5 = (int)v4;
  if ( v4 && sub_DAC94(v4) > 0 )
  {
    *(_DWORD *)(v3 + 20) = v5;
    return 1;
  }
  else
  {
    sub_DB4BC(v5);
    return 0;
  }
}
