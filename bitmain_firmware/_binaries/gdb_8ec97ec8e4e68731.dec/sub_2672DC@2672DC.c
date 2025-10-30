int __fastcall sub_2672DC(int result, unsigned int a2, int a3, int a4, unsigned __int8 a5)
{
  int v5; // r5
  unsigned __int8 *v6; // r9
  __int64 v7; // r6
  unsigned __int8 *v8; // r8
  int i; // r4
  unsigned __int8 *v10; // r8
  unsigned __int8 *v11; // r9
  int j; // r4

  HIDWORD(v7) = a4;
  v5 = result;
  v6 = (unsigned __int8 *)a2;
  LODWORD(v7) = a5;
  if ( !a4 )
  {
    v8 = (unsigned __int8 *)(a2 + a3);
    if ( a2 >= a2 + a3 )
      goto LABEL_12;
    while ( 1 )
    {
      for ( i = 0; i != 8; ++i )
      {
        while ( 1 )
        {
          result = 49;
          if ( (*v6 & (128 >> i)) == 0 )
            break;
          HIDWORD(v7) = 1;
          result = sub_25A4FC(49, v5);
LABEL_5:
          if ( ++i == 8 )
            goto LABEL_10;
        }
        if ( !v7 )
        {
          HIDWORD(v7) = a5;
          goto LABEL_5;
        }
        result = sub_25A4FC(48, v5);
      }
LABEL_10:
      if ( ++v6 == v8 )
      {
        LODWORD(v7) = HIDWORD(v7) | a5;
        goto LABEL_12;
      }
    }
  }
  v10 = (unsigned __int8 *)(a2 + a3 - 1);
  if ( !__CFADD__(a2, a3 - 1) )
  {
    v11 = (unsigned __int8 *)(a2 - 1);
    HIDWORD(v7) = 0;
    do
    {
      for ( j = 0; j != 8; ++j )
      {
        while ( 1 )
        {
          result = 49;
          if ( (*v10 & (128 >> j)) == 0 )
            break;
          ++j;
          HIDWORD(v7) = 1;
          result = sub_25A4FC(49, v5);
          if ( j == 8 )
            goto LABEL_23;
        }
        if ( v7 )
          result = sub_25A4FC(48, v5);
        else
          HIDWORD(v7) = a5;
      }
LABEL_23:
      --v10;
    }
    while ( v10 != v11 );
    LODWORD(v7) = HIDWORD(v7) | a5;
  }
LABEL_12:
  if ( !(_DWORD)v7 )
    return sub_25A4FC(48, v5);
  return result;
}
