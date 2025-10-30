int __fastcall sub_91408(int a1, int *a2)
{
  int v2; // r2
  int v3; // r4
  int v4; // r2
  int v5; // r1
  int v7; // r3

  if ( a2[1] == 1 )
  {
    v2 = *a2 + 1;
    v3 = *(unsigned __int8 *)*a2;
    a2[1] = 0;
    *a2 = v2;
    if ( (unsigned int)(v3 - 1) > 3 )
    {
      v7 = 1310;
    }
    else
    {
      v4 = *(unsigned __int8 *)(a1 + 1472);
      if ( v4 == v3 )
      {
        v5 = *(_DWORD *)(a1 + 1140);
        *(_BYTE *)(v5 + 492) = v4;
        return 1;
      }
      v7 = 1323;
    }
    sub_95494(a1, 47, 581, 232, "ssl/statem/extensions_clnt.c", v7);
    return 0;
  }
  else
  {
    sub_95494(a1, 50, 581, 110, "ssl/statem/extensions_clnt.c", 1302);
    return 0;
  }
}
