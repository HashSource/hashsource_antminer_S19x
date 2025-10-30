int __fastcall sub_10AE80(char *a1, char *s)
{
  unsigned int v2; // r3
  const char *v3; // r4
  bool v5; // cc
  unsigned int v6; // t1
  unsigned int v7; // r2
  bool v8; // cc
  signed int v9; // r0
  int v10; // r6
  int v11; // r8
  char *v12; // r1
  int v13; // r3
  char *v15; // r1
  int v16; // r4
  int v17; // [sp+8h] [bp-Ch] BYREF
  _DWORD v18[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = (unsigned __int8)*s;
  v3 = s;
  v17 = 0;
  v18[0] = 0;
  v5 = v2 > 0x20;
  if ( v2 != 32 )
    v5 = v2 - 9 > 1;
  if ( !v5 )
  {
    do
    {
      v6 = *(unsigned __int8 *)++v3;
      v7 = v6 - 9;
      v8 = v6 > 0x20;
      if ( v6 != 32 )
        v8 = v7 > 1;
    }
    while ( !v8 );
  }
  v9 = strlen(v3);
  v10 = -v9 & 3;
  if ( v9 >= 0 && 3 * ((unsigned int)(v9 + v10) >> 2) <= 0x9C4 )
  {
    v11 = sub_15DA78();
    if ( v11 )
    {
      if ( v10 != 3 )
      {
        sub_15DC1C();
        sub_15DAA8(v11, 2);
        if ( v10 )
        {
          if ( sub_15DC28(v11, a1, &v17) >= 0 && sub_15DC28(v11, a1, v18) >= 0 )
          {
            v12 = &a1[v17 + v18[0]];
            v17 += v18[0];
            sub_15DD9C(v11, v12, v18);
            v13 = v18[0] + v17;
            v5 = v10 < v18[0] + v17;
            v17 += v18[0];
            if ( v5 )
            {
              v16 = v13 - v10;
              memmove(a1, &a1[v10], v13 - v10);
              v17 = v16;
              goto LABEL_17;
            }
          }
        }
        else if ( sub_15DC28(v11, a1, v18) >= 0 )
        {
          v15 = &a1[v18[0] + v17];
          v17 += v18[0];
          sub_15DD9C(v11, v15, v18);
          v17 += v18[0];
          goto LABEL_17;
        }
      }
      v17 = -1;
LABEL_17:
      sub_15DA88(v11);
      return v17;
    }
  }
  return -1;
}
