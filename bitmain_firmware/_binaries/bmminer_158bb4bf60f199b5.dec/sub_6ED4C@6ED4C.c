int __fastcall sub_6ED4C(void **a1, void **a2)
{
  _BOOL4 v4; // r5
  char *v5; // r3
  char *v7; // r3
  char *v8; // r3

  if ( a2 )
  {
    if ( a1 )
    {
      v4 = a2 == a1;
      if ( *a1 != (void *)1 )
        v4 = 1;
      if ( !v4 && sub_6DCDC(a1, 1, 1) )
      {
        v5 = (char *)a1[3];
        *((_DWORD *)a1[4] + (_DWORD)v5) = a2;
        a1[3] = v5 + 1;
        return 0;
      }
    }
    v7 = (char *)a2[1];
    if ( v7 != (char *)-1 )
    {
      v8 = v7 - 1;
      a2[1] = v8;
      if ( !v8 )
        sub_6E5DC(a2);
    }
  }
  return -1;
}
