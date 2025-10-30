int __fastcall sub_19F34(unsigned int *a1, int a2, char *s, unsigned __int8 a4, int a5)
{
  char *v6; // r3
  unsigned int *v7; // r7
  char *v9; // r9
  int v10; // r0
  int v11; // r2
  int v12; // r1
  int v14; // r5
  int v15; // r0
  int v16; // r4
  unsigned __int8 v17; // [sp+20h] [bp+20h]

  v6 = (char *)dword_733CC;
  if ( dword_733CC )
  {
    v7 = a1;
    if ( s && *s )
    {
      v9 = strchr(s, 44);
      if ( v9 )
      {
        *v9 = 0;
        v10 = strtol(s, 0, 10);
        if ( v10 >= 0 && v10 < dword_733CC )
        {
          v14 = *(_DWORD *)(dword_744C8 + 4 * v10);
          v15 = strtol(v9 + 1, 0, 10);
          v16 = v15;
          if ( v15 < 0 )
          {
            v6 = *(char **)(v14 + 164);
            v11 = v15;
            v17 = a4;
            a1 = v7;
            v12 = 121;
          }
          else
          {
            *(_DWORD *)(v14 + 56) = v15;
            sub_2C6A8();
            v6 = *(char **)(v14 + 164);
            v11 = v16;
            v17 = a4;
            a1 = v7;
            v12 = 122;
          }
        }
        else
        {
          v17 = a4;
          v11 = v10;
          a1 = v7;
          v6 = 0;
          v12 = 26;
        }
      }
      else
      {
        v17 = a4;
        v6 = s;
        v11 = 0;
        a1 = v7;
        v12 = 86;
      }
    }
    else
    {
      v6 = 0;
      v17 = a4;
      v11 = 0;
      v12 = 25;
    }
  }
  else
  {
    v17 = a4;
    v11 = 0;
    v12 = 8;
  }
  return sub_18AD4(a1, v12, v11, (int)v6, v17);
}
