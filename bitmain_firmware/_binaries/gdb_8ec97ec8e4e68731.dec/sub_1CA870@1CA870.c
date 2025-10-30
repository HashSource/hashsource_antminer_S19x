_DWORD *__fastcall sub_1CA870(_DWORD *a1, int a2, char *a3, char *a4)
{
  int v4; // r12
  int (__fastcall **v7)(int); // r3
  int v9; // r0
  int *v10; // r4
  int *v11; // r6
  int v12; // t1
  int v13; // r1
  bool v14; // zf
  int v15; // r1
  int v17; // [sp+4h] [bp-4h]

  v4 = *(_DWORD *)(a2 + 132);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v4 )
  {
    v7 = *(int (__fastcall ***)(int))(v4 + 36);
    if ( v7 )
    {
      v9 = (*v7)(a2);
      v10 = *(int **)v9;
      v11 = *(int **)(v9 + 4);
      if ( *(int **)v9 != v11 )
      {
        do
        {
          v12 = *v10++;
          v17 = v12;
          if ( !sub_33CAA0(v12 + 28, a3) && !sub_33CAA0(v17 + 4, a4) )
          {
            v13 = a1[1];
            if ( v13 == a1[2] )
            {
              sub_1CC0EC(a1);
            }
            else
            {
              v14 = v13 == 0;
              v15 = v13 + 4;
              if ( !v14 )
                *(_DWORD *)(v15 - 4) = v17;
              a1[1] = v15;
            }
          }
        }
        while ( v11 != v10 );
      }
    }
  }
  return a1;
}
