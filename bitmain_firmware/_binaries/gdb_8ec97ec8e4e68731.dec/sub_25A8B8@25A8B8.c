int __fastcall sub_25A8B8(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // r8
  int v5; // r4
  int v6; // r5
  unsigned __int8 *v7; // r7
  unsigned __int8 *i; // r6
  int v9; // t1
  int v10; // t1
  unsigned int v11; // r0
  unsigned int v12; // r11
  int v14; // r2
  int v15; // [sp+4h] [bp-10h]
  int v16; // [sp+8h] [bp-Ch]
  int v17; // [sp+Ch] [bp-8h]

  v4 = 1;
  v15 = *a1;
  v17 = 2;
  v16 = *a2;
  while ( 1 )
  {
    v5 = v15;
    v6 = v16;
    v7 = a2;
    for ( i = a1; ; ++i )
    {
      if ( !v5 )
        goto LABEL_15;
      if ( !v6 )
        return 1;
      while ( isspace(v5) )
      {
        v9 = *++i;
        v5 = v9;
      }
      if ( isspace(v6) )
      {
        do
        {
          v10 = *++v7;
          v6 = v10;
        }
        while ( isspace(v10) );
      }
      if ( v4 == 1 )
      {
        v12 = (unsigned __int8)tolower(v5);
        v11 = (unsigned __int8)tolower(v6);
      }
      else
      {
        v11 = v6;
        v12 = v5;
      }
      if ( v12 != v11 )
        break;
      if ( !v5 )
        goto LABEL_15;
      v5 = i[1];
      v6 = *++v7;
    }
    if ( v5 )
    {
      if ( v5 == 40 )
      {
        if ( v6 )
          return -1;
        return 1;
      }
      v14 = v6 == 40;
      if ( !v6 )
        v14 = 1;
      if ( v12 > v11 )
        v14 |= 1u;
      if ( v14 )
        return 1;
      if ( v12 < v11 )
        return -1;
    }
    else
    {
LABEL_15:
      if ( v6 )
        return -1;
    }
    v4 = 0;
    if ( v17 == 1 )
      return 0;
    v17 = 1;
  }
}
