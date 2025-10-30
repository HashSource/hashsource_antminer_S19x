int __fastcall sub_3EAD8(int a1)
{
  int i; // r4
  int v3; // r0
  _DWORD *v4; // r3
  _DWORD *v5; // r0
  int *v6; // r8

  sub_23E8E8();
  for ( i = dword_487918; i; i = *(_DWORD *)(i + 4) )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(i + 12);
      if ( v3 )
      {
        v4 = (_DWORD *)dword_471BF4;
        if ( dword_471BF4 )
        {
          while ( v3 != v4[1] )
          {
            v4 = (_DWORD *)*v4;
            if ( !v4 )
              goto LABEL_10;
          }
          v5 = (_DWORD *)((int (*)(void))loc_23E7D8)();
          if ( v5 )
          {
            if ( !v5[9] )
            {
              v6 = v5 + 2;
              if ( !sub_22EB58(v5[2], v5[3], v5[4]) )
                break;
            }
          }
        }
      }
LABEL_10:
      i = *(_DWORD *)(i + 4);
      if ( !i )
        return (*(int (**)(void))(*(_DWORD *)a1 + 264))();
    }
    sub_3E864(*v6, v6[1], v6[2], 0);
  }
  return (*(int (**)(void))(*(_DWORD *)a1 + 264))();
}
