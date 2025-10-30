int __fastcall sub_25B0DC(int *a1, int a2)
{
  int v4; // r0
  _BOOL4 v5; // r3
  int v6; // r5
  int result; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r1

  v4 = sub_31DB08(a2);
  v5 = v4 == 0;
  if ( !a2 )
    v5 = 0;
  if ( v5 )
  {
    v8 = (_DWORD *)sub_258C1C(0);
    return *v8 - *v9;
  }
  else
  {
    v6 = v4;
    result = sub_31DAD0(*a1);
    *a1 = v6;
  }
  return result;
}
