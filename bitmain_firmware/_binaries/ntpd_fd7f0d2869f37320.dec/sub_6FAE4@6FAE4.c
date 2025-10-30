int __fastcall sub_6FAE4(int *a1, int a2, unsigned __int8 *a3, int *a4)
{
  _BYTE *v5; // r4
  unsigned int v6; // r5
  unsigned int v7; // r0
  int v8; // r3
  unsigned int v9; // r2
  int *v11; // r0

  if ( a1 && (v5 = (_BYTE *)*a1) != 0 && (v6 = a2 - (_DWORD)v5, a2 - (int)v5 > 0) )
  {
    v7 = sub_6C654(*a1, a2 - (_DWORD)v5, a3, a4);
    v8 = v7;
    if ( (int)v7 > 0 )
    {
      if ( v6 > v7 )
        v9 = v7;
      else
        v9 = 0;
      v5 += v9;
      if ( v6 <= v7 )
        v8 = v9;
    }
    *v5 = 0;
    *a1 = (int)v5;
  }
  else
  {
    v11 = _errno_location();
    v8 = -1;
    *v11 = 22;
  }
  return v8;
}
