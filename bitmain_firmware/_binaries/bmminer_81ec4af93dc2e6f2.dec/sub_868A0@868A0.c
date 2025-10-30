int __fastcall sub_868A0(int a1, int a2, int a3)
{
  unsigned __int8 v7; // [sp+1Bh] [bp-11h] BYREF
  int j; // [sp+1Ch] [bp-10h]
  int i; // [sp+20h] [bp-Ch]
  int v10; // [sp+24h] [bp-8h]

  if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 312) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 312) == 1 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 296) )
      {
        v10 = sub_8B584(a3, "\n             0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F    0123456789ABCDEF", 80);
        if ( !v10 )
        {
          for ( i = 0; ; ++i )
          {
            v10 = sub_8B584(a3, "\n", 1);
            if ( v10 )
              break;
            v10 = sub_8AF08(a3, 10, i + 1, (i + 1) >> 31, 10);
            if ( v10 )
              break;
            v10 = sub_8B584(a3, "   ", 3);
            if ( v10 )
              break;
            for ( j = 0; j <= 15; ++j )
            {
              if ( (unsigned int)(16 * i + j) >= *(_DWORD *)(*(_DWORD *)(a2 + 8) + 300) )
              {
                v10 = sub_8B584(a3, "   ", 3);
                if ( v10 )
                  goto LABEL_35;
              }
              else
              {
                v7 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 8) + 296) + 16 * i + j);
                v10 = sub_8B298(a3, v7, 2);
                if ( v10 )
                  goto LABEL_35;
                v10 = sub_8B584(a3, " ", 1);
                if ( v10 )
                  goto LABEL_35;
              }
            }
            v10 = sub_8B584(a3, "  ", 2);
            if ( v10 )
              break;
            for ( j = 0; j <= 15; ++j )
            {
              if ( (unsigned int)(16 * i + j) >= *(_DWORD *)(*(_DWORD *)(a2 + 8) + 300) )
              {
                v10 = sub_8B584(a3, " ", 1);
                if ( v10 )
                  goto LABEL_35;
              }
              else
              {
                v7 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 8) + 296) + 16 * i + j);
                if ( v7 <= 0x1Fu || v7 > 0x7Eu )
                {
                  v10 = sub_8B584(a3, ".", 1);
                  if ( v10 )
                    goto LABEL_35;
                }
                else
                {
                  v10 = sub_8B584(a3, &v7, 1);
                  if ( v10 )
                    goto LABEL_35;
                }
              }
            }
            if ( (unsigned int)(16 * i + j) >= *(_DWORD *)(*(_DWORD *)(a2 + 8) + 300) )
              break;
          }
        }
      }
      else
      {
        v10 = sub_8B584(a3, "buf=(null)", 10);
      }
LABEL_35:
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
        {
          return 0;
        }
        else
        {
          sub_89984(2, "src/spec.c", 339, "write hex msg, buf is full");
          return 1;
        }
      }
      else
      {
        sub_89984(2, "src/spec.c", 336, "write hex msg fail");
        return -1;
      }
    }
    else
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 304) )
  {
    return sub_8A8D4(a3, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 304), *(_DWORD *)(*(_DWORD *)(a2 + 8) + 308));
  }
  else
  {
    return sub_8B584(a3, "format=(null)", 13);
  }
}
