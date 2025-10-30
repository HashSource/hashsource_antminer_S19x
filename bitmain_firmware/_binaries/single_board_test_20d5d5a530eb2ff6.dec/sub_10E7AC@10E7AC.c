int __fastcall sub_10E7AC(int a1)
{
  int result; // r0
  int *v3; // r4
  _DWORD *v4; // r0
  int v5; // r5
  _DWORD v6[5]; // [sp+0h] [bp-14h] BYREF

  result = sub_D14F4();
  v3 = (int *)result;
  if ( result )
  {
    sub_115C40(a1, 0);
    sub_D8DA4((int)v3, 8);
    v4 = sub_D902C();
    if ( sub_D1520(v3, v4, 0)
      && sub_D16D8((int)v3, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4), **(_DWORD **)(a1 + 8))
      && sub_D16E4(v3, (int)v6, 0) )
    {
      v5 = v6[0];
    }
    else
    {
      v5 = 0;
    }
    sub_D1504(v3);
    return v5;
  }
  return result;
}
