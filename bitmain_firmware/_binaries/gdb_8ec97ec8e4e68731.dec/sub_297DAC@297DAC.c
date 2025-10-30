int __fastcall sub_297DAC(int result, int a2, int a3)
{
  int v3; // r12
  int v4; // r3
  int v5; // r5
  int v6; // r3
  int v7; // r4
  int v8; // r7
  int v9; // lr
  int v10; // t1
  bool v11; // zf

  if ( result >= -2 )
  {
    v3 = dword_490158;
    v4 = dword_490158 <= result;
    if ( !dword_490158 )
      v4 = 1;
    if ( !v4 )
    {
      v5 = dword_48BB28;
      if ( dword_48BB28 )
      {
        if ( result < 0 )
        {
          if ( dword_490158 > 0 )
          {
            v7 = dword_48BB28 - 4;
            v8 = -1;
            do
            {
              v10 = *(_DWORD *)(v7 + 4);
              v7 += 4;
              v9 = v10;
              if ( v10 )
              {
                if ( *(_DWORD *)(v9 + 8) == a2 )
                {
                  v8 = v4;
                  if ( result == -1 )
                    *(_DWORD *)(v9 + 8) = a3;
                }
              }
              ++v4;
            }
            while ( v3 != v4 );
            v11 = v8 == 0;
            if ( v8 >= 0 )
              v11 = result == -2;
            if ( v11 )
            {
              v6 = *(_DWORD *)(v5 + 4 * v8);
LABEL_9:
              *(_DWORD *)(v6 + 8) = a3;
            }
          }
        }
        else
        {
          v6 = *(_DWORD *)(dword_48BB28 + 4 * result);
          if ( v6 )
          {
            result = *(_DWORD *)(v6 + 8);
            if ( result == a2 )
              goto LABEL_9;
          }
        }
      }
    }
  }
  return result;
}
