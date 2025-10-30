int __fastcall sub_266704(int a1, _DWORD *a2, unsigned int a3, int a4, int a5)
{
  int v8; // r5
  int v9; // r4
  int v11; // r3
  int v12; // r0

  v8 = sub_171258(a2);
  v9 = sub_174544(v8);
  if ( v9 )
  {
    sub_25637C(a1);
    return 0;
  }
  else
  {
    if ( !sub_1744F0(v8) )
    {
      if ( (unsigned int)**(unsigned __int8 **)(v8 + 24) - 2 > 2 )
      {
        if ( ((int (__fastcall *)(int, unsigned int, int))loc_26B3D8)(a5, 8 * a3, 8 * *(_DWORD *)(v8 + 20)) )
        {
          sub_2666C0(a5, a1);
          return v9;
        }
        if ( sub_26BFB8(a5, 8 * *(_DWORD *)(v8 + 20), 8 * a3, (8 * a4) | (a3 >> 29), 8 * *(_DWORD *)(v8 + 20), 0) )
        {
          v11 = **(char **)(v8 + 24);
          v9 = v11 == 18;
          if ( v11 != 18 || (v12 = sub_26DED4(a5)) == 0 || sub_26C094(v12) != 1 )
          {
            sub_25A6BC("<synthetic pointer>", a1);
            return v9;
          }
        }
        else
        {
          v9 = sub_26B3A4(a5, *(_DWORD *)(v8 + 20), a3, a4, *(_DWORD *)(v8 + 20), 0);
          if ( !v9 )
          {
            sub_25A418(a1, "<unavailable>");
            return v9;
          }
        }
      }
      return 1;
    }
    sub_256370(a1);
    return 0;
  }
}
