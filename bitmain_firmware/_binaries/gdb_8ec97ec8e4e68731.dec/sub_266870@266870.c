int __fastcall sub_266870(int a1, int a2, _DWORD *a3)
{
  int v6; // r4
  _DWORD *v7; // r0
  _DWORD *v9; // r0
  __int64 v10; // r0
  int v11; // r0
  int v12; // r0
  const char *v13; // r0

  if ( a1 )
  {
    v6 = sub_26E710(a1);
    if ( v6 )
    {
      if ( !*a3 || (v7 = (_DWORD *)sub_26BC70(a1), sub_266648(v7)) )
      {
        v6 = 0;
        sub_2666C0(a1, a2);
        return v6;
      }
    }
    else
    {
      if ( !sub_26E708(a1) )
      {
        v10 = sub_26BC70(a1);
        if ( **(_BYTE **)(v10 + 24) == 27 )
        {
          v13 = (const char *)((int (__fastcall *)(int, _DWORD))loc_26CCDC)(a1, HIDWORD(v10));
          sub_25A418(a2, "<internal function %s>", v13);
        }
        else
        {
          v11 = sub_26BC70(a1);
          v6 = sub_174544(v11);
          if ( v6 )
          {
            v6 = 0;
            sub_25637C(a2);
          }
          else
          {
            v12 = sub_26BC70(a1);
            if ( sub_1744F0(v12) )
              sub_256370(a2);
            else
              return 1;
          }
        }
        return v6;
      }
      if ( !*a3 || (v9 = (_DWORD *)sub_26BC70(a1), sub_266648(v9)) )
      {
        sub_25A418(a2, "<unavailable>");
        return 0;
      }
    }
    sub_25A418(a2, "...");
    return 0;
  }
  else
  {
    sub_25A418(a2, "<address of value unknown>");
    return 0;
  }
}
