int *__fastcall sub_130888(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v9; // r4
  int v10; // r0
  int v11; // r5
  int v13; // r0
  int (__fastcall *v14)(int, int, int, int, int, int); // r5
  int v15; // r7
  _DWORD *v16; // r2
  int v17; // r0
  int v18; // r0
  int v19; // [sp+Ch] [bp-8h] BYREF

  v9 = a1;
  if ( !a1 )
  {
    v9 = sub_1307B8(0, 0, a3);
    if ( !v9 )
      goto LABEL_30;
  }
  if ( *v9 || (v18 = sub_B822C(), (*v9 = v18) != 0) )
  {
    if ( v9[1] || (v13 = sub_B822C(), (v9[1] = v13) != 0) )
    {
      if ( a2 )
      {
        sub_B895C(v9[2]);
        v10 = sub_B8A2C(a2);
        v9[2] = v10;
      }
      else
      {
        v10 = v9[2];
      }
      if ( v10 )
      {
        if ( a5 )
          v9[8] = a5;
        if ( a6 )
          v9[7] = a6;
        v11 = 33;
        while ( sub_1365E8(*v9, v9[3]) )
        {
          if ( sub_132AB4(v9[1], *v9, v9[3], a4, &v19) )
          {
            v14 = (int (__fastcall *)(int, int, int, int, int, int))v9[8];
            if ( v14 && (v15 = v9[7]) != 0 )
            {
              if ( !v14(*v9, *v9, v9[2], v9[3], a4, v15) )
                break;
            }
            else if ( !sub_132330(*v9, *v9, v9[2], v9[3], a4) )
            {
              break;
            }
            v16 = (_DWORD *)v9[7];
            if ( v16 && (!sub_B943C((int *)v9[1], v9[1], v16, a4) || !sub_B943C((int *)*v9, *v9, (_DWORD *)v9[7], a4)) )
              break;
            return v9;
          }
          if ( !v19 )
            break;
          if ( !--v11 )
          {
            sub_D0048(3, 128, 113, (int)"crypto/bn/bn_blind.c", 285);
            break;
          }
        }
      }
    }
  }
  if ( !a1 )
  {
LABEL_30:
    v17 = (int)v9;
    v9 = 0;
    sub_130600(v17);
  }
  return v9;
}
