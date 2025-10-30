int __fastcall sub_3FD78(unsigned int *a1, int a2, const char *a3, unsigned __int8 a4)
{
  int v7; // r5
  void (*v8)(void); // r3
  unsigned int *v9; // r0
  int v10; // r2
  int v11; // r1
  int v12; // r0
  int v13; // r4
  unsigned __int8 v15; // [sp+18h] [bp+18h]

  v7 = sub_3E2BC();
  if ( v7 )
  {
    if ( a3 && *a3 )
    {
      v12 = strtol(a3, 0, 10);
      v13 = v12;
      if ( (v7 <= v12) | ((unsigned int)v12 >> 31) )
      {
        v15 = a4;
        v10 = v12;
        v8 = 0;
        v9 = a1;
        v11 = 107;
      }
      else if ( sub_3E378(v12) < 0 )
      {
        v15 = a4;
        v8 = 0;
        v10 = v13;
        v9 = a1;
        v11 = 107;
      }
      else
      {
        v8 = *(void (**)(void))(*(_DWORD *)(sub_56518() + 4) + 36);
        if ( v8 )
        {
          v8();
          v15 = a4;
          v8 = 0;
          v10 = v13;
          v9 = a1;
          v11 = 113;
        }
        else
        {
          v15 = a4;
          v10 = v13;
          v9 = a1;
          v11 = 114;
        }
      }
    }
    else
    {
      v8 = 0;
      v15 = a4;
      v9 = a1;
      v10 = 0;
      v11 = 15;
    }
  }
  else
  {
    v15 = a4;
    v9 = a1;
    v8 = 0;
    v10 = 0;
    v11 = 105;
  }
  return sub_3F65C(v9, v11, v10, (int)v8, v15);
}
