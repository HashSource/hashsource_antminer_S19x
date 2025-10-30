int __fastcall sub_197B4(unsigned int *a1, int a2, const char *a3, unsigned __int8 a4)
{
  unsigned int *v6; // r5
  char *v7; // r0
  char *v8; // r7
  int v9; // r8
  int v10; // r9
  int v11; // r10
  int v12; // r4
  bool v13; // zf
  const char *v15; // r3
  int v16; // r1
  unsigned __int8 v17; // [sp+20h] [bp+20h]

  if ( a3 && *a3 )
  {
    v6 = a1;
    v7 = strchr(a3, 44);
    v8 = v7;
    if ( v7 && (*v7 = 0, v7 != (char *)-1) && (v9 = (unsigned __int8)v7[1], v7[1]) )
    {
      if ( !strcasecmp(a3, "all") )
      {
        v10 = 0;
        v11 = 1;
      }
      else
      {
        v11 = strcasecmp(a3, "bestshare");
        if ( v11 )
        {
          v17 = a4;
          v15 = a3;
          a1 = v6;
          v16 = 95;
          return sub_18AD4(a1, v16, 0, (int)v15, v17);
        }
        v10 = 1;
      }
      v12 = LOBYTE((*_ctype_tolower_loc())[v9]);
      v13 = v12 == 116;
      if ( v12 != 116 )
        v13 = v12 == 102;
      v8[1] = v12;
      if ( v13 )
      {
        if ( v12 == 116 )
          sub_304E0();
        if ( v11 )
          sub_32DA0();
        if ( v10 )
          sub_2D75C();
        v15 = "BestShare";
        if ( v11 )
          v15 = "All";
        v17 = a4;
        a1 = v6;
        if ( v12 == 116 )
          v16 = 96;
        else
          v16 = 97;
      }
      else
      {
        v15 = 0;
        v17 = a4;
        a1 = v6;
        v16 = 76;
      }
    }
    else
    {
      v15 = 0;
      v17 = a4;
      a1 = v6;
      v16 = 75;
    }
  }
  else
  {
    v15 = 0;
    v17 = a4;
    v16 = 94;
  }
  return sub_18AD4(a1, v16, 0, (int)v15, v17);
}
