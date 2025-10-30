int __fastcall sub_296630(int a1, int a2, int a3, int a4)
{
  int v5; // r10
  int v7; // r4
  int v8; // r6
  int v9; // r11
  int v10; // r0
  bool v11; // zf
  int v12; // r3
  int v13; // r0
  int v14; // r3
  int v15; // r3
  int v17; // r0
  int v18; // r0

  if ( !a2 )
    return -1;
  v5 = a1;
  v7 = dword_4900D8;
  if ( a2 < 0 )
  {
    if ( a1 )
    {
      if ( dword_4900D8 <= 0 )
      {
LABEL_23:
        sub_2945C8();
        return -1;
      }
      v8 = 1;
      v9 = -1;
LABEL_6:
      while ( 2 )
      {
        if ( a2 <= 0 || dword_4900DC > v7 )
        {
          if ( v9 == 1 )
            v7 = sub_29B4D0(dword_48AAD4);
          else
            v7 = sub_29B610(dword_48AAD4, v7, 0);
          while ( !sub_29B3E4(dword_48AAD4, v7, dword_4900DC, a3, a4) )
          {
            if ( v8 )
            {
              v13 = sub_29B610(dword_48AAD4, v7, 0);
              v14 = v7 - v13;
              v11 = v7 == v13;
              v7 = v13;
              if ( !v11 )
                v14 = 1;
              if ( !v14 )
                goto LABEL_18;
            }
            else
            {
              v10 = sub_29B4D0(dword_48AAD4);
              v12 = v7 - v10;
              v11 = v7 == v10;
              v7 = v10;
              if ( !v11 )
                v12 = 1;
              if ( !v12 )
                goto LABEL_18;
            }
          }
          --v5;
          if ( !v8 )
          {
            if ( a2 == 1 )
              v17 = sub_29B610(dword_48AAD4, v7, 0);
            else
              v17 = v7;
            dword_4900D8 = v17;
            if ( v5 )
              continue;
            return 0;
          }
          if ( a2 == -1 )
            v18 = sub_29B4D0(dword_48AAD4);
          else
            v18 = v7;
          dword_4900D8 = v18;
LABEL_18:
          if ( !v5 )
            return 0;
          if ( v7 <= 0 )
            v15 = v8;
          else
            v15 = 0;
          if ( !v15 )
            continue;
        }
        goto LABEL_23;
      }
    }
  }
  else if ( a1 )
  {
    v8 = 0;
    v9 = 1;
    goto LABEL_6;
  }
  return 0;
}
