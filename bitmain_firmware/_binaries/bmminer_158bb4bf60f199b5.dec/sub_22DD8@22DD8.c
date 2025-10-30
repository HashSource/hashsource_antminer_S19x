int sub_22DD8()
{
  unsigned __int8 *v0; // r4
  char *v2; // r3
  int v3; // r0
  int v4; // r12
  unsigned __int16 *v5; // r5
  int v6; // t1
  char *v7; // r2
  int v8; // r1

  LOWORD(v0) = 3432;
  if ( dword_9C294 == 2 )
  {
    HIWORD(v0) = 10;
    v2 = (char *)&unk_1371C4;
    v3 = *(_DWORD *)v0;
    v4 = *(_DWORD *)v0 + 64;
    v5 = (unsigned __int16 *)(*(_DWORD *)v0 + 12979);
    do
    {
      v6 = *(_DWORD *)(v3 + 4);
      v3 += 4;
      if ( v6 == 1 )
      {
        v8 = *v5;
        v7 = v2 + 312;
        do
        {
          *((_DWORD *)v2 + 1) = v8;
          v2 += 4;
        }
        while ( v2 != v7 );
      }
      else
      {
        v7 = v2 + 312;
      }
      v2 = v7;
    }
    while ( v3 != v4 );
  }
  else
  {
    HIWORD(v0) = 10;
  }
  return sub_30CAC(&unk_1371C8, v0[17], dword_9C298, 1);
}
