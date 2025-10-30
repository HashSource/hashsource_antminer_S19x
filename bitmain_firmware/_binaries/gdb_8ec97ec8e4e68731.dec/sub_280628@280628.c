int __fastcall sub_280628(int *a1)
{
  int v1; // r1
  int v3; // r5
  bool v5; // zf
  int v6; // r1
  _DWORD *v7; // r6
  int *v8; // r7
  int v9; // r0
  int v10; // r0
  int v11; // r5
  _DWORD *v12; // r6
  int *v13; // r7
  _BOOL4 v14; // r5
  int v15; // r3
  int v16; // r0
  int v17; // r4

  v1 = *a1;
  if ( *a1 == 2 )
  {
    v11 = a1[8];
    LOWORD(v12) = (unsigned __int16)&dword_4900D8;
    if ( strchr(" l|hwW^0bBFT`", v11) )
    {
      v13 = &dword_4900D4;
      HIWORD(v12) = (unsigned int)&dword_4900D8 >> 16;
    }
    else
    {
      HIWORD(v12) = (unsigned int)&dword_4900D8 >> 16;
      LOWORD(v13) = (unsigned __int16)&dword_4900D4;
      if ( a1[5] <= *v12 )
      {
        HIWORD(v13) = (unsigned int)&dword_4900D4 >> 16;
        if ( *v13 < dword_4900DC )
          ++*v13;
      }
      else
      {
        HIWORD(v13) = (unsigned int)&dword_4900D4 >> 16;
      }
    }
    if ( (v11 & 0xFFFFFF00) != 0 || ((*_ctype_b_loc())[v11] & 0x200) == 0 )
      v14 = v11 == 87;
    else
      v14 = (*_ctype_toupper_loc())[v11] == 87;
    if ( v14 )
    {
      v15 = a1[5];
      if ( v15 > *v12 )
        *v12 = v15;
    }
    v3 = dword_48AB98;
    if ( dword_48AB98 )
    {
      if ( dword_48AB10[0] && *(_BYTE *)dword_48AB10[0] )
        sub_2926F8();
      sub_294F5C(*v12, *v13);
      if ( dword_48AB10[0] )
      {
        v3 = *(unsigned __int8 *)dword_48AB10[0];
        if ( *(_BYTE *)dword_48AB10[0] )
        {
          v3 = 0;
          v16 = sub_294F3C(dword_48AB10[0]);
          sub_292748(v16);
        }
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      sub_2926F8();
      sub_291D70(*v12, *v13);
      v17 = a1[7];
      if ( (v17 & 0xFFFFFF00) != 0 || ((*_ctype_b_loc())[v17] & 0x100) == 0 )
        dword_48AB9C = 1;
      dword_48ABA0 = v17;
      dword_46DF08 = dword_46DEDC;
      dword_46DF04 = v17;
      dword_46DF0C = dword_46DEE0;
      off_46DED0 = &dword_46DF10;
    }
  }
  else if ( v1 == 4 )
  {
    LOWORD(v7) = (unsigned __int16)&dword_4900D8;
    if ( strchr(" l|h^0%bBFT`", a1[8]) )
    {
      v8 = &dword_4900D4;
      HIWORD(v7) = (unsigned int)&dword_4900D8 >> 16;
    }
    else
    {
      HIWORD(v7) = (unsigned int)&dword_4900D8 >> 16;
      LOWORD(v8) = (unsigned __int16)&dword_4900D4;
      if ( a1[5] <= *v7 )
      {
        HIWORD(v8) = (unsigned int)&dword_4900D4 >> 16;
        if ( *v8 < dword_4900DC )
          ++*v8;
      }
      else
      {
        HIWORD(v8) = (unsigned int)&dword_4900D4 >> 16;
      }
    }
    sub_2926F8();
    v3 = 0;
    v9 = sub_291D70(*v7, *v8);
    v10 = sub_292748(v9);
    sub_2924E0(v10);
    *v7 = a1[5];
  }
  else if ( v1 == 1 )
  {
    v5 = strchr(" l|h^0bBFT`", a1[8]) == 0;
    v6 = dword_4900D4;
    if ( v5 && a1[5] <= dword_4900D8 && dword_4900D4 < dword_4900DC )
      v6 = ++dword_4900D4;
    sub_291D70(dword_4900D8, v6);
    v3 = 0;
  }
  else
  {
    v3 = 1;
    sub_291534("vidomove_dispatch: unknown operator %d", v1);
  }
  dword_48AAA0 &= ~0x100000u;
  return v3;
}
