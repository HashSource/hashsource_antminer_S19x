void sub_52B98()
{
  unsigned int v0; // r4
  int *v1; // r7
  int *v2; // r5
  int v3; // r2
  int v4; // t1
  unsigned int v5; // r3
  bool v6; // cf
  int *v7; // r8
  int v8; // t1
  int v9; // r6
  int v10; // r1
  int v11; // r1
  int v12; // r8
  _DWORD *v13; // t1
  int v14; // r2
  char v15[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_242F4C <= 0 )
  {
    v0 = 1;
  }
  else
  {
    v0 = -1;
    v1 = (int *)dword_244048;
    v2 = (int *)dword_244048;
    v3 = dword_244048 + 4 * dword_242F4C;
    do
    {
      v4 = *v2++;
      v5 = *(_DWORD *)(v4 + 56);
      v6 = 1;
      if ( v5 )
        v6 = v5 >= v0;
      if ( !v6 )
        v0 = v5;
    }
    while ( (int *)v3 != v2 );
    if ( v0 == -1 )
    {
      v0 = 1;
    }
    else
    {
      v7 = (int *)dword_244048;
      do
      {
        v8 = *v7++;
        v9 = *(_DWORD *)(v8 + 56);
        if ( v9 )
        {
          sub_772CC(v9, v0);
          if ( v10 )
          {
            do
              sub_772CC(v9, --v0);
            while ( v11 );
          }
        }
      }
      while ( v2 != v7 );
    }
    v12 = dword_9ED60;
    do
    {
      v13 = (_DWORD *)*v1++;
      v13[16] = sub_77070(v13[16] * v12, v0, v3);
      v13[15] = sub_77070(v13[14], v0, v14);
    }
    while ( v2 != v1 );
  }
  dword_9ED60 = v0;
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    snprintf(v15, 0x800u, "Global quota greatest common denominator set to %lu", v0);
    sub_47AB4(7, v15, 0);
  }
}
