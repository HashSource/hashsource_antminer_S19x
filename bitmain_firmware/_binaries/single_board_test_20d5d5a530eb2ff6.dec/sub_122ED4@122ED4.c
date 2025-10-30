int __fastcall sub_122ED4(_DWORD *a1, char *s)
{
  size_t v4; // r4
  int v5; // r5
  bool v6; // zf
  int v8; // r1
  int v9; // r2
  int v10; // r3
  bool v11; // zf
  _DWORD v12[4]; // [sp+Ch] [bp-20h] BYREF
  int v13; // [sp+1Ch] [bp-10h]
  size_t n; // [sp+20h] [bp-Ch]
  int v15; // [sp+24h] [bp-8h]

  if ( strchr(s, 58) )
  {
    v13 = 0;
    v15 = 0;
    n = -1;
    if ( sub_BBEDC(s, 58, 0, (int (__fastcall *)(const char *, int, int))sub_1217F8, (int)v12) )
    {
      v4 = n;
      if ( n == -1 )
      {
        if ( v13 == 16 )
          goto LABEL_17;
      }
      else
      {
        v5 = v13;
        if ( v13 != 16 && v15 <= 3 )
        {
          if ( v15 == 3 )
          {
            if ( v13 <= 0 )
              goto LABEL_11;
          }
          else if ( v15 == 2 )
          {
            v11 = n == 0;
            if ( n )
              v11 = n == v13;
            if ( v11 )
            {
LABEL_11:
              if ( (n & 0x80000000) == 0 )
              {
                memcpy(a1, v12, n);
                memset((char *)a1 + v4, 0, 16 - v5);
                if ( v4 != v5 )
                  memcpy((char *)a1 + v4 + 16 - v5, (char *)v12 + v4, v5 - v4);
                return 16;
              }
LABEL_17:
              v8 = v12[1];
              v9 = v12[2];
              v10 = v12[3];
              *a1 = v12[0];
              a1[1] = v8;
              a1[2] = v9;
              a1[3] = v10;
              return 16;
            }
          }
          else
          {
            v6 = n == v13;
            if ( n != v13 )
              v6 = n == 0;
            if ( !v6 )
              goto LABEL_11;
          }
        }
      }
    }
    return 0;
  }
  if ( sub_121788(a1, (int)s) )
    return 4;
  else
    return 0;
}
