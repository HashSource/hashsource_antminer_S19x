int __fastcall sub_52AAC(_BYTE *a1, int a2)
{
  int v2; // r5
  _BYTE *v3; // r4
  int v5; // r7
  _BYTE *v6; // r0
  int v7; // r3
  int result; // r0

  v3 = a1;
  if ( !a1 )
    v2 = 0;
  v5 = dword_47476C;
  if ( a1 )
  {
    v2 = 0;
LABEL_5:
    if ( *v3 )
    {
      while ( 1 )
      {
        v6 = (_BYTE *)sub_9360C(v3);
        v3 = v6;
        if ( *v6 != 45 )
          break;
        v7 = (unsigned __int8)v6[1];
        if ( v7 == 118 )
        {
          if ( !isspace((unsigned __int8)v6[2]) )
            break;
          dword_47476C = 1;
          v3 += 3;
          goto LABEL_5;
        }
        if ( v7 == 115 )
        {
          if ( isspace((unsigned __int8)v6[2]) )
          {
            v3 += 3;
            v2 = 1;
            if ( *v3 )
              continue;
          }
        }
        break;
      }
    }
    v3 = (_BYTE *)sub_9360C(v3);
  }
  result = ((int (__fastcall *)(_BYTE *, int, int))loc_528F4)(v3, a2, v2);
  dword_47476C = v5;
  return result;
}
