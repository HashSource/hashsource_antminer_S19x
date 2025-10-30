void __fastcall sub_1482AC(_DWORD *a1, unsigned int a2)
{
  _BYTE *v2; // r6
  _BYTE *v4; // r9
  int v5; // r7
  char *v6; // r0
  void *v7; // r10
  char *v8; // r4

  if ( a2 > 0x1FFFFFFF )
    sub_33D184("vector::reserve");
  v2 = (_BYTE *)a1[2];
  if ( a2 > (a1[4] - (int)v2) >> 3 )
  {
    v4 = (_BYTE *)a1[3];
    v5 = 8 * a2;
    if ( a2 )
    {
      v6 = (char *)sub_9836C(8 * a2);
      v7 = (void *)a1[2];
      v8 = v6;
    }
    else
    {
      v8 = 0;
      v7 = (void *)a1[2];
    }
    if ( v2 != v4 )
      memmove(v8, v2, v4 - v2);
    if ( v7 )
      sub_339E64(v7);
    a1[3] = &v8[v4 - v2];
    a1[4] = &v8[v5];
    a1[2] = v8;
  }
}
