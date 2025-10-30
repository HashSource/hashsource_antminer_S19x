int *__fastcall sub_CF020(int *result, int *a2)
{
  int v2; // lr
  int v3; // r4
  int v4; // r5
  _BOOL4 v5; // r6
  int v6; // r3
  int v7; // r12
  int v8; // r2
  __int64 v9; // r0

  v2 = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  if ( a2 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = a2[2];
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 12);
        switch ( v7 )
        {
          case 0:
          case 33:
            v6 = 0;
            v8 = 0;
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 20:
            if ( *((_BYTE *)a2 + 25) )
              goto LABEL_17;
            goto LABEL_6;
          case 6:
          case 7:
          case 8:
          case 9:
          case 26:
            v6 = *((unsigned __int8 *)a2 + 25);
            if ( !*((_BYTE *)a2 + 25) )
              goto LABEL_7;
LABEL_17:
            if ( !*((_BYTE *)a2 + 24) )
              goto LABEL_19;
            v6 = 6;
            v8 = 6;
            break;
          case 10:
          case 12:
          case 13:
            if ( !*((_BYTE *)a2 + 25) )
              goto LABEL_6;
            v6 = 2;
            v5 = v7 != 13;
            v8 = 2;
            v4 = 1;
            break;
          case 11:
          case 14:
            if ( !*((_BYTE *)a2 + 25) )
              goto LABEL_6;
            v6 = 3;
            v8 = 3;
            v5 = v7 == 11;
            v4 = 1;
            break;
          case 15:
            if ( !*((_BYTE *)a2 + 25) )
              goto LABEL_6;
            v6 = 4;
            v8 = 4;
            break;
          case 16:
            if ( !*((_BYTE *)a2 + 25) )
              goto LABEL_6;
            v6 = 7;
            v8 = 7;
            break;
          case 17:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 31:
          case 32:
            goto LABEL_6;
          case 18:
            v6 = 5;
            v2 = 1;
            v8 = 5;
            v3 = 1;
            break;
          case 19:
            v6 = 5;
            v2 = 1;
            v8 = 5;
            v3 = 2;
            break;
          case 27:
          case 28:
          case 29:
            if ( v4 )
              result[2] = v5;
            result = (int *)sub_94700((int)"breakpoint.c", 5707, "bpstat_what: tracepoint encountered");
            goto LABEL_38;
          case 30:
            if ( !*((_BYTE *)a2 + 25) )
            {
LABEL_6:
              v6 = 1;
              goto LABEL_7;
            }
LABEL_19:
            v6 = 5;
            v8 = 5;
            break;
          default:
LABEL_38:
            if ( v4 )
              result[2] = v5;
            v9 = sub_94700((int)"breakpoint.c", 5728, "bpstat_what: unhandled bptype %d", v7);
            return (int *)sub_CF260(v9, HIDWORD(v9));
        }
      }
      else
      {
LABEL_7:
        v8 = v6;
      }
      a2 = (int *)*a2;
      if ( v6 <= *result )
        v8 = *result;
      *result = v8;
    }
    while ( a2 );
    if ( v4 )
      result[2] = v5;
    if ( v2 )
      result[1] = v3;
  }
  return result;
}
