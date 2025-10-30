void sub_2C6A8()
{
  unsigned int v0; // r4
  int *v1; // r7
  int *v2; // r5
  int v3; // t1
  unsigned int v4; // r3
  bool v5; // cf
  int *v6; // r8
  int v7; // t1
  int v8; // r6
  int v9; // r1
  int v10; // r1
  int v11; // r8
  _DWORD *v12; // t1
  char v13[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_733CC <= 0 )
  {
    v0 = 1;
  }
  else
  {
    v0 = -1;
    v1 = (int *)dword_744C8;
    v2 = (int *)dword_744C8;
    do
    {
      v3 = *v2++;
      v4 = *(_DWORD *)(v3 + 56);
      v5 = 1;
      if ( v4 )
        v5 = v4 >= v0;
      if ( !v5 )
        v0 = v4;
    }
    while ( (int *)(dword_744C8 + 4 * dword_733CC) != v2 );
    if ( v0 == -1 )
    {
      v0 = 1;
    }
    else
    {
      v6 = (int *)dword_744C8;
      do
      {
        v7 = *v6++;
        v8 = *(_DWORD *)(v7 + 56);
        if ( v8 )
        {
          sub_49B34(v8, v0);
          if ( v9 )
          {
            do
              sub_49B34(v8, --v0);
            while ( v10 );
          }
        }
      }
      while ( v2 != v6 );
    }
    v11 = dword_68718;
    do
    {
      v12 = (_DWORD *)*v1++;
      v12[16] = sub_498D8(v12[16] * v11, v0);
      v12[15] = sub_498D8(v12[14], v0);
    }
    while ( v2 != v1 );
  }
  dword_68718 = v0;
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    snprintf(v13, 0x800u, "Global quota greatest common denominator set to %lu", v0);
    sub_20F58(7, v13, 0);
  }
}
