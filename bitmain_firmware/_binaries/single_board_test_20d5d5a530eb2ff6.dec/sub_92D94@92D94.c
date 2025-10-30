int __fastcall sub_92D94(int a1, int *a2)
{
  int v2; // r3
  int v3; // r5
  int v4; // r3
  int v5; // r3

  if ( a2[1] == 1 )
  {
    v2 = *a2 + 1;
    v3 = *(unsigned __int8 *)*a2;
    a2[1] = 0;
    *a2 = v2;
    if ( (unsigned int)(v3 - 1) > 3 )
    {
      v5 = 195;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(a1 + 140) )
    {
      v4 = *(_DWORD *)(a1 + 1140);
      if ( *(unsigned __int8 *)(v4 + 492) != v3 )
      {
        v5 = 207;
LABEL_6:
        sub_95494(a1, 47, 571, 232, "ssl/statem/extensions_srvr.c", v5);
        return 0;
      }
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 1140);
    }
    *(_BYTE *)(v4 + 492) = v3;
    return 1;
  }
  else
  {
    sub_95494(a1, 50, 571, 110, "ssl/statem/extensions_srvr.c", 187);
    return 0;
  }
}
