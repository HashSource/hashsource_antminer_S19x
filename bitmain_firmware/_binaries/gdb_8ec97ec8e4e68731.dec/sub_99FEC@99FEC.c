_DWORD *__fastcall sub_99FEC(_DWORD *a1, _BYTE *a2)
{
  int v2; // r6
  int v4; // r4
  _BYTE *v5; // r7
  int v6; // t1
  int v7; // t1
  unsigned int v9; // r8
  int v10; // r3
  unsigned int v11; // r2
  int v12; // r3
  _DWORD *v13; // [sp+Ch] [bp-8h]

  v2 = 0;
  *a1 = a1 + 2;
  a1[1] = 0;
  *((_BYTE *)a1 + 8) = 0;
  v4 = (unsigned __int8)*a2;
  v13 = a1 + 2;
  if ( *a2 )
  {
    v5 = a2;
    while ( 1 )
    {
      switch ( v4 )
      {
        case '"':
          if ( (unsigned int)(0x7FFFFFFF - v2) <= 5 )
            sub_33D184("basic_string::append");
          sub_33C320(a1, "&quot;", 6);
          goto LABEL_6;
        case '&':
          if ( (unsigned int)(0x7FFFFFFF - v2) <= 4 )
            sub_33D184("basic_string::append");
          sub_33C320(a1, "&amp;", 5);
          goto LABEL_6;
        case '\'':
          if ( (unsigned int)(0x7FFFFFFF - v2) <= 5 )
            sub_33D184("basic_string::append");
          sub_33C320(a1, "&apos;", 6);
          goto LABEL_6;
        case '<':
          if ( (unsigned int)(0x7FFFFFFF - v2) <= 3 )
            sub_33D184("basic_string::append");
          sub_33C320(a1, "&lt;", 4);
          v7 = (unsigned __int8)*++v5;
          v4 = v7;
          if ( !v7 )
            return a1;
          goto LABEL_7;
        case '>':
          if ( (unsigned int)(0x7FFFFFFF - v2) <= 3 )
            sub_33D184("basic_string::append");
          sub_33C320(a1, "&gt;", 4);
          goto LABEL_6;
        default:
          v9 = v2 + 1;
          v10 = *a1;
          if ( v13 == (_DWORD *)*a1 )
            v11 = 15;
          else
            v11 = a1[2];
          if ( v9 > v11 )
          {
            sub_33B4F8(a1, v2, 0);
            v10 = *a1;
          }
          *(_BYTE *)(v10 + v2) = v4;
          v12 = *a1;
          a1[1] = v9;
          *(_BYTE *)(v12 + v9) = 0;
LABEL_6:
          v6 = (unsigned __int8)*++v5;
          v4 = v6;
          if ( !v6 )
            return a1;
LABEL_7:
          v2 = a1[1];
          break;
      }
    }
  }
  return a1;
}
