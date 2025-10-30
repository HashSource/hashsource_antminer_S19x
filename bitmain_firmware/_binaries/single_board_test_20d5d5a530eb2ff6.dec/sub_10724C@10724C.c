int __fastcall sub_10724C(int a1, int a2)
{
  _DWORD *v2; // r5
  int v4; // r8
  int v5; // r9
  int v6; // r0
  int v7; // r7
  _BYTE v9[64]; // [sp+8h] [bp-40h] BYREF

  v2 = *(_DWORD **)(a1 + 20);
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24);
  v5 = sub_D8D8C(a2);
  v6 = sub_D8C78(v5);
  if ( v2[4] )
  {
    v7 = v6;
    if ( v6 < 0 )
    {
      sub_D0048(53, 114, 102, (int)"crypto/sm2/sm2_pmeth.c", 279);
      return 0;
    }
    else if ( sub_10794C(v9, v5, v2[2], v2[3], v4) )
    {
      return sub_D16D8(a2, (int)v9, v7);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_D0048(53, 114, 112, (int)"crypto/sm2/sm2_pmeth.c", 274);
    return 0;
  }
}
