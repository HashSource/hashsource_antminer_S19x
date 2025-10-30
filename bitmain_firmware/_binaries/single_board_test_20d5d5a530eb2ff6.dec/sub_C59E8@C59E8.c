bool __fastcall sub_C59E8(int a1, int *a2)
{
  _DWORD *v2; // r3
  int v5; // r0
  int v6; // r7
  _BOOL4 v7; // r4
  int (__fastcall *v8)(int, int *); // r3
  int (__fastcall *v9)(int, int *); // r3
  int v10; // r0
  int v11; // r0

  v2 = *(_DWORD **)(a1 + 12);
  if ( v2 )
  {
    if ( *v2 )
    {
      v5 = sub_C6244(*(_DWORD *)(a1 + 12));
      v6 = v5;
      if ( v5 )
      {
        v7 = sub_B85B0(v5);
        if ( !v7 )
        {
          v8 = *(int (__fastcall **)(int, int *))(**(_DWORD **)(a1 + 12) + 172);
          if ( !v8 || v8(a1, a2) )
          {
            v9 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 24);
            if ( !v9 || v9(a1, a2) )
            {
              if ( !a2 )
              {
LABEL_13:
                sub_B87C8(*(int **)(a1 + 20));
                *(_DWORD *)(a1 + 20) = a2;
                return v7;
              }
              v10 = sub_B8A2C((int)a2);
              a2 = (int *)v10;
              if ( v10 )
              {
                sub_B87B8(v10, 4);
                v11 = sub_133578(v6);
                if ( sub_B89D8((int)a2, v11 + 2) )
                {
                  v7 = 1;
                  goto LABEL_13;
                }
                sub_B87C8(a2);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
