int __fastcall sub_210B18(int result, _DWORD *a2, int *a3)
{
  int v4; // r6
  int v5; // r7
  int v7; // r8
  unsigned int v8; // r1
  int v9; // lr
  int v10; // r2
  unsigned int v11; // r8
  _DWORD *v12; // r3
  unsigned int v13; // r1

  if ( (a2[5] & 1) != 0 )
  {
    v4 = *a3;
    v5 = result;
    v7 = a2[16];
    result = sub_162FDC(result, (int)a2);
    if ( !*(_DWORD *)(v4 + 4 * result) )
    {
      v8 = a3[1];
      v9 = (1 << v7) - 1;
      v10 = -(1 << v7);
      while ( 1 )
      {
        v11 = (v9 + v8) & v10;
        if ( !*(_DWORD *)(v5 + 100) )
          break;
        v12 = *(_DWORD **)(v5 + 100);
        while ( 1 )
        {
          if ( a2 != v12 && (v12[5] & 1) != 0 )
          {
            v13 = *(_DWORD *)(v4 + 4 * v12[2]);
            if ( v13 )
            {
              if ( v13 < v11 + a2[9] )
              {
                v8 = v13 + v12[9];
                if ( v8 > v11 )
                  break;
              }
            }
          }
          v12 = (_DWORD *)v12[3];
          if ( !v12 )
            goto LABEL_12;
        }
      }
LABEL_12:
      result = sub_162FDC(v5, (int)a2);
      *(_DWORD *)(v4 + 4 * result) = v11;
      a3[1] = a2[9] + v11;
    }
  }
  return result;
}
