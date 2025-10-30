int __fastcall sub_71190(int result, unsigned __int8 *a2)
{
  int v2; // r3
  unsigned __int8 *v3; // r4
  int v4; // r6
  unsigned __int8 *v5; // r0
  int v6; // r3
  bool v7; // zf
  unsigned __int8 *v8; // r2
  bool v9; // zf
  int v10; // r3
  bool v11; // zf

  v2 = *a2;
  if ( *a2 )
  {
    v3 = a2;
    v4 = result;
    while ( v2 != 46 )
    {
      if ( v2 != 95 || v3[1] != 95 )
      {
        v5 = v3;
LABEL_7:
        v6 = *v5;
        v7 = v6 == 0;
        if ( *v5 )
          v7 = v6 == 46;
        if ( !v7 )
          goto LABEL_10;
        goto LABEL_28;
      }
      v5 = v3 + 2;
      v6 = *v5;
      v11 = v6 == 0;
      if ( *v5 )
        v11 = v6 == 46;
      if ( !v11 )
      {
LABEL_10:
        v8 = v5;
        do
        {
          v7 = v6 == 95;
          v3 = v8 + 1;
          v6 = v8[1];
          if ( v7 && v6 == 95 )
          {
            v10 = v8 - v5;
            v3 = v8;
            goto LABEL_18;
          }
          v9 = v6 == 46;
          if ( v6 != 46 )
            v9 = v6 == 0;
          ++v8;
        }
        while ( !v9 );
        v10 = v3 - v5;
        goto LABEL_18;
      }
LABEL_28:
      v3 = v5;
      v10 = 0;
LABEL_18:
      result = sub_70948(v4, 81, (int)v5, v10);
      v2 = *v3;
      if ( !*v3 )
        return result;
    }
    v5 = v3 + 1;
    goto LABEL_7;
  }
  return result;
}
