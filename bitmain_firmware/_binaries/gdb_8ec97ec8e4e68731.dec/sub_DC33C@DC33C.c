void __fastcall sub_DC33C(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r4
  unsigned int v6; // r1
  int *v7; // r3
  int v8; // r12
  int *v9; // t1
  int *v10; // r0

  v4 = dword_478348;
  if ( dword_478348 )
  {
    do
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v4 + 8);
        if ( *(_DWORD *)(v4 + 72) == a1 )
          break;
        v4 = *(_DWORD *)(v4 + 8);
        if ( !v5 )
          goto LABEL_6;
      }
      ((void (*)(void))loc_DB0B0)();
      v4 = v5;
    }
    while ( v5 );
  }
LABEL_6:
  v6 = dword_478368;
  if ( v6 < v6 + 4 * dword_47836C )
  {
    v7 = *(int **)dword_478368;
    if ( *(_DWORD *)dword_478368 )
    {
      v8 = dword_478368 + 4 * dword_47836C - 4;
      do
      {
        a3 = v7[12];
        if ( a3 == a1 )
        {
          a3 = v7[4];
          v10 = *(int **)(a3 + 28);
          if ( v10 == v7 )
          {
            *(_DWORD *)(a3 + 28) = *v7;
          }
          else
          {
            while ( 1 )
            {
              a3 = *v10;
              if ( !*v10 )
                break;
              if ( (int *)a3 == v7 )
              {
                *v10 = *v7;
                if ( v8 != v6 )
                  goto LABEL_11;
                goto LABEL_19;
              }
              v10 = (int *)*v10;
            }
          }
        }
        if ( v8 == v6 )
          break;
LABEL_11:
        v9 = *(int **)(v6 + 4);
        v6 += 4;
        v7 = v9;
      }
      while ( v9 );
    }
  }
LABEL_19:
  sub_D72EC(0, v6, a3);
}
