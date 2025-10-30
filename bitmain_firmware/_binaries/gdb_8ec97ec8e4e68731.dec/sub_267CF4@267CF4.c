int __fastcall sub_267CF4(int result, int a2, _BYTE *a3, int a4, int a5)
{
  int v5; // r6
  _BYTE *v7; // r4
  _BYTE *v8; // r1
  bool v9; // zf
  _BYTE *v10; // r5
  _BYTE *v11; // r4
  int v12; // t1
  _BYTE *v13; // r3
  _BYTE *v14; // r5
  int v15; // t1

  v5 = result;
  v7 = &a3[a4 - 1];
  if ( a5 )
  {
    if ( a3 < v7 && !a3[a4 - 1] )
    {
      v13 = v7 - 1;
      do
      {
        v9 = a3 == v13;
        v7 = v13--;
      }
      while ( !v9 && !*v7 );
    }
    if ( a3 <= v7 )
    {
      v14 = a3 - 1;
      do
      {
        v15 = (unsigned __int8)*v7--;
        result = (*((int (__fastcall **)(int, int, int, int))off_46D5A4[0] + 14))(v15, a2, v5, 39);
      }
      while ( v7 != v14 );
    }
  }
  else
  {
    if ( a3 >= v7 || *a3 )
    {
      v10 = a3;
    }
    else
    {
      v8 = a3 + 1;
      do
      {
        v9 = v7 == v8;
        v10 = v8++;
        if ( v9 )
          break;
        result = (unsigned __int8)*v10;
      }
      while ( !*v10 );
    }
    v11 = &a3[a4];
    if ( v10 < &a3[a4] )
    {
      do
      {
        v12 = (unsigned __int8)*v10++;
        result = (*((int (__fastcall **)(int, int, int, int))off_46D5A4[0] + 14))(v12, a2, v5, 39);
      }
      while ( v10 != v11 );
    }
  }
  return result;
}
