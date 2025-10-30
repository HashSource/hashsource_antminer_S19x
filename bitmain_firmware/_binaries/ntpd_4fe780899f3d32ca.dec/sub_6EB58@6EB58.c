int __fastcall sub_6EB58(int *a1, int a2, unsigned __int8 *a3, int *a4)
{
  _BYTE *v5; // r4
  unsigned int v6; // r5
  signed int v7; // r0
  int v8; // r3
  int *v10; // r0

  if ( a1 && (v5 = (_BYTE *)*a1) != 0 && (v6 = a2 - (_DWORD)v5, a2 - (int)v5 > 0) )
  {
    v7 = sub_6B6F8(*a1, a2 - (_DWORD)v5, a3, a4);
    v8 = v7;
    if ( v7 > 0 )
    {
      if ( v7 >= v6 )
        v8 = 0;
      else
        v5 += v7;
    }
    *v5 = 0;
    *a1 = (int)v5;
  }
  else
  {
    v10 = _errno_location();
    v8 = -1;
    *v10 = 22;
  }
  return v8;
}
