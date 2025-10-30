int __fastcall sub_19E14(unsigned int *a1, int a2, char *nptr, unsigned __int8 a4, int a5)
{
  unsigned int *v6; // r6
  int v7; // r2
  int v8; // r1
  int v9; // r0
  int v10; // r7
  int v11; // r4
  int v12; // r8
  unsigned __int8 v14; // [sp+18h] [bp+18h]

  if ( dword_733CC )
  {
    v6 = a1;
    if ( nptr && *nptr )
    {
      v9 = strtol(nptr, 0, 10);
      v10 = v9;
      if ( v9 < 0 || v9 >= dword_733CC )
      {
        v14 = a4;
        v7 = v9;
        a1 = v6;
        v8 = 26;
      }
      else
      {
        v11 = *(_DWORD *)(dword_744C8 + 4 * v9);
        if ( *(_DWORD *)(v11 + 100) == 1 )
        {
          v14 = a4;
          v7 = v9;
          a1 = v6;
          v8 = 49;
        }
        else
        {
          v12 = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v11 + 100) = 1;
          if ( v12 < *(_DWORD *)(sub_31FF4(v9) + 4) )
            sub_34178(v11);
          v14 = a4;
          v7 = v10;
          a1 = v6;
          v8 = 47;
        }
      }
    }
    else
    {
      v14 = a4;
      v7 = 0;
      v8 = 25;
    }
  }
  else
  {
    v14 = a4;
    v7 = 0;
    v8 = 8;
  }
  return sub_18AD4(a1, v8, v7, 0, v14);
}
