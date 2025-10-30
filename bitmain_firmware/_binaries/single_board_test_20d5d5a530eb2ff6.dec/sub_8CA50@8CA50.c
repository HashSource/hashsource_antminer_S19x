int __fastcall sub_8CA50(int a1, const void **a2, int *a3, int *a4, int a5, int a6)
{
  char *v6; // r8
  size_t v7; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r8
  int v14; // r9
  bool v15; // zf
  size_t v16; // r4
  size_t i; // r10
  char *v18; // r5
  _DWORD *v19; // r0
  _DWORD *v20; // r4
  char *v21; // r10
  int v22; // r2
  _DWORD *v23; // r0
  _DWORD *v24; // r4
  int v25; // r2
  int v26; // r3
  unsigned __int8 dest; // [sp+1Ch] [bp-8h] BYREF
  char v30[7]; // [sp+1Dh] [bp-7h] BYREF

  v6 = (char *)a2[1];
  if ( a5 )
    v7 = 3;
  else
    v7 = 2;
  if ( v6 )
  {
    v11 = sub_1892EC(v6, v7);
    if ( v12 )
    {
      if ( a6 )
        sub_95494(a1, 50, 519, 151, "ssl/ssl_lib.c", 5466);
      else
        sub_D0048(20, 519, 151, "ssl/ssl_lib.c", 5469);
      return 0;
    }
    else
    {
      v13 = sub_10BFCC(v11);
      v14 = sub_10BFCC(v13);
      v15 = v14 == 0;
      if ( v14 )
        v15 = v13 == 0;
      if ( v15 )
      {
        if ( !a6 )
        {
          v25 = 5480;
          goto LABEL_42;
        }
        v26 = 5478;
LABEL_45:
        sub_95494(a1, 80, 519, 65, "ssl/ssl_lib.c", v26);
LABEL_43:
        sub_10BDB4(v13);
        sub_10BDB4(v14);
        return 0;
      }
      else
      {
        v16 = (size_t)a2[1];
        if ( a5 )
        {
          while ( 1 )
          {
            do
            {
              if ( v7 > v16 )
              {
                if ( !v16 )
                  goto LABEL_24;
                goto LABEL_46;
              }
              v21 = (char *)*a2;
              v16 -= v7;
              memcpy(&dest, *a2, v7);
              v22 = dest;
              *a2 = &v21[v7];
              a2[1] = (const void *)v16;
            }
            while ( v22 );
            v23 = sub_8736C(a1, (int)v30, 1);
            v24 = v23;
            if ( v23 )
            {
              if ( !*v23 )
                goto LABEL_32;
              if ( !sub_10BD3C(v13, v23) )
              {
LABEL_51:
                if ( a6 )
                {
                  v26 = 5500;
                  goto LABEL_45;
                }
                v25 = 5502;
LABEL_42:
                sub_D0048(20, 519, 65, "ssl/ssl_lib.c", v25);
                goto LABEL_43;
              }
              if ( !*v24 )
              {
LABEL_32:
                if ( !sub_10BD3C(v14, v24) )
                  goto LABEL_51;
              }
            }
            v16 = (size_t)a2[1];
          }
        }
        for ( i = v7; i <= v16; v16 = (size_t)a2[1] )
        {
          v18 = (char *)*a2;
          memcpy(&dest, *a2, i);
          a2[1] = (const void *)(v16 - i);
          *a2 = &v18[i];
          v19 = sub_8736C(a1, (int)&dest, 1);
          v20 = v19;
          if ( v19 )
          {
            if ( !*v19 )
              goto LABEL_21;
            if ( !sub_10BD3C(v13, v19) )
              goto LABEL_51;
            if ( !*v20 )
            {
LABEL_21:
              if ( !sub_10BD3C(v14, v20) )
                goto LABEL_51;
            }
          }
        }
        if ( v16 )
        {
LABEL_46:
          if ( a6 )
            sub_95494(a1, 50, 519, 271, "ssl/ssl_lib.c", 5510);
          else
            sub_D0048(20, 519, 271, "ssl/ssl_lib.c", 5512);
          goto LABEL_43;
        }
LABEL_24:
        if ( a3 )
          *a3 = v13;
        else
          sub_10BDB4(v13);
        if ( a4 )
          *a4 = v14;
        else
          sub_10BDB4(v14);
        return 1;
      }
    }
  }
  else
  {
    if ( a6 )
      sub_95494(a1, 47, 519, 183, "ssl/ssl_lib.c", 5457);
    else
      sub_D0048(20, 519, 183, "ssl/ssl_lib.c", 5459);
    return 0;
  }
}
