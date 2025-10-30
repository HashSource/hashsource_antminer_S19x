int __fastcall sub_185BE0(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = (_DWORD *)dword_48A4D4;
  v7[0] = result;
  v7[1] = a2;
  v7[2] = a3;
  if ( dword_48A4D4 )
  {
    do
    {
      while ( 1 )
      {
        if ( v3[11] != 2 )
        {
          result = sub_9904C(v3 + 2, v7);
          if ( result )
          {
            if ( v3[11] == 1 && !v3[9] )
            {
              if ( sub_23E2CC(v3) )
                sub_23E388(v3);
              v4 = v3[2];
              v5 = v3[3];
              v6 = v3[4];
              if ( !v3[42] )
              {
                v3[39] = 0;
                v3[42] = 1;
                v3[38] = 1;
              }
              result = ((int (__fastcall *)(int, int, int))loc_190BA4)(v4, v5, v6);
              if ( !dword_487934 )
                break;
            }
          }
        }
        v3 = (_DWORD *)v3[1];
        if ( !v3 )
          return result;
      }
      if ( !dword_48793C )
        v3[10] = 1;
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
  }
  return result;
}
