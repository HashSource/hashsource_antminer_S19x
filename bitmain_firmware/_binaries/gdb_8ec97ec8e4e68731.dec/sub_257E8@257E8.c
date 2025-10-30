int __fastcall sub_257E8(int a1, int a2)
{
  int v4; // r6
  unsigned int v6; // r5
  unsigned int v7; // r5
  signed int v8; // r7
  char *v9; // r8
  int v10; // r9
  signed int v11; // r5
  char *v12; // r0
  __int16 v13; // r0
  char *v14; // r7
  int i; // r5
  char *v16; // r11
  __int16 v17; // r0
  int v18; // r8
  int v19; // r10
  __int16 v20; // r0
  bool v21; // cc
  unsigned int v22; // [sp+0h] [bp-Ch] BYREF
  unsigned int v23; // [sp+4h] [bp-8h] BYREF

  v4 = ((int (*)(void))loc_165C28)();
  if ( *(_DWORD *)(sub_163E78(a1) + 56)
    && sub_2484C(a1, a2)
    && ((int (__fastcall *)(int, unsigned int *))loc_21A28)(a2, &v22) )
  {
    a2 = ((int (__fastcall *)(int, int))loc_169FA0)(a1, a2);
    if ( sub_C37B8(a2, 0, &v23, 0) )
    {
      v6 = v22;
      if ( v23 > v22 )
      {
        v6 = v23;
        v22 = v23;
      }
    }
    else
    {
      v6 = v22;
    }
    v7 = a2 - v6;
    if ( v7 > 0xE )
    {
      v8 = 14;
      v7 = 14;
    }
    else
    {
      if ( !v7 )
        return a2;
      v8 = v7;
    }
    v9 = (char *)sub_93028(v7);
    v10 = sub_2302E8(a2 - v7, v9, v8);
    if ( !v10 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = &v9[v11];
        v11 += 2;
        v13 = sub_15C250(v12, 2, v4);
        if ( (v13 & 0xFF00) == 0xBF00 && (v13 & 0xF) != 0 )
          break;
        if ( v11 >= v8 )
        {
          free(v9);
          return a2;
        }
      }
      if ( a2 - v22 <= 0x20 )
      {
        v14 = (char *)sub_1B5C0(v9, a2, v8, a2 - v22);
        if ( !v14 )
          return a2;
      }
      else
      {
        v14 = (char *)sub_1B5C0(v9, a2, v8, 32);
        if ( !v14 )
          return a2;
        for ( i = 0; i != 28; i += 2 )
        {
          v16 = &v14[i];
          v17 = sub_15C250(&v14[i], 2, v4);
          if ( sub_1829C(v17) == 2 )
          {
            v18 = 32;
            goto LABEL_22;
          }
        }
        v14 = (char *)sub_1B5C0(v14, a2, 0x20u, a2 - v22);
        if ( !v14 )
          return a2;
      }
      v18 = a2 - v22;
      if ( (int)(a2 - v22) <= 0 )
      {
        free(v14);
      }
      else
      {
        i = 0;
        v16 = v14;
LABEL_22:
        v19 = -1;
        do
        {
          --v10;
          v20 = sub_15C250(v16, 2, v4);
          if ( (v20 & 0xFF00) == 0xBF00 && (v20 & 0xF) != 0 )
          {
            v19 = i;
            v10 = 4;
            if ( (v20 & 1) == 0 )
            {
              v10 = 3;
              if ( (v20 & 2) == 0 )
              {
                if ( (v20 & 4) != 0 )
                  v10 = 2;
                else
                  v10 = 1;
              }
            }
          }
          i += sub_1829C(v20);
          v16 = &v14[i];
        }
        while ( i < v18 );
        free(v14);
        v21 = v19 <= -1;
        if ( v19 != -1 )
          v21 = v10 <= 0;
        if ( !v21 )
          return a2 - v18 + v19;
      }
    }
  }
  return a2;
}
