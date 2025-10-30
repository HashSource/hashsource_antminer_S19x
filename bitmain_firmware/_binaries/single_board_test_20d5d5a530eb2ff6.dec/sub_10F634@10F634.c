int __fastcall sub_10F634(_DWORD *a1, int *a2)
{
  signed int v4; // r0
  signed int v5; // r4
  int v7; // r8
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r3
  size_t v11; // r0

  v4 = sub_10BC4C((int)a1, (int)a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( (unsigned int)(*a2 - 1) > 1 )
      return sub_10C01C(a1, v4);
    v7 = sub_10C010((int)a1);
    if ( v7 > v5 )
    {
      do
      {
        v8 = (_DWORD *)sub_10C01C(a1, v5);
        v9 = v8;
        v10 = *v8;
        if ( *v8 != *a2 )
          return 0;
        if ( v10 == 1 )
        {
          v11 = sub_10E760(v8[1], a2[1]);
        }
        else
        {
          if ( v10 != 2 )
            goto LABEL_11;
          v11 = sub_10E768(v8[1], a2[1]);
        }
        if ( v11 )
          return 0;
        v10 = *a2;
LABEL_11:
        if ( v10 == 1 )
        {
          if ( !sub_10E66C(v9[1], a2[1]) )
            return (int)v9;
        }
        else if ( v10 != 2 || !sub_10E650(v9[1], a2[1]) )
        {
          return (int)v9;
        }
        ++v5;
      }
      while ( v7 != v5 );
    }
  }
  return 0;
}
