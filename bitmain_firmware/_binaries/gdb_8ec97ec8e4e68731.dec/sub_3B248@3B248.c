int __fastcall sub_3B248(_DWORD *a1, int a2, int (*a3)(void))
{
  int v4; // r5
  unsigned __int8 *v5; // r3
  int v6; // r6
  int v8; // r0

  v4 = a1[6];
  if ( v4 <= 0 )
  {
    if ( v4 )
    {
      v6 = a1[6];
    }
    else
    {
      v8 = a3();
      v6 = v8;
      if ( v8 < 0 )
      {
        if ( v8 == -2 )
        {
          a1[6] = 0;
        }
        else if ( v8 == -1 || v8 == -3 )
        {
          a1[6] = v8;
        }
      }
    }
  }
  else
  {
    v5 = (unsigned __int8 *)a1[7];
    v6 = *v5;
    a1[6] = v4 - 1;
    a1[7] = v5 + 1;
  }
  if ( a1[2] != -1 )
    sub_3AC6C((int)a1, 1);
  sub_3AE0C(a1);
  return v6;
}
