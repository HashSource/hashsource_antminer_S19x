char *sub_23150()
{
  int v0; // r4
  char *result; // r0
  int v2; // r7
  int v3; // r1
  _DWORD *v4; // r5
  _DWORD *v5; // lr
  char i; // r12
  int v7; // t1
  _DWORD v8[73]; // [sp+4h] [bp-124h] BYREF

  *(_BYTE *)(dword_A0D68 + 12935) = 0;
  sub_66410(v8);
  sub_22088((int)v8);
  v0 = dword_A0D68;
  result = (char *)memset((void *)(dword_A0D68 + 4), 0, 0x40u);
  v2 = v8[0];
  *(_BYTE *)(v0 + 12935) = 0;
  if ( v2 )
  {
    v3 = 0;
    v4 = v8;
    do
    {
      if ( v4[2] )
      {
        v5 = v4 + 2;
        result = 0;
        for ( i = *(_BYTE *)(v0 + 12935) + 1; ; ++i )
        {
          v7 = v5[1];
          ++v5;
          ++result;
          *(_DWORD *)(v0 + 4 * v7 + 4) = 1;
          if ( v4[2] <= (unsigned int)result )
            break;
        }
        *(_BYTE *)(v0 + 12935) = i;
      }
      ++v3;
      v4 += 18;
    }
    while ( v3 != v2 );
  }
  return result;
}
