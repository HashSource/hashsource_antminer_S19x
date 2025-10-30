int __fastcall sub_19AA4(unsigned int *a1, int a2, _BYTE *a3, unsigned __int8 a4)
{
  int v6; // r6
  unsigned int *v7; // r5
  int v8; // r1
  bool v9; // zf
  int v10; // r3
  _BOOL4 v12; // r2
  int v13; // r1
  unsigned __int8 v14; // [sp+18h] [bp+18h]

  if ( a3 && *a3 )
  {
    v7 = a1;
    v6 = (unsigned __int8)*a3;
    v8 = LOBYTE((*_ctype_tolower_loc())[v6]);
    v9 = v8 == 116;
    if ( v8 != 116 )
      v9 = v8 == 102;
    *a3 = v8;
    v10 = !v9;
    if ( v9 )
    {
      v14 = a4;
      a1 = v7;
      byte_755D4 = v8 == 116;
      v12 = v8 == 116;
      v13 = 77;
    }
    else
    {
      v10 = 0;
      v14 = a4;
      a1 = v7;
      v12 = 0;
      v13 = 76;
    }
  }
  else
  {
    v10 = 0;
    v14 = a4;
    v12 = 0;
    v13 = 75;
  }
  return sub_18AD4(a1, v13, v12, v10, v14);
}
